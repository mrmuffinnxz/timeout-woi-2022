#include<bits/stdc++.h>
using namespace std;

int N, M;
int general[100001];
int soldier[100001];

int find_general(int u) {
    while(u != general[u]) {
        u = general[u];
    }
    return u;
}

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    for(int i=1; i<=N; i++) {
        general[i] = i;
        cin >> soldier[i];
    }

    for(int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;

        int ga = find_general(a), gb = find_general(b);
        if(ga == gb) cout << "-1\n";
        else if(soldier[ga] > soldier[gb] || (soldier[ga] == soldier[gb] && ga < gb)) {
            cout << ga << "\n";
            general[gb] = ga;
            soldier[ga] += soldier[gb] / 2;
        }
        else {
            cout << gb << "\n";
            general[ga] = gb;
            soldier[gb] += soldier[ga] / 2;
        }
    }
}