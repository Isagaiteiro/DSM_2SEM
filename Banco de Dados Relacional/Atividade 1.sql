/*4) Selecione o ID, nome e telefone do cliente com a venda mais antiga*/
SELECT id, nome, telefone FROM cliente WHERE id IN (SELECT idcliente FROM venda WHERE datemissao = (SELECT MIN(datemissao) FROM venda))

/*5) Selecione o id, data de emissão e total (Valor) de cada venda*/
SELECT v.id, v.datemissao, sum(i.quantidade * i.precounitario) AS Total FROM venda v, itemvenda i WHERE i.idvenda = v.id GROUP BY 1,2

/*6) selecione todos os produtos que ainda nao foram vendidos NOT IN (Select ....)*/
SELECT * FROM produto WHERE id NOT IN (SELECT idproduto FROM itemvenda)

/*7) selecione todos os produtos que foram vendidos IN (Select ...)*/
SELECT * FROM produto WHERE id IN (SELECT idproduto FROM itemvenda)

/*8) selecione a quantidade de pedidos por cliente*/
SELECT c.id, COUNT(v.id) FROM cliente c, venda v WHERE c.id = v.idcliente GROUP BY 1

/*9) selecione a quantidade de pedidos por forma de pagamento*/
SELECT f.descricao, COUNT(v.idformapagto) AS quantidadepedidos FROM formapagto f, venda v WHERE f.id = v.idformapagto GROUP BY 1

/*10) Selecione o id, idformapagto do pedido e a descricao da forma de pagamento de todos os pedidos emitidos entre 01/01/2019 e 30/06/2019*/
SELECT v.id AS IDPedido, v.idformapagto AS IDFormapgto, f.descricao FROM venda v, formapagto f WHERE v.idformapagto=f.id AND datemissao BETWEEN '2019-01-01' AND '2019-06-30'

/*11) Selecione todos os clientes que não possuem pedidos*/
SELECT * FROM cliente WHERE id NOT IN (SELECT idcliente FROM venda)

/*12) Selecione a forma de pagamento com mais vendas realizadas*/
SELECT f.descricao, COUNT(v.idformapagto) AS quantidadepedidos FROM formapagto f, venda v WHERE f.id = v.idformapagto GROUP BY 1 ORDER BY 2 DESC LIMIT 1

/*13) Selecione a forma de pagamento com menos vendas realizadas*/ 
SELECT f.descricao, COUNT(v.idformapagto) AS quantidadepedidos FROM formapagto f, venda v WHERE f.id = v.idformapagto GROUP BY 1 ORDER BY 2 LIMIT 1

/*14) Selecione todas as vendas dos clientes que moram em Araras*/
SELECT * FROM venda WHERE idcliente IN (SELECT id FROM cliente WHERE municipio = 'ARARAS')

/*15) Crie uma nova tabela apenas com os clientes da Baixa Mogiana*/
CREATE TABLE clienteBaixaMogiana (
id INT AUTO_INCREMENT, 
nome VARCHAR(255), 
endereco VARCHAR(255), 
numero VARCHAR(10), 
complemento VARCHAR(255), 
bairro VARCHAR(255), 
municipio VARCHAR(100), 
cep VARCHAR(10), 
estado CHAR(2), 
telefone VARCHAR(20), 
idrepresentante INT,
idregiao INT,
tipo CHAR,
PRIMARY KEY (id),
FOREIGN KEY (idrepresentante) REFERENCES representante(id),
FOREIGN KEY (idregiao) REFERENCES regiao(id))

/*16) Atualize o salario dos empregados de acordo com o cargo*/
UPDATE empregado SET salario = 6000 WHERE idcargo=1
 