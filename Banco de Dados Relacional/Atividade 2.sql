/*

Subconsultas correlacionadas

As subconsultas pode ser usadas na cláusula Where, na linha do select (usada para trazer resultados de contagem e etc como um a coluna) e no from (transforma em uma tabela virtual para o from). 

*/

/*Subconsulta na cláusula Where*/
SELECT a.nome FROM cliente a WHERE 1 < (SELECT COUNT(b.idcliente) FROM venda b WHERE b.idcliente = a.id);

/*Subconsulta na linha do select*/
SELECT c.id, c.nome, (SELECT COUNT(v.idcliente) FROM venda v WHERE v.idcliente = c.id) AS qntde FROM cliente c;
SELECT f.descricao, (SELECT COUNT(v.idcliente) FROM venda v WHERE v.idformapagto = f.id) AS qntde from formapagto f;
