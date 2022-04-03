#include<bits/stdc++.h>
using namespace std;

struct Ingredient{
    int sour;
    int bitter;
};

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    struct Ingredient arr[n];
    for(int i=0; i<n ;i++) {
        cin >> arr[i].sour >> arr[i].bitter;
    }

    int mn = INT_MAX;
    int possibliity = pow(2, n);
    for(int i=1; i<possibliity; i++) {
        int tmp = i;
        int total_sour = 1, total_bitter = 0;
        for(int j=0; j<n; j++) {
            if(tmp % 2 == 1) {
                total_sour = total_sour * arr[j].sour;
                total_bitter = total_bitter + arr[j].bitter;
            }
            tmp /= 2;
        }
        mn = min(mn, abs(total_sour - total_bitter));
    }
    cout << mn;
}
