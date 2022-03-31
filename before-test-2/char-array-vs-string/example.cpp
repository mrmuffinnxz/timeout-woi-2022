#include<bits/stdc++.h>
using namespace std;

main() {
    char name[10] = "John"; // Array of char
    cout << name << "\n";
    cout << strlen(name) << "\n";
    cout << strcat(name, "NNNNNN") << "\n";

    string name2 = "John2"; // Object of class String
    cout << name2 << "\n";
    cout << name2.length() << "\n";
    cout << name2 + "NNNNNN" << "\n";
    cout << name2.substr(0, 3) << "\n";
}