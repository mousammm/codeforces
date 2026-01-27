/*
 * Title: Yuu Koito and Minimum Absolute Sum 2026-01-27
 *
 * a[n] = {1,2,3,4,5}
 * diff[n-1] = {
 *   0 = 2-1,
 *   1 = 3-2,
 *   2 = 4-3,
 *   3 = 5-4,
 * }
 * sum of diff = |(a2-a1) + (a3-a2) +..+ (an-an-1)|
 * or     diff = a[n-1] - a[0]
 *
 * rest -1 dont matter cout as 0
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) cin>>arr[i];

    if (arr[0] == -1)  arr[0] = arr[n-1];
    if (arr[n-1] == -1)  arr[n-1] = arr[0];

    for (int i=0; i<n; i++) {
        if (arr[i] == -1) arr[i] = 0;
    }

    cout << abs(arr[0]-arr[n-1]) <<endl;
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin>>t;
    while (t--) solve();
    return 0;
}
