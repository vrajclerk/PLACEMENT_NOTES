USE ECOMM;
SELECT * FROM CUSTOMER;

CREATE VIEW customerView AS
SELECT name FROM CUSTOMER;

select name from customerView;