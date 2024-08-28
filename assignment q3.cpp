#include <iostream>
using namespace std;

void printFibonacci(int n) {
int t1 = 0, t2 = 1, nextTerm = 0;
cout << "Fibonacci Series: " << t1 << ", " << t2;
for (int i = 1; i <= n-2; ++i) {
nextTerm = t1 + t2;
cout << ", " << nextTerm;
t1 = t2;
t2 = nextTerm;
    }
cout << endl;
}

int main() {
int n;
cout << "Enter the number of terms: ";
cin >> n;

if (n < 1) {
cout << "Please enter a positive integer greater than 0." << endl;
} else {
printFibonacci(n);
    }
    return 0;
}
