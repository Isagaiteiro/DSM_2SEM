/*Realizando consulta com case*/
SELECT c.id, c.nome, case when tipo = "F" then "Pessoa Fisica" when tipo = "J" then "Pessoa Juridica" ELSE "Sem Classificacao" END AS tipo FROM cliente c

/*Usando subconsulta dentro do case*/
SELECT c.id, c.nome, case when tipo = "F" then (SELECT r.nome FROM  representante r WHERE r.id = c.idrepresentante) when tipo = "J" then "Pessoa Juridica" ELSE "Sem Classificacao" END AS tipo FROM cliente c
