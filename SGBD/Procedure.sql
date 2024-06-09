CREATE DATABASE db_vendas;

USE db_vendas;

CREATE TABLE tb_vendas (
    id INT AUTO_INCREMENT PRIMARY KEY,
    produto VARCHAR(255),
    quantidade INT,
    data_venda DATE
);

DROP TABLE db_vendas;

INSERT INTO tb_vendas (produto, quantidade, data_venda) VALUES
('Produto A', 10, '2024-06-08'),
('Produto B', 5, '2024-06-08'),
('Produto A', 8, '2024-06-07'),
('Produto C', 3, '2024-06-07');

SELECT * FROM tb_vendas;

DELIMITER //

CREATE PROCEDURE relatorio_diario()
BEGIN
    DECLARE data_atual DATE;
    DECLARE qtd_produtos INT;

    SET data_atual = CURDATE();

    SELECT SUM(quantidade) INTO qtd_produtos
    FROM tb_vendas
    WHERE data_venda = data_atual;

    IF qtd_produtos IS NOT NULL THEN
        SELECT CONCAT('Data: ', data_atual, ', Quantidade de Produtos Vendidos: ', qtd_produtos) AS Relatorio;
    ELSE
        SELECT CONCAT('Nenhum produto vendido na data: ', data_atual) AS Relatorio;
    END IF;
    
END //

DELIMITER ;

DROP PROCEDURE relatorio_diario;

CALL relatorio_diario();

