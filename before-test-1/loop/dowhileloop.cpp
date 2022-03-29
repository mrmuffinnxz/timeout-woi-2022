#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n = 1, sum = 0, c = 0;
    
    do {
        cin >> n;
        sum += n;
        c++;
    }while(n != 0);

    cout << sum / (c-1);
}