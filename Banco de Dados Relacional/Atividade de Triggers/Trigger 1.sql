delimiter @
CREATE TRIGGER TRG_AtualizaEstoque
	AFTER INSERT ON itemvenda
	FOR EACH row
	begin
		UPDATE produto
		SET estoque = estoque - NEW.quantidade
		WHERE id = NEW.idproduto;
	END @
delimiter ; /*Tem que fechar de novo para que o banco reconheça que esse delimiter é utilizado somente nesse trecho de código, dessa forma se tiver mais comandos no banco, eles vaolta a considerar o sinal padrão de fim do bloco de código*/


INSERT INTO itemvenda values (10,1,100,0.5)