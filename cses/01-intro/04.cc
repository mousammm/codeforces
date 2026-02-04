/*
 * Title : Increasing Array 2026-02-04
 *
 * given:
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n; cin >> n;
    vector<ll> arr(n+1, 0);
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        if (arr[i] != i) cnt++;
        cout << arr[i] << " " << i << endl;
    }
    cout << cnt << endl;
    
    return 0;
}
