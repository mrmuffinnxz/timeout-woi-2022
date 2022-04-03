#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, L, K, C;
    cin >> N >> M >> L >> K >> C;

    int electric_cost = 0;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            int tmp;
            cin >> tmp;
            electric_cost += tmp;
        }
    }

    int fuel_cost = K * L * C;
    int total_cost = electric_cost + fuel_cost;
    cout << int(ceil(total_cost / float(C)));
}

/*
3 4
3 2
7
1 2 3 4
4 3 2 1
1 1 1 1
*/
