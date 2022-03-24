#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int a, b, c;
    cin >> a >> b >> c;
    
    int score = a + b + c;
	if(score >= 80) cout << "A";
	else if(score >= 75) cout << "B+";
	else if(score >= 70) cout << "B";
	else if(score >= 65) cout << "C+";
	else if(score >= 60) cout << "C";
	else if(score >= 55) cout << "D+";
	else if(score >= 50) cout << "D";
	else cout << "F";
}