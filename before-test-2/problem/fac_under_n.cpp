#include<bits/stdc++.h>
using namespace std;

main() {
    int n;
    cin >> n;

    int p = 1;
    for(int i=1; i<n; i++) {
        p *= i;
        if(p >= n) {
            cout << p << " " << i;
            break;
        }
    }
}