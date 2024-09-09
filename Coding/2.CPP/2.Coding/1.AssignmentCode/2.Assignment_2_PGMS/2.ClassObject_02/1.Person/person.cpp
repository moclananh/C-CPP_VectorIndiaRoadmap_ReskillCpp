#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;
    string country;
    friend void PrintPerson(const Person &person);

public:
    // getter setter
    void setName(string name) { this->name = name; }
    string getName() { return name; }

    void setAge(int age) { this->age = age; }
    int getAge() { return age; }

    void setCountry(string country) { this->country = country; }
    string getCountry() { return country; }
};

int main(int argc, char const *argv[])
{
    Person p;
    p.setName("Thanh");
    p.setAge(22);
    p.setCountry("VietNam");

    cout << "User: " << p.getName() << " | Age: " << p.getAge() << " | Country: " << p.getCountry() << endl;

    return 0;
}
