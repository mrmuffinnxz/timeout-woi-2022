#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // for(int i=0; i<10; i++) {
    //     cout << "Before : " << i << "\n";
    //     for(i=0; i<10; i++) {
    //         cout << i << " ";
    //     }
    //     // cout << "After : " << i << "\n";
    //     cout << "Out Loop : " << i << "\n";
    // }

    for(int j=0; j<10; j++) {
        for(int i = 1; i <= 10; i++) {
            cout << i << " ";
        }
        cout << "\n";
    }
}