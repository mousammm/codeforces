/*
 * Title: Bad Sectors 2026-02-04
 *
 * given:
 */
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define _ << " " <<

void solve() {
    ll n, k; 
    cin >> n >> k;
    string s; 
    cin >> s;

    while (k--) {
        string temp = s;
        // first index
        if (s[0] == '.' && n > 1 && s[1] == '*') {
            temp[0] = '*';
        }
        // check middle 
        for (int i = 1; i < n - 1; i++) {
            if (s[i] == '.' && (s[i - 1] == '*' || s[i + 1] == '*')) {
                temp[i] = '*';
            }
        }

        // last index *. {n-2,n-1}
        if (s[n - 1] == '.' && n > 1 && s[n - 2] == '*') {
            temp[n - 1] = '*';
        }
        s = temp;
    }

    cout << s << endl;

}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    // ll T; cin >> T;
    // while (T--) solve();
    solve();
    return 0;
}
