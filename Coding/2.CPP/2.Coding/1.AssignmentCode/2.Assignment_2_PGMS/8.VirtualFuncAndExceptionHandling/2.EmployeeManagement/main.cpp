#include <iostream>
using namespace std;

class Employee
{
protected:
    int age;
    string name;
    int emp_id;
    string email;
    string contact_no;
    float salary;

public:
    Employee(int age, string name, int emp_id, string email, string contact_no)
    {
        this->age = age;
        this->name = name;
        this->emp_id = emp_id;
        this->email = email;
        this->contact_no = contact_no;
    }
    virtual void display()
    {
        cout << "Id: " << emp_id << "\t| Name: " << name << "\t| Age: " << age << "\t| Email: " << email
             << "\t| Contact: " << contact_no << "\t| True Salary: " << salary << endl;
    }
    virtual void calculateSalary() = 0;

    virtual ~Employee() {}
};

class PermanentEmployee : public Employee
{
protected:
    float basic;
    float da;
    float it;
    float gross_salary;
    float net_salary;

public:
    PermanentEmployee(int age, string name, int emp_id, string email_id, string contact_no, float basic)
        : Employee(age, name, emp_id, email_id, contact_no)
    {
        this->basic = basic;
    }
    void display() override
    {
        Employee::display();
        cout << "Basic: " << basic << "\t\t| DA: " << da << "\t| IT: " << it << "\t\t\t| Gross Salary: " << gross_salary
             << "\t| Net Salary: " << net_salary << endl;
    }

    void calculateSalary() override
    {
        da = 0.52 * basic;
        gross_salary = basic + da;
        it = 0.30 * gross_salary;
        net_salary = gross_salary - it;
        salary = net_salary;
    }
    ~PermanentEmployee() {}
};

class ContractEmployee : public Employee
{
protected:
    float wage;
    float total_hours;
    float total_wage;

public:
    ContractEmployee(int age, string name, int emp_id, string email_id, string contact_no, float wage, float total_hours)
        : Employee(age, name, emp_id, email_id, contact_no)
    {
        this->wage = wage;
        this->total_hours = total_hours;
    }

    void display() override
    {
        Employee::display();
        cout << "Wage: " << wage << "\t\t| Total hours: " << total_hours << "\t\t\t\t| Total wage: " << total_wage << endl;
    }

    void calculateSalary() override
    {
        total_wage = wage * total_hours;
        salary = total_wage;
    }
    ~ContractEmployee() {}
};

int main(int argc, char const *argv[])
{
    Employee *emp1 = new PermanentEmployee(30, "Thanh", 101, "Thanh@example.com", "1234567890", 50000);
    Employee *emp2 = new ContractEmployee(25, "Nhu", 102, "Nhu@example.com", "9876543210", 20, 40);

    emp1->calculateSalary();
    emp1->display();
    cout << endl;

    emp2->calculateSalary();
    emp2->display();
    cout << endl;

    delete emp1;
    delete emp2;

    return 0;
}