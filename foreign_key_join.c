create table clientes(
ID int not null primary key auto_increment,
nome varchar(255) not null,
telefone varchar(16)
);

create table produtos(
ID int not null primary key auto_increment,
nome varchar(255) not null,
preco decimal(5,2)
);

create table pedidos(
ID int not null primary key auto_increment,
nome varchar(255) not null,
preco decimal(5,2)
);

alter table produtos modify column preco decimal (9,2) not null;

insert into clientes (nome, telefone) values ("Guilherme", "46998390000"),
("Felipe", "46998390001"), ("Maria", "46998390002"), ("Francisco", "46998390003"), ("Gepetto", "46998390004");

insert into produtos (nome, preco) values ('Arroz 5kg', 25.90), 
('Feijao carioca 1 kg', 8.50), 
('Leite Integral 1L', 4.30), 
('Oleo de Soja 900 ml', 7.20), 
('Pao Frances 500g', 6.00);

create table pedidos(
ID int not null primary key auto_increment,
data_pedido date not null,
ID_cliente int not null,
ID_produto int not null,
quantidade int not null,
total decimal(9,2) not null,

foreign key (ID_cliente) references clientes (ID),
foreign key (ID_produto) references produtos (ID)

);

insert into pedidos (data_pedido, id_cliente, id_produto, quantidade, total) values ("2025-10-09", 2, 5, 1, 6.00);

insert into pedidos (data_pedido, id_cliente, id_produto, quantidade, total) values ("2025-10-09", 1, 5, 1, 6.00);

---JOIN

select *from pedidos
	JOIN clientes ON pedidos.id_cliente = clientes.id;
	
SELECT
	pedidos.ID,
	pedidos.data_pedido,
	pedidos.ID_cliente,
	clientes.nome,
	pedidos.quantidade,
	pedidos.total
FROM pedidos
	JOIN clientes ON pedidos.ID_cliente = clientes.ID;
	
	SELECT
	pedidos.ID,
	pedidos.data_pedido,
	pedidos.ID_cliente,
	pedidos.quantidade,
	produtos.nome,
	pedidos.ID_produto,
	pedidos.total
FROM pedidos
	JOIN produtos ON pedidos.ID_produto = produtos.ID;