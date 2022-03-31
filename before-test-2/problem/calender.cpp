#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int bd, days;
    cin >> bd >> days;

    int calendar[6][7];
    memset(calendar, 0, sizeof(calendar));

    int current = bd - 1, count = 1;
    while(current < bd + days - 1) {
        calendar[current / 7][current % 7] = current - bd + 2;
        current++;
    }

    for(int i=0; i<6; i++) {
        for(int j=0; j< 7; j++) {
            if(calendar[i][j] == 0) {
                cout << " \t";
            }else cout << calendar[i][j] << "\t";
        }
        cout << "\n";
    }
}