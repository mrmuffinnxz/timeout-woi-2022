#include<bits/stdc++.h>
using namespace std;

void plusOne(int n) {
    // int n = x;
    n = n + 1;
    cout << "IN plusOne: " << n << "\n";
}

void plusOnePointer(int *n) {
    *n = *n + 1;
}

main() {
    int x = 5;
    cout << x << "\n";

    plusOne(x);
    cout << x << "\n";

    plusOnePointer(&x);
    cout << x << "\n";
}