/*
 * Title: Static Range Sum Queries 2026-01-27
 *
 * Prefix sum;
 * arr[n] = {1,2,3,4,5}
 * pref[n+1] = {
 *  0 = 0,      // base case sum of 0 ele is 0
 *  1 = pref[0] + arr[0],
 *  2 = pref[1] + arr[1],
 *  3 = pref[2] + arr[2],
 *  ...
 *  n = pref[n] + arr[n],
 * }
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,q; cin>>n>>q;
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin>>arr[i];

    vector<ll> pref(n+1);
    for (int i=1; i<=n; i++) {
        pref[i] = pref[i-1] + arr[i-1];
    }

    for (int i=0; i<q; i++) {
        int a,b; cin>>a>>b;
        cout<<pref[b] - pref[a-1]<<" ";
    }
    cout<<endl;
    return 0;
}
