#include <iostream>
#include <string>
using namespace std;
struct Student {
    string studentName;
    string rollNo;
    int totalMarks;
};
void readStudentData(Student &s) {
    cout << "Enter student's name: ";
    getline(cin, s.studentName);
    cout << "Enter roll number: ";
    getline(cin, s.rollNo);
    cout << "Enter total marks obtained: ";
    cin >> s.totalMarks;
}
void displayStudentData(const Student &s) {
    cout << "\nStudent Information:" << endl;
    cout << "Name: " << s.studentName << endl;
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Total Marks: " << s.totalMarks << endl;
}

int main() {
    Student s;
    readStudentData(s);
    displayStudentData(s);

    return 0;
}
