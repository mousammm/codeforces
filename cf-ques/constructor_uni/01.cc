/*
 * Title: Arithemetic 2026-02-04
 *
 * given:
 * a :
 * b :
 * c :
 *
 * a * b == c
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define all(x) x.begin(), x.end()
#define _ << " " <<

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    if (a * b == c) {
        cout << "YES" << endl;
        cout << a _ b _ c << endl;
    }
    else if (a * c == b) {
        cout << "YES" << endl;
        cout << a _ c _ b << endl;
    }
    else if (b * c == a) {
        cout << "YES" << endl;
        cout << b _ c _ a << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll T; cin>>T;
    while (T--) solve();
    return 0;
}
