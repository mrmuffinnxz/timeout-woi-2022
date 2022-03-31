#include<bits/stdc++.h>
using namespace std;

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char *s, char *t) {
    while(s < t) {
        swap(s, t);
        s++;
        t--;
    }
}

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string x = "ABCDE";
    reverse(x.begin(), x.end());
    // reverse(&x[0], &x[x.length()-1]);
    cout << x;
}