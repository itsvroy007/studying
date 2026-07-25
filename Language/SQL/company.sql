create database company;

use company;

create table employee(
  EmpID		 int primary key not null,
  First_name varchar(50) NOT NULL,
  Last_name  varchar(50) NOT NULL,
  Age		 int NOT NULL,
  Salary 	 int NOT NULL,
  Location	 varchar(50) NOT NULL 
);

show tables;

insert into employee values (01,"Priya" , "Bhati", 26,100000,"Bengal");
insert into employee values (02,"Sumedha" , "Kumari", 27,10000,"Delhi");
insert into employee values (03,"Rashmi" , "Tanwar", 29,50000,"Noida");
insert into employee values (04,"Ajay" , "Bhati", 24,30000,"Gurugram");
insert into employee values (05,"Ankit" , "Sangwan", 26,35000,"Mumbai");
insert into employee values (06,"Shivam" , "Mishra", 29,5000,"Bengaluru");

insert into employee(EmpID,First_name,Last_name,Age,Salary,Location) values (07,"Rohit","Sharma",28,65000,"Kerala");

drop table employee;

desc employee;

select * from employee;

# alter table employee add column EmpID INT primary key not null;