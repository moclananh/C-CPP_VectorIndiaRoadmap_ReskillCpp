#include <iostream>
using namespace std;
// Forward declaration of DB class
class DB;

// Class to store distance in meters and centimeters
class DM
{
private:
    int meters;
    int centimeters;

public:
    // Constructor
    DM(int m, int c) : meters(m), centimeters(c) {}

    // Getter methods
    int getMeters() const { return meters; }
    int getCentimeters() const { return centimeters; }

    // Display distance in meters and centimeters
    void display() const
    {
        cout << meters << " meters " << centimeters << " centimeters" << endl;
    }

    // Friend function to add DM and DB objects
    friend DM add(const DM &dm, const DB &db);
    friend DB add(const DB &db, const DM &dm);
};

// Class to store distance in feet and inches
class DB
{
private:
    int feet;
    int inches;

public:
    // Constructor
    DB(int f, int i) : feet(f), inches(i) {}

    // Getter methods
    int getFeet() const { return feet; }
    int getInches() const { return inches; }

    // Display distance in feet and inches
    void display() const
    {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    // Friend function to add DM and DB objects
    friend DM add(const DM &dm, const DB &db);
    friend DB add(const DB &db, const DM &dm);
};

// Function to convert feet and inches to meters and centimeters
DM convertToDM(const DB &db)
{
    int totalInches = db.getFeet() * 12 + db.getInches();
    int totalCentimeters = totalInches * 2.54;
    int meters = totalCentimeters / 100;
    int centimeters = totalCentimeters % 100;
    return DM(meters, centimeters);
}

// Function to convert meters and centimeters to feet and inches
DB convertToDB(const DM &dm)
{
    int totalCentimeters = dm.getMeters() * 100 + dm.getCentimeters();
    int totalInches = totalCentimeters / 2.54;
    int feet = totalInches / 12;
    int inches = totalInches % 12;
    return DB(feet, inches);
}

// Function to add DM and DB objects and return a DM object
DM add(const DM &dm, const DB &db)
{
    DM dbInDM = convertToDM(db);
    int totalCentimeters = dm.getCentimeters() + dbInDM.getCentimeters();
    int totalMeters = dm.getMeters() + dbInDM.getMeters() + (totalCentimeters / 100);
    totalCentimeters %= 100;
    return DM(totalMeters, totalCentimeters);
}

// Function to add DM and DB objects and return a DB object
DB add(const DB &db, const DM &dm)
{
    DB dmInDB = convertToDB(dm);
    int totalInches = db.getInches() + dmInDB.getInches();
    int totalFeet = db.getFeet() + dmInDB.getFeet() + (totalInches / 12);
    totalInches %= 12;
    return DB(totalFeet, totalInches);
}

int main()
{
    int meters, centimeters, feet, inches;
    char choice;

    // Input values for DM object
    cout << "Enter distance in meters and centimeters:" << endl;
    cout << "Meters: ";
    cin >> meters;
    cout << "Centimeters: ";
    cin >> centimeters;
    DM dm(meters, centimeters);

    // Input values for DB object
    cout << "Enter distance in feet and inches:" << endl;
    cout << "Feet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inches;
    DB db(feet, inches);

    cout << "Do you want the result in meters and centimeters (M) or feet and inches (F)?" << endl;
    cin >> choice;
    while (choice != 'M' && choice != 'm' && choice != 'F' && choice != 'f')
    {
        cout << "Invalid choice. Please enter M or F." << endl;
        cout << "Do you want the result in meters and centimeters (M) or feet and inches (F)?" << endl;
        cin >> choice;
    }

    if (choice == 'M' || choice == 'm')
    {
        DM result = add(dm, db);
        cout << "Result:" << endl;
        result.display();
    }
    else if (choice == 'F' || choice == 'f')
    {
        DB result = add(db, dm);
        cout << "Result:" << endl;
        result.display();
    }

    return 0;
}