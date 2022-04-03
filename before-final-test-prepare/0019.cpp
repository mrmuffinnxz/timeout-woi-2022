#include<bits/stdc++.h>
using namespace std;

// NON RECURSIVE METHOD

// main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int n;
//     cin >> n;

//     int arr[n][2];
//     for(int i=0; i<n ;i++) {
//         cin >> arr[i][0] >> arr[i][1];
//     }

//     int mn = INT_MAX;
//     int possibility = (1<<n);
//     for(int i=1; i<possibility; i++) {
//         int tmp = i, sour = 1, bitter = 0;
//         for(int j=0; j<n; j++) {
//             if(tmp%2 == 1) {
//                 sour = sour * arr[j][0];
//                 bitter = bitter + arr[j][1];
//             }
//             tmp /= 2;
//         }
//         mn = min(mn, abs(sour-bitter));
//     }
//     cout << mn;
// }

// RECURSIVE METHOD

int n;
int arr[11][2];

int cook(int x, int sour, int bitter, bool used = false) {
    if(x == n) {
        if(used) return abs(sour-bitter);
        else return INT_MAX;
    }
    return min(cook(x+1, sour*arr[x][0], bitter+arr[x][1], used || true), cook(x+1, sour, bitter, used));
}

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int i=0; i<n ;i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    cout << cook(0, 1, 0, 0);
}