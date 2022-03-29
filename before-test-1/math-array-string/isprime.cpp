#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    if(n <= 1)  cout << "is not prime";
    else if(n == 2) cout << "is prime";
    else if(n % 2 == 0) cout << "is not prime";
    else {
        bool isprime = true;
        for(int i=3; i*i<=n; i+=2) {
            if(n % i == 0) {
                isprime = false;
                break;
            }
        }
        if(isprime) cout << "is prime";
        else cout << "is not prime";
    }
}