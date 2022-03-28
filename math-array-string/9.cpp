#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    for(int b=1; b<=n; b++) {
        for(int a=1; a<=b; a++) {
            float sum = a*a + b*b;
            float sqrtsum = sqrt(sum);
            if(sqrtsum == int(sqrtsum)) {
                cout << a << " " << b << " " << int(sqrtsum) << "\n";
            }
        }
    }
}