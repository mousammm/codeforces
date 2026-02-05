/*
 * Title: Bad Sectors 2026-02-04
 *
 * example:
 *      11 2
        * . . . . * * . . . .
        0 1 2 3 4 5 6 7 8 9 10

        i =  0 1 2 3 4 5 6 7 8 9 10
 * left()  : 0 1 2 3 4 0 0 1 2 3 4  (mark the start with 0)
 * right() : 0 4 3 2 1 0 0 x x x x  (x = infinity; mark * with 0)
 *
   ans()
    x = s[i] == '*'
    y = min(left[i], rigth[i]) <= k(2)
    i  x   y   
    0  *  yes(*) 
    1     yes(*)
    2     yes(*)
    3     yes(*)
    4     yes(*)
    5  *  yes(*)
    6  *  yes(*)
    7     yes(*)
    8     yes(*)
    9     no (.) 
    10    no (.)

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

    vector<ll> left(n, 1e9), right(n, 1e9);

    // left dist
    int last = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '*') last = i;
        if (last != -1) left[i] = i - last;
    }

    // right dist
    last = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '*') last = i;
        if (last != -1) right[i] = last - i;
    }

    string ans(n, '.');
    for (int i = 0; i < n; i++) {
        if (s[i] == '*' || min(left[i], right[i]) <= k) {
            ans[i] = '*';
        }
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
