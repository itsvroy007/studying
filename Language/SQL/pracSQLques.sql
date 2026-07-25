
# apna cllg ques prac 

ques1

create database if not exists XYZ;

use XYZ;

create table employee (
  id int primary key not null ,
  name varchar(30),
  salary int
);

insert into employee (id,name,salary) values (
  (1,"aman",25000),(2,"bob",30000),(3,"casey",40000)
);

select * from employee;

ques3
select count(cust_id),mode 
from payment
group by mode 
