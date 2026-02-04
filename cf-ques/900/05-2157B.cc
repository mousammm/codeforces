/*
 * Title: Expansion Plan 2 02/03/2026
 *
 * (0,0) is black 
 * 4 : expand up down right left
 * 8 : expand in all direction (including diagonals)
 *  case 1: op. of 4 + 2 * op. of 8 >= x + y
 *  case 2: 
 *      whats the max we can increase in one coordinate in a single row
 *      so max(x, y) is x
 *      so we need at least cnt4 + cnt8 >= x
 */
#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define nf endl
#define ll long long
#define _ << ' ' <<

void solve() {
    ll n, x, y; cin >> n >> x >> y;
    string s; cin >> s;
    ll cnt4 = 0, cnt8 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '4') cnt4++;
        else if (s[i] == '8') cnt8++;
    }

    x = abs(x); y = abs(y);
    if (cnt4 + 2 * cnt8 < x + y) cout << "NO" << nl;
    else if (cnt4 + cnt8 < max(x, y)) cout << "NO" << nl;
    else cout << "YES" << nl;

}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll T; cin>>T;
    while (T--) solve();
    return 0;
}
