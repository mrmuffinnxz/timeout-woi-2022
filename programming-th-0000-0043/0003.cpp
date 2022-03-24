#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, m;
    cin >> n >> m;

    int A[n][m], B[n][m];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> A[i][j];
    
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> B[i][j];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << A[i][j] + B[i][j] << " ";
        }
        cout << "\n";
    }
}