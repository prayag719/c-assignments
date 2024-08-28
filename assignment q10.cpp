#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int compareNames(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char nameOfStudents[10][50];
    int n;
    cout << "Enter the number of students up to 10: ";
    cin >> n;
    cin.ignore();

    if (n > 10 || n <= 0) {
        cout << "Invalid number of students. Please enter a number between 1 and 10." << endl;
        return 1;
    }
    cout << "Enter the names of the students:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Student " << i + 1 << ": ";
        cin.getline(nameOfStudents[i], 50);
    }
    qsort(nameOfStudents, n, sizeof(nameOfStudents[0]), compareNames);
    cout << "\nSorted list of student names:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << nameOfStudents[i] << endl;
    }
    return 0;
}
