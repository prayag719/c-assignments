#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main() {
    const int SIZE = 5;
    char* strings[SIZE] = {"prayag", "pratik", "prayag", "rohit", "sarthak"};
    map<string, int> stringCount;

    for (int i = 0; i < SIZE; ++i) {
        stringCount[strings[i]]++;
    }

    cout << "Duplicated strings are: ";
    for (const auto& pair : stringCount) {
        if (pair.second > 1) {
            cout << pair.first << " ";
        }
    }
    cout << endl;

    return 0;
}
