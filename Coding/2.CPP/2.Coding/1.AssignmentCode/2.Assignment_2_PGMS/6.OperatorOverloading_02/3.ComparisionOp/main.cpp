#include <iostream>
using namespace std;

class Student
{
    string name;
    double percentage;
    int age;

public:
    Student(string _name, double _percentage, int _age) : name(_name), percentage(_percentage), age(_age) {}
    void display()
    {
        cout << "Name: " << name << "\t|Percentage: " << percentage << "\t\t|Age: " << age << endl;
    }

    friend bool operator==(const Student &s1, const Student &s2);
    friend bool operator!=(const Student &s1, const Student &s2);
    friend bool operator<(const Student &s1, const Student &s2);
    friend bool operator<=(const Student &s1, const Student &s2);
    friend bool operator>(const Student &s1, const Student &s2);
    friend bool operator>=(const Student &s1, const Student &s2);
};

bool operator==(const Student &s1, const Student &s2)
{
    return (s1.percentage == s2.percentage) && (s1.age == s2.age);
}
bool operator!=(const Student &s1, const Student &s2)
{
    return !(s1 == s2);
}
bool operator<(const Student &s1, const Student &s2)
{
    if (s1.percentage == s2.percentage)
    {
        return s1.age < s2.age;
    }
    else
    {
        return s1.percentage < s2.percentage;
    }
}
bool operator<=(const Student &s1, const Student &s2)
{
    return (s1 < s2) || (s1 == s2);
}
bool operator>(const Student &s1, const Student &s2)
{
    return !(s1 <= s2);
}
bool operator>=(const Student &s1, const Student &s2)
{
    return !(s1 < s2);
}
int main(int argc, char const *argv[])
{
    Student s1("John", 85.0, 20);
    Student s2("Jane", 85.0, 21);
    Student s3("Bob", 90.0, 22);

    std::cout << "Comparing students:" << std::endl;
    if (s1 == s2)
    {
        std::cout << "s1 and s2 are equal" << std::endl;
    }
    else
    {
        std::cout << "s1 and s2 are not equal" << std::endl;
    }

    if (s1 < s2)
    {
        std::cout << "s1 is less than s2" << std::endl;
    }
    else
    {
        std::cout << "s1 is not less than s2" << std::endl;
    }

    if (s1 > s3)
    {
        std::cout << "s1 is greater than s3" << std::endl;
    }
    else
    {
        std::cout << "s1 is not greater than s3" << std::endl;
    }

    std::cout << "Displaying students:" << std::endl;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
