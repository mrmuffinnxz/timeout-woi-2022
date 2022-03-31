#include<bits/stdc++.h>
using namespace std;

main() {
    int x = 5;
    cout << x << "\n";
    cout << &x << "\n";\

    int *p = &x;
    cout << p << "\n";
    cout << *p << "\n";

    x = 6;
    cout << *p << "\n";

    cout << "-----------------\n";

    int arr[] = {1, 2, 3};
    cout << arr << "\n";
    cout << arr[1] << "\n";
    cout << &arr[1] << "\n";

    int *p1 = arr;
    cout << p1 << "\n";
    cout << *p1 << "\n";

    cout << *(p1+1) << "\n";
    cout << p1+1 << "\n";
}