/*
 * Title: Out Of memory 2026-02-07
 *
 * given :
   n : length of string 
   s : binary string 
   - choose idx from 1 <= i to m <= m
   - the char s[i to m] must be decreasing 
   - then sort them in increasing order
   - also the numofzeros + numOfOnes = m
   - valid move : if it modify the string

    sol:
    i = 0 1 2 3
    s : 0 1 1 0
srt_s : 0 0 1 1 (sort s in ascending order)

if (s == srt_s) Bob wins (As alice would have no move left)

idx[] = 
- store all index where s[i] != srt_s
- cout << Alice
- size of idx is m 
- values of idx array

 */
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define endl '\n'
#define nl cout << endl;
#define _ << " " <<

void solve() {
    int n;    cin >> n;
    string s; cin >> s;
    string srt_s = s;
    sort(all(srt_s));

    if (srt_s == s) {
        cout << "Bob" << endl;
        return;
    }

    vi idx;
    for (int i = 0; i < n; i++) {
        if (s[i] != srt_s[i]) {
            idx.pb(i+1);
        }
    }
    cout << "Alice" << endl;
    cout << idx.size() << endl;
    for (auto i : idx) {
        cout << i << " ";
    }
    nl
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int T = 1;
    cin>>T;
    while (T--) solve();
    return 0;
}
