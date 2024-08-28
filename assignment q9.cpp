#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Binary: " << bitset<32>(num) << endl;
    cout << "Octal: " << oct << num << endl;
    cout << "Hexadecimal: " << hex << num << endl;
    return 0;
}
