#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int result[] = {0, 0, 0, 0, 0};
    for(int i=1; i<=n; i++) {
        int tmp = i;
        int k = 0;
        while(tmp != 0) {
            int d = tmp % 10;
            tmp = tmp / 10;
            if(d <= 3) {
                result[k] += d;
            }else if(d == 4) {
                result[k]++;
                result[k+1]++;
            }else if(d == 5) {
                result[k+1]++;
            }else if(d <= 8) {
                result[k+1]++;
                result[k] += d - 5;
            }else {
                result[k]++;
                result[k+2]++;
            }
            k += 2;
        }
    }
    for(int i=0; i<5; i++) {
        cout << result[i] << " ";
    }
}