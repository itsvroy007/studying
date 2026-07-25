
# Constraint
Primary Key -> uniquely identifies each row  
cant be multiple 
not null constraint

Foreign Key -> when a column in a table is pk while it is fk in another table
it can be multiple , duplicate and have null values
ex ->
create table tb_name (
  col_name datatype 
  Foreign key(column_name) reference other_tb_name(common_col_name)
);

UNIQUE -> all diff values in a column 

NOT NULL -> cant be null 

DEFAULT -> set a default value in all row of a column\

CHECK -> limit the allowed values in a column
ex -> constraint const_name check (conditions)

# DISTINCT KEYWORD -> remove the duplicacy and show non repeative value

# clauses
where -> to define some conditions

Limit -> to set upper limit on num of rows to be returned

GROUP BY -> grouping on basis of distinct value in a column 

having -> same as where or condition after grouping 

ORDER BY -> sorting in asc or desc order 
# operators 
1 Arithematic => + - / * %
2 Comparison => = ,!=, >=, <=, >, <
3 Logical -> and , or, not, in, between, all, like, any
4 bitwise -> & (and)  , | (or)

# aggregate functions -> multiple input and single output 
1 count() -> 
2 max() ->
3 min() ->
4 avg() ->
5 sum() ->


# show db
show databases;

# create DB
create database if not exists db_name;

create database db_name;

# drop DB
drop database if exists db_name;

drop database db_name;

# to know working db
select database();

# use db
use database_name;

# create table
create table table_name(
  col_name1 datatype constraint (like primrary key)
  col_name2 datatype constraint
  col_name3 datatype constraint
);

# to see all tables
show tables;

# to show details of table -> col and their types
desc table_name;

# to insert entry / multiple entries 
insert into table_name values (values acc to col seq );

insert into table_name (colums of table)values (
  (values1),
  (value2),
  (value3)
);


# general form
select cols
from tb_name
where conds
group by cols
having cond 
order by cols asc/desc;

# update 
use -> set SQL_SAFE_UPDATES = 0;
update tb_name
set col1 = val1 , col2 = val2
where conditions;

# delete
delete from tb_name
where conds;
if no cond then all rows deleted

# DDL data defination lang for change in table col -> Alter Drop 
# DML data maniplution lang  for entries in table-> SIDU (select,insert,delete,update)