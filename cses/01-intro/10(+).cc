/*
 * Title : Traling Zeros 2026-02-10
 * Topic : Meth Number Theory
 *
 * given :
 *  n : 5
 *  res = 5 * 4 * 3 * 2 * 1 = 120
 *  find traling 0's of res
 *
 *  the only numbers capable of making 0's are multiple of 5
 */  

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back

void solve() {
    int n;
    cin >> n;

    // cout << n/5 + n/25 + n/125 + ... << endl;
    int ans = 0;
    for (int i = 5; i <= n; i*=5) {
        ans += n/i;
    }
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }

    return 0;
}
