CREATE DATABASE estacionamento;

USE estacionamento;

CREATE TABLE Cliente(
CPF INT NOT NULL PRIMARY KEY,
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
Cliente_CPF INT,
cor VARCHAR(20),
FOREIGN KEY (Modelo_codMod) REFERENCES Modelo(codMod),
FOREIGN KEY (Cliente_cpf) REFERENCES Cliente (cpf)
);

CREATE TABLE Patio(
num INT NOT NULL PRIMARY KEY,
ender VARCHAR(40),
capacidade INT
);

CREATE TABLE Estaciona
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

INSERT INTO Cliente(CPF, Nome, DtNasc) values("04551750944", "Guilherme", "2000-01-14"),
("04551740947", "Jose", "1999-01-13"),
("04551550940", "Alberto", "1998-03-25");

INSERT INTO Modelo(codMod, Desc_2) values ("20", "Ford Ka"),
("25", "Hyundai HB20");

