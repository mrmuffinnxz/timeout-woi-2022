#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    bool isprime = true;
    if(n % 2 == 0) {
        isprime = false;
    } else {
        for(int i=3; i*i<=n; i+=2) {
            if(n % i == 0) {
                isprime = false;
                break;
            }
        }
    }
    if(isprime) cout << "Prime\n";
    else cout << "Not Prime\n";
}