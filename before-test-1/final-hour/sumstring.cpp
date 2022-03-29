#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a, b;
    cin >> a >> b;

    int len_a = a.length(), len_b = b.length();
    int len_mx = max(len_a, len_b);

    if(len_a > len_b) {
        for(int i=0; i<len_a-len_b; i++) {
            b = "0" + b;
        }
    }else {
        for(int i=0; i<len_b-len_a; i++) {
            a = "0" + a;
        }
    }

    string result = "";
    int remainder = 0;
    for(int i=len_mx-1; i>=0; i--) {
        int mini_sum = (a[i] - '0') + (b[i] - '0') + remainder;
        result = to_string(mini_sum % 10) + result;
        remainder = mini_sum / 10;
    }

    if(remainder != 0) {
        result = to_string(remainder) + result;
    }

    cout << result;
}