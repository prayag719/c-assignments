#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int totalMarks = 0;
    char grade;
    cout << "Enter marks for five subjects:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];
        totalMarks += marks[i];
    }
    if (totalMarks >= 90) {
        grade = 'Ex';
    } else if (totalMarks >= 80) {
        grade = 'A';
    } else if (totalMarks >= 70) {
        grade = 'B';
    } else if (totalMarks >= 60) {
        grade = 'C';
    } else {
        grade = 'F';
    }
    cout << "\nTotal Marks: " << totalMarks << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}
