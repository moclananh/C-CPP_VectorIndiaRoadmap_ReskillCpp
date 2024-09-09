#include <iostream>
using namespace std;
class Student
{
protected:
    string id;
    string name;
    string email;
    string address;

public:
    Student(string _id, string _name, string _email, string _address) : id(_id), name(_name), email(_email), address(_address) {}
    void display()
    {
        cout << "Student" << endl;
        cout << "ID: " << id << "\t|Name: " << name << "\t|Email: " << email << "\t|Address: " << address << endl;
    }
};

class Exam : public Student
{
protected:
    double math;
    double science;
    double english;
    double hindi;
    double social;
    double computer;

public:
    Exam(string _id, string _name, string _email, string _address, double _math, double _science, double _english, double _hindi, double _social, double _computer)
        : Student(_id, _name, _email, _address), math(_math), science(_science), english(_english), hindi(_hindi), social(_social), computer(_computer) {}
    void display()
    {
        Student::display();
        cout << "\nMark report" << endl;
        cout << "Math: " << math << "\t|Science: " << science << "\t|Englist: " << english << "\t|Hindi: " << hindi << "\t|Social: " << social << "\t|Computer: " << computer << endl;
    }
};

class Result : public Exam
{
    double totalMarks;
    double avg;

public:
    Result(string _id, string _name, string _email, string _address, double _math, double _science, double _english, double _hindi, double _social, double _computer)
        : Exam(_id, _name, _email, _address, _math, _science, _english, _hindi, _social, _computer)
    {
        totalMarks = math + science + english + hindi + social + computer;
        avg = totalMarks / 6;
    }
    void display()
    {
        Exam::display();
        cout << "\nTotal mark: " << totalMarks << "\t|AVG mark: " << avg << endl;
    }
};

int main()
{
    Result result("CE160136", "John Doe", "john@example.com", "123 Main St", 90, 85, 95, 80, 75, 90);
    result.display();
    return 0;
}