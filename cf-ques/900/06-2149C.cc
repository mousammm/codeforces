/*
 * Title: MEX rose 2026-02-04
 *
 * n : length of the array
 * k : required MEX(a)
 * 0 <= a[n] <= n
 * MEX(a) = k
 *  all int 0,1,2,..,k-1 must be present 
 *  k must not be present
 *
 * example:
 * n = 7 k = 4
 * MEX = 4 -> {0,1,2,3} and 4 absent
 * a[n] = {0, 2, 3, 4, 4, 5, 6}
 *      1/ kk = all the duplicats of k in the array 
 *      2/ cnt(k) = get the missing number for a[n] 
 *         we need ans = 1 for mex()
 *      3/ max(ans, kk) 
 *         max(1 , 2) = 2
 */
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define all(x) x.begin(), x.end()

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n), cnt(k, 0);
    int kk = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == k) kk++;
        if (a[i] < k) cnt[a[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (!cnt[i]) ans++;
    }

    cout << max(ans, kk) << endl;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll T; cin>>T;
    while (T--) solve();
    return 0;
}
