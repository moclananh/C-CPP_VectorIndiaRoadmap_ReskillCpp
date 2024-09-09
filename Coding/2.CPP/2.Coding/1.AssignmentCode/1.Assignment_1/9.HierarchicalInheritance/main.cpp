#include <iostream>
using namespace std;
class Employee
{
protected:
    string name;
    int age;
    double salary;

public:
    Employee(string _name, int _age, double _salary) : name(_name), age(_age), salary(_salary) {}
    void display()
    {
        cout << "Name: " << name << "\t| Age: " << age << "\t| Salary: " << salary;
    }
};

class ITTeam : public Employee
{
    string it_level;

public:
    ITTeam(string _name, int _age, double _salary, string _it_level) : Employee(_name, _age, _salary), it_level(_it_level) {}
    void display()
    {
        Employee::display();
        cout << "\t| Level: " << it_level << endl;
    }
};

class SalesTeam : public Employee
{
    double salesTarget;

public:
    SalesTeam(string _name, int _age, double _salary, double _salesTarget) : Employee(_name, _age, _salary), salesTarget(_salesTarget) {}
    void display()
    {
        Employee::display();
        cout << "\t| Sales Target: " << salesTarget << endl;
    }
};

class MarketingTeam : public Employee
{
    string marketingStrategy;

public:
    MarketingTeam(string _name, int _age, double _salary, string _marketingStrategy) : Employee(_name, _age, _salary), marketingStrategy(_marketingStrategy) {}
    void display()
    {
        Employee::display();
        cout << "\t| Maketing Stratery: " << marketingStrategy << endl;
    }
};

int main()
{
    ITTeam it_team("Thanh", 22, 5000, "Junior");
    it_team.display();

    SalesTeam sales_team("Ngan", 22, 3600, 10000);
    sales_team.display();

    MarketingTeam maket_team("Ha", 23, 4000, "tech");
    maket_team.display();
    return 0;
}
