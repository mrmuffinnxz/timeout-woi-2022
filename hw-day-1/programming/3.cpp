#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    float thai, math, sci;
    cin >> thai >> math >> sci;

    cout << (thai * 1.0 + math * 2.0 + sci * 1.5) / 4.5;
}