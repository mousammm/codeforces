/*
 * Title: Fair division 2026-02-04
 *
 * given:
 * n
 * divide n in a, b, c
 * where c = b + 1;
 *       a = b - 1;
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define all(x) x.begin(), x.end()
#define _ << " " <<

void solve() {
    ll n;
    cin >> n;
    if (n % 3 == 0) {
        ll x = n / 3;
        cout << x - 1 << " ";
        cout << x << " ";
        cout << x + 1 << endl;
    } else {
        cout << -1 << endl;
    }

}
int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll T; cin>>T;
    while (T--) solve();
    return 0;
}
