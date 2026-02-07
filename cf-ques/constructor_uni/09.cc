/*
 * Title : Friends at the Cafeteria 2026-02-05
 * category : sweep line / interval overlap
 *
 * n : no of fiends would go to dine
 * m : min can Mathis spend in the cafeteria
 * li : friend arrive in li minutes
 * ti : friend stays for ti minutes
 * goal : how manny firiends he meet
 *
 * 3 5 : n m
 * 10 3 : l t (0)
 * 8  7 : l t (1)
 * 15 2 : l t (2)
 *       t    l+t-1      x   y  |  [x-m+1, y]
 * t0 : [10, 10+3-1] = [10, 12] | [10-5+1, 12] = [ 6, 12] 
 * t1 : [ 8, 8+7-1]  = [ 8, 14] | [ 8-5+1, 14] = [ 4, 14]
 * t2 : [15, 15+2-1] = [15, 16] | [15-5+1, 16] = [11, 16]
 *
    Friend 1:  |------------------|              [4, 14]
    Friend 0:       |---------|                  [6, 12]
    Friend 2:             |------------|         [11, 16]
               -------------------------------> x
               4    6    11  12  14   16
    overlapping section 11 to 12
 *
 */
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define _ << " " <<

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++) {
        int l, t;
        cin >> l >> t;
        int start_x = l - m + 1;
        int end_x   = l + t - 1;
        a.pb({start_x, end_x});
    }

    vector<int> pnt;
    for (auto &a : a) {
       pnt.pb(a.first);
       pnt.pb(a.second + 1);
    }

    sort(all(pnt)); // sort ascending
    pnt.erase(unique(all(pnt)), pnt.end()); // remove dup

    ll ans = 0;

    for (int x : pnt) {
        ll cnt = 0;
        for (auto &a : a) {
            if (x >= a.first && x <= a.second) {
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;

}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    // ll T; cin >> T;
    // while (T--) solve();
    solve();
    return 0;
}
