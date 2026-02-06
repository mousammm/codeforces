/*
 * Title: Pacer 2026-02-05
 *
 * given : x
 * goal : find y
 * (x # y) : 2 # 3 = 23
 * x # y % x + y == 0
 *
 * sol:
 * x # y = x.10^d + y = x.(10^d - 1) + (x + y)
 * - for x # y to be divisible by x + y 
 * - x + y need to be a factor of x.(10^d - 1)
 *   3.x is a factor of x.(10^d - 1)
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
