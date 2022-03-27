#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        cout << i << "\n";
        sum = sum + i;
    }
    cout << sum;
}