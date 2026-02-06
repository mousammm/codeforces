/*
 * Title: Pacer 2026-02-05
 *
 * given : x
 * goal : find y
 * (x # y) : 2 # 3 = 23
 * x # y % x + y == 0
 *
 * sol:
 *   1/x # y:
 *   x.10^d + y 
 *   x.10^d + y + x - x
 *   x.10^d + x + y - x
 *   x.(10^d + 1) + y - x
 *   or 
 *   x.(10^d - 1) + y + x
 *   x.10^d - x + y + x
 *   x.10^d + y
 *   so x # y = x(10^d - 1) + (x + y)
 *
 *   2/if m = x + y the m divides x(10^d - 1) + m
 *   equivalent to m divides x(10^d - 1)
 *   so x + y | x(10^d - 1)
 *
 *   3/why 3x is a factor of x(10^d - 1)
 *   10d - 1 (d 1 to ...)
 *   9, 99, 99, ...
 *   so 3x divides 9, 99, 999, ...
 *
 *   4/ x + y = 3x
 *   x + y = 3.x
 *   y = 3.x - x
 *   y = 2.x
 *
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
    ll x;
    cin >> x;
    cout << 2 * x << endl;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll T; cin>>T;
    while (T--) solve();
    return 0;
}
