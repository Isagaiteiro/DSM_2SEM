CREATE TABLE movimentacao (
	id BIGINT AUTO_INCREMENT,
	datamovimento DATE,
	idproduto INT,
	quantidade INT,
	precounitario DECIMAL,
	tipomovimento CHAR,
	numdocto INT,	
	PRIMARY KEY (id),
	FOREIGN KEY (idproduto) REFERENCES produto(id)
)

delimiter @
CREATE TRIGGER TRG_LogDeTransacoes
	AFTER INSERT ON itemvenda
	FOR EACH row
	begin
		INSERT INTO movimentacao VALUES (NULL, CURDATE(), NEW.idproduto, NEW.quantidade, NEW.precounitario, "S", NEW.idvenda);
	END @
delimiter ;       


