#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    string s = "";
    while(n) {
        s = to_string(n%2) + s;
        n /= 2;
    }
    cout << s;
}