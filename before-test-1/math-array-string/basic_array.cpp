#include<bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int arr[10];
    memset(arr, 0, sizeof(arr));

    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << sizeof(arr2) / sizeof(arr2[0]) << "\n";

    int len = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[len];
    for(int i=0; i<len; i++) {
        arr3[i] = arr2[i];
        cout << arr3[i] << " ";
    }
}