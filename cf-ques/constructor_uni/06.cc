/*
 * Title: Divisibility Problem 2026-02-04
 *
 * given:
 * n : 2
 * goal: 
 *  - find a xx 2 digit num
 *  - every number is 1 or 2 
 *  - divisible by 2 ^ n
 *
 * x = {1,2} (a or b) % 2^n == 0
 * n = 1 | x  : 1 or 2 -> x = 2
 * n = 2 | x2 : 12 or 22 -> x = 1
 * n = 3 | x12 : 112 or 212 -> x = 1
 * n = 4 | x112 : 1112 or 2212 -> x = ?
 *
 * sol:
    ll m = num / pow(2, (i - 1));
    ll x = (m % 2 == 0) ? 2 : 1; // if m even x = 2 else m = 1
    num = pow(10,i-1) * x + num;
 *  n = 4
 *  num = 2     
 *                   m            x  num
 *  i = 1 num = 2    _   _        _  _ 
 *  i = 2 num = 2    1   odd      1  12
 *  i = 3 num = 12   3   odd      1  112
 *  i = 4 num = 112  14  even     2  2112
 */
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define _ << " " <<

void solve() {
    ll n; 
    cin >> n;
    ll num = 2;
    for (int i = 2; i <= n; i++) {
        ll m = num / pow(2, (i - 1));
        ll x = (m % 2 == 0) ? 2 : 1; // if m even x = 2 else m = 1
        num += pow(10,i-1) * x;
    }
    cout << num << endl;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    // ll T; cin >> T;
    // while (T--) solve();
    solve();
    return 0;
}
