#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    bool isprime[n+1];
    for(int i=0; i<n+1; i++) {
        isprime[i] = true;
    }

    for(int i=2; i<=n; i++) {
        if(isprime[i]) {
            cout << i << " ";
            for(int j=i+i; j<=n; j+=i) {
                isprime[j] = false;
            }
        }
    }
}