#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    string id;
    double salary;

public:
    // getter setter
    void setName(string n) { name = n; }

    string getName() { return name; }

    void setId(string i) { id = i; }

    string getId() { return id; }

    void setSalary(double s) { salary = s; }

    double getSalary() { return salary; }

    // Function to calculate salary based on performance
    void calculateSalary(double performance)
    {
        if (performance >= 90)
        {
            salary = salary * 1.1; // 10% increase
        }
        else if (performance >= 80)
        {
            salary = salary * 1.05; // 5% increase
        }
        else if (performance >= 70)
        {
            salary = salary * 1.02; // 2% increase
        }
        else
        {
            salary = salary * 0.95; // 5% decrease
        }
    }
};

int main(int argc, char const *argv[])
{
    Employee emp;
    emp.setName("Thanh");
    emp.setId("CE160136");
    emp.setSalary(100);
    emp.calculateSalary(90);
    cout << "ID: " << emp.getId() << " | Name: " << emp.getName() << " | Total salary: " << emp.getSalary() << endl;

    return 0;
}