create table employees(
employee_id char(5) primary key,
first_name nvarchar(20),
last_name nvarchar(20),
email nvarchar(20),
phone_number int,
hire_date date,
job_id char(5),
salary int,
commission_pct int,
manager_id char(5),
department_id char(5)
)

create table Departments(
department_id char(5) primary key,
department varchar(20),
)

/*1*/
select * from employees

/*2*/
SELECT first_name, last_name, salary
from employees

/*3*/
select * from employees
where salary > 5000

/*4*/
select * from employees
where last_name like 'A%'

/*5*/
SELECT first_name, last_name, department_id
from employees

/*6*/
select count(*) from employees
 where department_id = 40001

select count(*) from employees
where department_id = 40002

/*7*/
select count(*) from employees
 where department_id = 40001

/*8*/
insert into employees
(employee_id, first_name, last_name, email, phone_number, hire_date, job_id, salary, commission_pct, manager_id, department_id)
values
(10012, 'Nguyen', 'Tan Chuong', 'asas@gmail.com', 0774731062, '2022/3/4', 20001, 5000, 30, 30001, 40001)

/*9*/
update employees
set salary = salary * 1.1

/*10*/
delete from employees
where employee_id = 10010