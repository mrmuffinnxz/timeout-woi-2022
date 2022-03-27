#include <bits/stdc++.h>
using namespace std ;
void primesum(int n)
{
    // bool ans = false;
    // int n = 100000 ;
    int counts = 0 ;
    int sum = 0 ;
    bool prime[n + 1];
    
    memset(prime, true, sizeof(prime));
    
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int xs = 2 ; xs <= n ; xs++){
        if (prime[xs]) {
            counts++;
            cout << xs << " ";
        }
    }

    // if (n == 1) cout << 0 ;
    // else cout << "\n" << counts ;
    // if (prime[oko] == 1)cout << "is prime" ;
    // else cout << "is not prime" ;
}
int main () {
    int n , sum;
    cin >> n ; 
    primesum(n) ; 
}