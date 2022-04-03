#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, L, K, C;
    cin >> N >> M >> L >> K >> C;

    int lightcost = 0;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            int tmp;
            cin >> tmp;
            lightcost += tmp;
        }
    }

    int totalcost = lightcost + L*K*C;
    cout << int(ceil(totalcost/float(C)));
}