2.Write a program to create classes for following
Create class called Employee, with the following members
Data Members:
a) age of int type
b) name of string type
e) emp_id of integer
c) email_id of string type
d) contact no of string type
f) salary of float type.
Member functions:

1. Constructor for initialization.
2. Print for Printing the data members . 3. Calculate Salary 4. Destructor.

Derive a class called Permanent Employee from Employee with following members.
Data members:
basic of float type
da of float type
it of float type
gross_salary of float type ,
net_salary of float type
Member function:

1. Constructor for initialization.
2. Print for Printing the data members .
3. Calculate Salary
   Note : (DA = 52% of Basic and IT = 30% of the gross salary).
   gross salary = basic + da;
   net_salary = (basic + da) - it; 4. Destructor

Derive a class called Contract Employee with following members.
Data Members:
A). wage of float type. (amount per hour)
B). total hours of float type
C). total wage of float type.
Member Functions:

1. Constructor for initialization.
2. Print for Printing the data members.
3. Calculate Salary
   Note : salary=wage\*total hours
   Use runtime polymorphism, to calculate the salary and also Print.
   If we store the Permanent employee object in Employee pointer calculations should be done
   according to Permanent employee and print also according to this class.
   If we store the Contract Employee object in in Employee pointer calculations should be done
   according to Contract employee and Print also according to this class.
