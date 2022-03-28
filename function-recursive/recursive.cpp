#include<bits/stdc++.h>
using namespace std;

int fibo(int n) {
    if(n == 0 || n == 1) return 1;
    return fibo(n-1) + fibo(n-2);
}

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    
    cout << fibo(n);
}