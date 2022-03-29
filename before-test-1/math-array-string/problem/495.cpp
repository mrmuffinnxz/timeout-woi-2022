#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++){
            cout << "-";
        }
        for(int j=0; j<i+1; j++){
            if(n % 2 == 0) {
                if(j % 2 == 0) {
                    cout << "*";
                }else {
                    cout << "^";
                }
            } else {
                if(j % 2 == 0) {
                    cout << "^";
                }else {
                    cout << "*";
                }
            }
        }
        cout << "\n";
    }
}