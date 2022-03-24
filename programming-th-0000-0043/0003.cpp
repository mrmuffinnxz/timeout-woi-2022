#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    cin >> s;

    bool isup = false, isdown = false;
    for(auto c : s) {
        isup = (isup || isupper(c));
        isdown = (isdown || islower(c));
    }
    
    if(isup && isdown) cout << "Mix";
    else if(isup) cout << "All Capital Letter";
    else cout << "All Small Letter";
}