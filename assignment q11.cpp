#include <iostream>
#include <string>
using namespace std;
struct Employee {
    string firstName;
    string lastName;
    double monthlySalary;
};
void emp_init(Employee *e, const string &first, const string &last, double sal) {
    e->firstName = first;
    e->lastName = last;
    e->monthlySalary = sal < 0 ? 0 : sal;
}

void set_salary(Employee *e, double sal) {
    if (sal < 0) {
        cout << "Salary cannot be negative." << endl;
        e->monthlySalary = 0;
    } else {
        e->monthlySalary = sal;
    }
}

void emp_display(const Employee *e) {
    cout << "\nEmployee Information:" << endl;
    cout << "First Name: " << e->firstName << endl;
    cout << "Last Name: " << e->lastName << endl;
    cout << "Monthly Salary: Rs. " << e->monthlySalary << endl;
    cout << "Yearly Salary: Rs. " << e->monthlySalary * 12 << endl;
}

void give_raise(Employee *e, double percentage) {
    e->monthlySalary += e->monthlySalary * (percentage / 100);
}

int main() {
    Employee emp1, emp2;
    emp_init(&emp1, "Prayag", "Pomaje", 5000);
    emp_init(&emp2, "Rohit", "wanave", 6000);
    cout << "Initial Salaries:" << endl;
    emp_display(&emp1);
    emp_display(&emp2);
    give_raise(&emp1, 10);
    give_raise(&emp2, 10);
    cout << "\nSalaries After 10% Raise:" << endl;
    emp_display(&emp1);
    emp_display(&emp2);

    return 0;
}
