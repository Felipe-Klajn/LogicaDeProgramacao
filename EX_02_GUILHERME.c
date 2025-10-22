CREATE DATABASE estacionamento;

USE estacionamento;

CREATE TABLE Cliente(
CPF VARCHAR (14) NOT NULL PRIMARY KEY,
Nome VARCHAR(60),
DtNasc DATE
);

CREATE TABLE Modelo(
codMod INT NOT NULL PRIMARY KEY,
Desc_2 VARCHAR(40)
);

CREATE TABLE Veiculo(
Placa VARCHAR (8) NOT NULL PRIMARY KEY,
Modelo_codMod INT,
Cliente_CPF VARCHAR (14),
cor VARCHAR(20),
FOREIGN KEY (Modelo_codMod) REFERENCES Modelo(codMod),
FOREIGN KEY (Cliente_cpf) REFERENCES Cliente (cpf)
);

CREATE TABLE Patio(
num INT NOT NULL PRIMARY KEY,
ender VARCHAR(40),
capacidade INT
);

CREATE TABLE Estaciona(
cod INT NOT NULL PRIMARY KEY,
Patio_num INT,
Veiculo_placa VARCHAR(8),
dtEntrada VARCHAR(10),
dtSaida VARCHAR(10),
hsEntrada VARCHAR(10),
hsSaida VARCHAR(10),
FOREIGN KEY (Patio_num) REFERENCES Patio(num),
FOREIGN KEY (Veiculo_placa) REFERENCES Veiculo(placa)
);

alter table cliente modify CPF VARCHAR

INSERT INTO Cliente(CPF, Nome, DtNasc) values("04551750944", "Guilherme", "2000-01-14"),
("04551740947", "Jose", "1999-01-13"),
("04551550940", "Alberto", "1998-03-25");

INSERT INTO Modelo(codMod, Desc_2) values ("20", "Ford Ka"),
("25", "Hyundai HB20"),
("30", "Mustang Mach-E");


INSERT INTO Veiculo (placa, modelo_codMod, Cliente_cpf, cor) values ("AXT 2020", "20", "04551750944", "Branco"),
("BVN 5039", "25", "04551740947", "Azul"),
("MGM 2329", "30", "04551550940", "Preto");

INSERT INTO Patio (num, ender, capacidade) values ("1", "Terreo", "100"),
("2", "Piso 1", "110"),
("3", "Piso 2", "115");

INSERT INTO Estaciona (cod, Patio_num, Veiculo_placa, dtEntrada, dtSaida, hsEntrada, hsSaida) values ("1", "1", "AXT 2020", "2025-05-15", "2025-05-16", "13:00", "17:30"),
("2", "2", "BVN 5039", "2025-05-10", "2025-05-10", "11:00", "14:45"),
("3", "3", "MGM 2329", "2025-05-05", "2025-05-05", "12:30", "16:01");

INSERT INTO Cliente (cpf, nome, dtNasc) VALUES
('123.456.789-00', 'Ana Beatriz Silva', '1995-03-12'),
('234.567.890-11', 'Bruno Henrique Costa', '1988-07-25'),
('345.678.901-22', 'Carla Mendes Oliveira', '2001-11-09'),
('456.789.012-33', 'Diego Souza Ramos', '1992-01-30'),
('567.890.123-44', 'Eduarda Lima Pereira', '1998-09-15'),
('678.901.234-55', 'Felipe Gonçalves Rocha', '1985-06-05'),
('789.012.345-66', 'Gabriela Martins Ferreira', '1990-02-21'),
('890.123.456-77', 'Henrique Alves Santos', '1999-12-18'),
('901.234.567-88', 'Isabela Duarte Nogueira', '2003-04-07'),
('012.345.678-99', 'João Pedro Almeida', '1994-10-29');

INSERT INTO Modelo (codMod, Desc_2) VALUES
(1, 'Fiat Strada'),
(2, 'Volkswagen Gol'),
(3, 'Chevrolet Onix'),
(4, 'Toyota Corolla'),
(5, 'Honda Civic'),
(6, 'Hyundai HB20'),
(7, 'Jeep Compass'),
(8, 'Renault Duster'),
(9, 'Ford Ranger'),
(10, 'Nissan Kicks');

INSERT INTO Veiculo (placa, Modelo_codMod, Cliente_cpf, cor) VALUES
('ABC1A23', 1, '123.456.789-00', 'Prata'),
('BCD2B34', 2, '234.567.890-11', 'Branco'),
('CDE3C45', 3, '345.678.901-22', 'Preto'),
('DEF4D56', 4, '456.789.012-33', 'Cinza'),
('EFG5E67', 5, '567.890.123-44', 'Vermelho'),
('FGH6F78', 6, '678.901.234-55', 'Azul'),
('GHI7G89', 7, '789.012.345-66', 'Branco'),
('HIJ8H90', 8, '890.123.456-77', 'Verde'),
('IJK9I01', 9, '901.234.567-88', 'Preto'),
('JKL0J12', 10, '012.345.678-99', 'Prata');

INSERT INTO Patio (num, ender, capacidade) VALUES
(1, 'Rua das Flores, 120 - Centro', 10),
(2, 'Av. Brasil, 2350 - Jardim América', 25),
(3, 'Rua São Paulo, 45 - Industrial', 15),
(4, 'Av. Paraná, 980 - Zona Norte', 30),
(5, 'Rua das Acácias, 12 - Vila Nova', 5),
(6, 'Av. das Torres, 3100 - Aeroporto', 40),
(7, 'Rua Marechal Deodoro, 88 - Centro', 8),
(8, 'Av. Dom Pedro II, 1777 - Jardim Europa', 20),
(9, 'Rua XV de Novembro, 510 - Centro', 12),
(10, 'Av. Getúlio Vargas, 2220 - Santa Cruz', 18);

INSERT INTO Estaciona (cod, Patio_num, Veiculo_placa, dtEntrada, dtSaida, hsEntrada, hsSaida) VALUES
(1, 1, 'ABC1A23', '2025-10-10', '2025-10-10', '08:30', '12:15'),
(2, 2, 'BCD2B34', '2025-10-11', '2025-10-11', '09:00', '14:45'),
(3, 3, 'CDE3C45', '2025-10-11', '2025-10-11', '07:50', '13:20'),
(4, 4, 'DEF4D56', '2025-10-12', '2025-10-12', '10:10', '16:30'),
(5, 5, 'EFG5E67', '2025-10-12', '2025-10-12', '08:00', '12:00'),
(6, 6, 'FGH6F78', '2025-10-13', '2025-10-13', '09:15', '11:45'),
(7, 7, 'GHI7G89', '2025-10-13', '2025-10-13', '13:00', '17:00'),
(8, 8, 'HIJ8H90', '2025-10-14', '2025-10-14', '08:40', '10:55'),
(9, 9, 'IJK9I01', '2025-10-14', '2025-10-14', '14:00', '18:30'),
(10, 10, 'JKL0J12', '2025-10-15', '2025-10-15', '07:30', '11:20');

// Exiba a placa e o nome dos donos de todos os veículos. 

SELECT 
    * 
FROM Veiculo
    JOIN Modelo ON Veiculo.Modelo_codMod = Modelo.codMod
    JOIN Cliente ON Veiculo.Cliente_cpf = Cliente.cpf;


SELECT 
    -- Veiculo.*,
    Veiculo.placa,
    Cliente.nome
FROM Veiculo
    JOIN Cliente ON Veiculo.Cliente_cpf = Cliente.cpf;

// Exiba a placa e a cor do veículo que possui o código de estacionamento 1.
SELECT
Estaciona.Veiculo_placa,
Veiculo.cor
FROM Estaciona

JOIN Veiculo ON Estaciona.Veiculo_placa = veiculo.placa

where cod =1;

//A. Exiba a placa e o nome dos donos de todos os veículos.

SELECT 
    * 
FROM Veiculo
    JOIN Modelo ON Veiculo.Modelo_codMod = Modelo.codMod
    JOIN Cliente ON Veiculo.Cliente_cpf = Cliente.cpf;


SELECT 
    -- Veiculo.*,
    Veiculo.placa,
    Cliente.nome
FROM Veiculo
    JOIN Cliente ON Veiculo.Cliente_cpf = Cliente.cpf;
	
//B. Exiba o CPF e o nome do cliente que possui o veículo de placa “FGH6F78”
SELECT
Cliente.cpf,
Cliente.nome,
Veiculo.placa
FROM Veiculo
	JOIN Cliente ON Veiculo.Cliente_cpf = cliente.cpf
	
where Veiculo.placa = "FGH6F78";


//C. Exiba a placa e a cor do veículo que possui o código de estacionamento 1.
SELECT
Estaciona.Veiculo_placa,
Veiculo.cor
FROM Estaciona

JOIN Veiculo ON Estaciona.Veiculo_placa = veiculo.placa

where cod =1;

//D. Exiba a placa do veículo que possui o código de estacionamento 1.
SELECT
Estaciona.Veiculo_placa,
Estaciona.cod
FROM Estaciona

JOIN Veiculo ON Estaciona.Veiculo_placa = veiculo.placa

where cod =1;

//E. Exiba a placa e a descrição dos modelos dos veículos.
SELECT
Veiculo.placa,
Modelo.Desc_2
FROM Veiculo

JOIN Modelo ON Veiculo.modelo_codMod = modelo.codmod;

//F. Exiba o endereço, a data de entrada e de saída dos estacionamentos do veículo de placa “HIJ8H90”.
SELECT
Patio.ender,
Estaciona.dtEntrada,
Estaciona.dtSaida,
FROM Estaciona

JOIN Patio ON Estaciona.patio_num = patio.num

where Veiculo_placa = "HIJ8H90";

// G. Exiba a quantidade de vezes que os veículos de cor preto estacionaram
SELECT
	COUNT(Veiculo.cor)
FROM Estaciona
	JOIN Veiculo ON Estaciona.Veiculo_placa = Veiculo.placa
WHERE Veiculo.cor = "preto";

// H. Liste todos os clientes que possuem carro de modelo 1. 

SELECT
	Cliente.*
FROM
	Veiculo
	JOIN Cliente ON veiculo.cliente_cpf = cliente.cpf
WHERE Veiculo.Modelo_codMod = 1;

// I. Liste as placas, os horários de entrada e saída dos veículos de cor verde

SELECT
	Veiculo.placa,
	Estaciona.hsEntrada,
	Estaciona.hsSaida,
	Veiculo.cor
FROM Estaciona

JOIN Veiculo ON Estaciona.Veiculo_placa = veiculo.placa

where veiculo.cor = "verde";

// J. Liste todos os estacionamentos do veículo de placa “EFG5E67”
SELECT
	Estaciona.*
FROM 
	Estaciona
JOIN Veiculo ON Estaciona.Veiculo = Veiculo.placa
WHERE
	Veiculo.placa = "EFG5E67";
	
// K. Exiba o nome do cliente que possui o veículo cujo código do estacionamento é 2	
SELECT
	Cliente.nome
FROM Estaciona
	JOIN Veiculo ON Estaciona.Veiculo_placa = veiculo.placa
	JOIN Cliente ON Veiculo.Cliente_cpf = Cliente.cpf
WHERE cod =2;

// L. Exiba o CPF do cliente que possui o veículo cujo código do estacionamento é 3
SELECT
	Cliente.cpf,
	Estaciona.cod
FROM
	Estaciona
JOIN Veiculo ON Estaciona.Veiculo_placa = Veiculo.placa
JOIN Cliente ON Veiculo.cliente_cpf = cliente.cpf
WHERE cod = 3;

// M. Exiba a descrição do modelo do veículo cujo código do estacionamento é 2. 
SELECT
	Estaciona.cod,
	Modelo.Desc_2
FROM
	Estaciona
JOIN Veiculo ON Estaciona.Veiculo_placa = Veiculo.placa
JOIN Modelo ON Veiculo.Modelo_codMod = Modelo.codMod
WHERE cod = 2;

// N. Exiba a placa, o nome dos donos e a descrição dos modelos de todos os veículos.


