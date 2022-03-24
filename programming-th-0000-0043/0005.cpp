#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    double a, b;
    cin >> a >> b;

    cout << setprecision(6) << fixed;
    cout << sqrt(a * a + b * b);
}