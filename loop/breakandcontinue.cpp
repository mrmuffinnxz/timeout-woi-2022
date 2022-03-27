#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // for(int i=2; i<=100; i+=2) {
    //     cout << i << " ";
    // }

    for(int i=1; i<=100; i++) {
        if(i%2 == 1) continue;
        cout << i << " ";
    }

    for(int i=1; i<=100; i++) {
        if(i > 50) break;
        cout << i << " ";
    }

    // for(int j=0; j<10; j++) {
    //     for(int i = 1; i <= 10; i++) {
    //         if(i % 2 == 0) continue;
    //         cout << i << " ";
    //     }
    //     cout << "END LINE\n";
    // }
}