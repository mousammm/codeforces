/*
 * Title: Chocolatee Split 2026-02-04
 *
 * given:
 * k : total cuts 
 * a + 1 : split into a vertical 
 * b + 1 : split into a horizontal
 * +1 : it chocoate specific 
 */
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define _ << " " <<

void solve() {
    ll k; 
    cin >> k;
    ll a = k / 2;
    ll b = k - a;
    cout << (a + 1) * (b + 1) << endl;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll T; cin >> T;
    while (T--) solve();
    return 0;
}
