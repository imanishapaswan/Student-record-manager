
#include <iostream>
#include <string>
#include<fstream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    string branch;
    int semester;
    float cgpa;

public:
    void addStudent() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Branch: ";
        getline(cin, branch);

        cout << "Enter Semester: ";
        cin >> semester;

        cout << "Enter CGPA: ";
        cin >> cgpa;
        cout << "\nCGPA entered: " << cgpa << endl;
    }
       
       void saveToFile() {
        ofstream outFile("student.txt", ios::app);
        if (outFile.is_open()) {

            outFile<<rollNo<<","<< name <<","<< branch <<","<< semester <<","<< cgpa <<","<<endl;
            outFile.close();

            cout << "\nRecord saved successfully!\n";
        }
        else {
            cout<<"\nError saving record!\n";
        }
       }

    void displayStudent() {
        cout << "\n--- Student Details ---\n";
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Branch: " << branch << endl;
        cout << "Semester: " << semester << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s1;

    s1.addStudent();
    s1.saveToFile();
    s1.displayStudent();

    return 0;
}
