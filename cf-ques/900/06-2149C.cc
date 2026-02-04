/*
 * Title: MEX rose 2026-02-04
 *
 * n : no if element for array
 * k : k should not be in the array
 * 
 * mex()
 * - all ele from 0 to k-1
 * - k should not be present 
 *
 * eg: 
 * 6 2 : n k
 * 0 3 4 2 6 (2) -> mex(1) -> make 2 to 1
 * 0 3 4 2 6 (1) -> mex(5) -> make 2 to 5
 * 0 3 4 (5) 6 (1) -> mex(5) -> make 2 to 5
 * 0 3 4 (5) 6 (1) -> mex(2) -> done in 2 operation
 *
 * so final if k = 2
 * arr[] 
 *  - 0 1 (we need all num not present from 0 to k-1)
 *  - k(2) should not be present
 *
 * 6 2 : n k
 * 0 3 4 2 6 2
 *
 * 1/ k_cnt = 2 (k is present 2 time in arr)
 * 2/ f(n+1) = 0 0 0 0 0 0 0
 *                  i = 0 1 2 3 4 5 6 7
 *     f[a[0]] = f[0] = 1 0 0 0 0 0 0 0
 *     f[a[1]] = f[3] = 1 0 0 1 0 0 0 0
 *     f[a[2]] = f[4] = 1 0 0 1 1 0 0 0
 *     f[a[3]] = f[2] = 1 0 1 1 1 0 0 0
 *     f[a[4]] = f[6] = 1 0 1 1 1 0 1 0
 *     f[a[5]] = f[2] = 1 0 1 1 1 0 1 0
 *
 *     for i (0 : k-1)
 *      if (f[i] == 0) f_cnt++;
 */
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), f(n+1, 0);
    int k_cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == k) {
            k_cnt++;
        }
        f[a[i]]++;
    }
    int f_cnt = 0;
    for (int i = 0; i < k; i++) {
        if (f[i] == 0) {
            f_cnt++;
        }
    }
    cout << max(k_cnt, f_cnt) << endl;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll T; cin>>T;
    while (T--) solve();
    return 0;
}
