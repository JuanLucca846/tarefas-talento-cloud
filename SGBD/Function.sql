DELIMITER //

CREATE FUNCTION total_clientes_cadastrados(data_consulta DATE)
RETURNS INT
BEGIN
    DECLARE total INT;

    SELECT COUNT(*) INTO total
    FROM clientes
    WHERE DATE(data_cadastro) = data_consulta;

    RETURN total;
END;
//

DELIMITER ;

SELECT total_clientes_cadastrados('2024-06-08') AS total_clientes;
