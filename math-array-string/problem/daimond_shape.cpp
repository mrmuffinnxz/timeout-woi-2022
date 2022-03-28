#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    // Method 1

    // for(int i=0; i<n; i++) {
    //     if(i <= n/2) {
    //         for(int j=0; j<n/2-i; j++) {
    //             cout << " ";
    //         }
    //         for(int j=0;j<2*i+1;j++) {
    //             cout << "+";
    //         }
    //     } else {
    //         for(int j=0; j<i-n/2; j++) {
    //             cout << " ";
    //         }
    //         for(int j=0;j<2*(n-i-1)+1;j++) {
    //             cout << "+";
    //         }
    //     }
    //     cout << "\n";
    // }


    // Staff Q

    // for(int i=0; i<=n/2; i++) {
    //     for(int j=0; j<n/2-i; j++) {
    //         cout << " ";
    //     }
    //     for(int j=0;j<2*i+1;j++) {
    //         cout << "+";
    //     }
    //     cout << "\n";
    // }

    // for(int i=n/2+1; i<n; i++) {
    //     for(int j=0; j<i-n/2; j++) {
    //         cout << " ";
    //     }
    //     for(int j=0;j<2*(n-i-1)+1;j++) {
    //         cout << "+";
    //     }
    // }

    // Method 2
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i <= n/2) {
               if(j >= n/2-i && j <= n/2+i) {
                    cout << "+";
                } else {
                    cout << " ";
                } 
            } else {
                if(j < (i-n/2) || j > (n+n/2-i-1)) {
                    cout << " ";
                } else {
                    cout << "+";
                }
            }
        }
        cout << "\n";
    }
}