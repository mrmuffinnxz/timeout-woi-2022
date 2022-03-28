#include<bits/stdc++.h>
using namespace std;

/*
<type> <name>(<parameter...>) {
    <statement...>
    return <expression>;
}
*/

/*
    <type>
    void -> ไม่มีการ return ค่าใด ๆ
    int -> มีการ return ค่าเป็น int
    float -> มีการ return ค่าเป็น float
    bool -> มีการ return ค่าเป็น boolean
    char -> มีการ return ค่าเป็น char
    string -> มีการ return ค่าเป็น string
*/

// void helloWorld(string name, int age) {
//     if(age > 10) {
//         cout << "Too Old\n";
//         return;
//     }
//     cout << "hello world, " << name << "\n";
//     cout << "say hi, " << name << "\n";
//     cout << "goodbye, " << name << "\n";
// }

// int pow2(int n) {
//     return n * n;
// }

// void pow2(int n) {
//     cout << n * n;
// }

int pow2(int n) {
    return n * n;
}

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // string s;
    // cin >> s;
    // helloWorld(s, 10);

    cout << sqrt(pow2(3) + pow2(4));
}