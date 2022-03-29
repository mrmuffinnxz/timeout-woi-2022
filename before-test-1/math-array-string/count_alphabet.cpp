#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    int aplhabet_count[26];
    memset(aplhabet_count, 0, sizeof(aplhabet_count));
    for(int i=0; i<s.length(); i++) {
        aplhabet_count[tolower(s[i]) - 'a']++;
    }
    for(int i=0; i<26; i++) {
        if(aplhabet_count[i] > 0) {
            cout << char('a' + i) << " " << aplhabet_count[i] << "\n";
        }
    }
}