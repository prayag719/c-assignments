#include <iostream>
#include <map>
#include <cctype>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    map<char, int> countMap;

    for (char c : str) {
        if (isalpha(c)) {
            c = toupper(c);
            countMap[c]++;
        }
    }
    cout << "Occurrences of each alphabet:" << endl;
    for (const auto& pair : countMap) {
        cout << pair.first << " : " << pair.second << endl;
    }
    return 0;
}
