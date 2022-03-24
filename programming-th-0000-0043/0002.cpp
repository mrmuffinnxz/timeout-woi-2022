#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t, n, mx = INT_MIN, mn = INT_MAX;
    cin >> t;
    while(t--) {
        cin >> n;
        mx = max(mx, n);
        mn = min(mn, n);
    }
    cout << mn << "\n" << mx;
}