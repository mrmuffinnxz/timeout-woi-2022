#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int time[10001];
    memset(time, 0, sizeof(time));
    
    for(int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        time[a]++;
        time[b]--;
        // for(int j=a; j<b; j++) {
        //     time[j]++;
        // }
    }

    for(int i=1; i<10001; i++) {
        time[i] = time[i] + time[i-1];
    }

    int mx = INT_MIN;
    for(int i=0; i<10001; i++) {
        mx = max(mx, time[i]);
        // if(time[i] > mx) {
        //     mx = time[i];
        // }
    }
    cout << mx;
}