delimiter @
CREATE OR REPLACE TRIGGER TRG_AtualizaEstoque2
	AFTER DELETE ON itemvenda
	FOR EACH row
	begin
		UPDATE produto
		SET estoque = estoque - OLD.quantidade
		WHERE id = OLD.idproduto;
	END @
delimiter ;

DELETE FROM itemvenda WHERE idvenda = 10 AND idproduto = 1;