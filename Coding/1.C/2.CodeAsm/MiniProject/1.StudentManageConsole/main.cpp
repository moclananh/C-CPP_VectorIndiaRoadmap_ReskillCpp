#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Thêm thư viện này để sử dụng remove_if
#include <limits>    // Thêm thư viện này để sử dụng numeric_limits

using namespace std;

struct Student
{
    int id;
    string name;
    int age;
    string major;
};

vector<Student> students;

void Menu()
{
    cout << "Welcome to MLA System" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Display Students" << endl;
    cout << "3. Delete Student" << endl;
    cout << "4. Update Student" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

bool isValidID(int id)
{
    return id > 0;
}

bool isValidAge(int age)
{
    return age > 0 && age < 150;
}

bool isValidString(const string &str)
{
    return !str.empty();
}

void AddStudent()
{
    Student student;

    // Kiểm tra ID
    do
    {
        cout << "Enter ID: ";
        cin >> student.id;
        if (!isValidID(student.id))
        {
            cout << "Invalid ID! Please enter a positive number." << endl;
        }
        while (true)
        {
            for (const auto &s : students)
            {
                if (s.id == student.id)
                {
                    cout << "ID Already exist!, try again" << endl;
                }
            }
        }

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Xóa bỏ các ký tự còn lại trong input buffer
    } while (!isValidID(student.id));

    // Kiểm tra Tên
    do
    {
        cout << "Enter Name: ";
        getline(cin, student.name);
        if (!isValidString(student.name))
        {
            cout << "Invalid Name! Please enter a non-empty string." << endl;
        }
    } while (!isValidString(student.name));

    // Kiểm tra Tuổi
    do
    {
        cout << "Enter Age: ";
        cin >> student.age;
        if (!isValidAge(student.age))
        {
            cout << "Invalid Age! Please enter a number between 1 and 150." << endl;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Xóa bỏ các ký tự còn lại trong input buffer
    } while (!isValidAge(student.age));

    // Kiểm tra Chuyên ngành
    do
    {
        cout << "Enter Major: ";
        getline(cin, student.major);
        if (!isValidString(student.major))
        {
            cout << "Invalid Major! Please enter a non-empty string." << endl;
        }
    } while (!isValidString(student.major));

    students.push_back(student);
    cout << "Student added successfully!" << endl;
}

void DisplayStudents()
{
    cout << "List of Students:" << endl;
    for (const auto &student : students)
    {
        cout << "ID: " << student.id << ", Name: " << student.name
             << ", Age: " << student.age << ", Major: " << student.major << endl;
    }
}

void DeleteStudent()
{
    int id;
    cout << "Enter ID of the student to delete: ";
    cin >> id;
    auto it = remove_if(students.begin(), students.end(), [id](const Student &student)
                        { return student.id == id; });
    if (it != students.end())
    {
        students.erase(it, students.end());
        cout << "Student deleted successfully!" << endl;
    }
    else
    {
        cout << "Student not found!" << endl;
    }
}

void UpdateStudent()
{
    int id;
    cout << "Enter ID of the student to update: ";
    cin >> id;
    for (auto &student : students)
    {
        if (student.id == id)
        {
            // Kiểm tra Tên
            do
            {
                cout << "Enter new Name: ";
                cin.ignore();
                getline(cin, student.name);
                if (!isValidString(student.name))
                {
                    cout << "Invalid Name! Please enter a non-empty string." << endl;
                }
            } while (!isValidString(student.name));

            // Kiểm tra Tuổi
            do
            {
                cout << "Enter new Age: ";
                cin >> student.age;
                if (!isValidAge(student.age))
                {
                    cout << "Invalid Age! Please enter a number between 1 and 150." << endl;
                }
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Xóa bỏ các ký tự còn lại trong input buffer
            } while (!isValidAge(student.age));

            // Kiểm tra Chuyên ngành
            do
            {
                cout << "Enter new Major: ";
                getline(cin, student.major);
                if (!isValidString(student.major))
                {
                    cout << "Invalid Major! Please enter a non-empty string." << endl;
                }
            } while (!isValidString(student.major));

            cout << "Student updated successfully!" << endl;
            return;
        }
    }
    cout << "Student not found!" << endl;
}

int main()
{
    int choice;
    do
    {
        Menu();
        cin >> choice;
        cin.ignore(); // Bỏ qua ký tự newline sau khi nhập choice
        switch (choice)
        {
        case 1:
            AddStudent();
            break;
        case 2:
            DisplayStudents();
            break;
        case 3:
            DeleteStudent();
            break;
        case 4:
            UpdateStudent();
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
            break;
        }
        cout << endl;
    } while (choice != 5);

    return 0;
}
