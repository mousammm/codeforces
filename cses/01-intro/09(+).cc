/*
 * Title : Bit Strings 2026-02-09
 * Topic : Modular Arithemetic, Binary Exponation
 *
 * given :
 * n : integer
 * goal : calculate the number of bit strings
 *
 * eg : n = 3
 * 000 001 010 100 011 110 101 111 ..
 *
 * from (1 to n)
 *  overflow : ans *= 2;
 *  correct  : ans = (ans * 2) % MOD
 *
 * ans = 2^n
 *
 * the loop the number of times it run 
 * we dont actually use i value
 *
 * (a * b) % M = a%M * b%M
 */  

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back

int MOD = 1e9+7;

void solve() {
    int n;
    cin >> n;

    int ans = 1;
    for (int i = 1; i <= n; ++i) {
        ans = (ans * 2) % MOD;
    }
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }

    return 0;
}
