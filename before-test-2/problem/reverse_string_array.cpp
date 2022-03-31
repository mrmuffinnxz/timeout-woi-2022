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

    char s[100];
    gets(s);
    reverse(&s[0], &s[strlen(s)-1]);
    cout << s;
}