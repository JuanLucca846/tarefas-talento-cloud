create database talent_cloud;

use talent_cloud;

create table Aluno(
	 id_aluno int not null auto_increment,
     nome_aluno varchar(255) not null,
     idade int not null,
     id_curso int,
     primary key(id_aluno),
     foreign key (id_curso) references Curso(id_curso)
);

create table Curso(
	id_curso int not null auto_increment,
    nome_curso varchar(255) not null,
    primary key(id_curso)
)

select * from Aluno;
select * from Curso;

INSERT INTO Curso (nome_curso) VALUES
('Engenharia de Software'),
('Ciência da Computação');

INSERT INTO Aluno (nome_aluno, idade, id_curso) VALUES
('João', 22, 1),
('Maria', 20, 2);

select A.nome_aluno, C.nome_curso 
from ALuno A
inner join Curso C on A.id_curso = C.id_curso;