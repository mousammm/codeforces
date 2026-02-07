/*
 * Title: Replace and Sum 2026-02-07
 *
 * given :
 * n {q : l r}
 * a[n]
 * b[n]
 *
 * choose index i -> a[i] = a[i+1]
 * choose index i -> a[i] = b[i]
 * for q quries {l r}
 *  find max sum -> a[l] + .. + a[r]
 *
 * exmaple;;
 * n q : 3
 *  idx = 0 1 2 3
 * a[3] = 3 2 1 0  { a[3] = 0; }
 * b[3] = 1 2 3
 *
 * find max:
 * a[2] = max({a[2], a[2+1], b[2]}) = max({1, 0, 3}) = 3
 * a[1] = max({a[1], a[1+1], b[1]}) = max({2, 3, 2}) = 3
 * a[0] = max({a[0], a[0+1], b[0]}) = max({3, 3, 1}) = 3
 *  
 * from i (1 to 3) ;; pref[i] = pref[i-1] + a[i-1]
 * pref[1] = pref[1-1] + a[1-1] = pref[0] + a[0] = 0 + 3 = 3
 * pref[2] = pref[2-1] + a[2-1] = pref[1] + a[1] = 3 + 3 = 6
 * pref[3] = pref[3-1] + a[3-1] = pref[2] + a[2] = 6 + 3 = 9
 *
 *       idx = 0 1 2 3
 * pref[3+1] = 0 3 6 9
 *
 * l and r
 * cout pref[r] - pref[l-1];
 */
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define _ << " " <<

void solve() {
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n+1), b(n), pref(n+1);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    a[n] = 0;

    for (int i = n - 1; i >= 0; i--) {
        a[i] = max({a[i], a[i+1], b[i]});
    }

    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i-1] + a[i-1];
    }

    for (int i = 0; i < q; i++) {
        ll l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l-1] << " ";
    }
    cout << endl;

}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll T; cin>>T;
    while (T--) solve();
    return 0;
}
