/*
 * Title: Product Quries 2026-02-08
 *
 * given :
    // n = 8        i  = 0 1 2 3 4 5 6 7 8 
    // has[8+1, false] = 0 0 T T 0 0 T T 0
    // dp[8+1, inf]    = x x 1 1 x x 1 1 x

    sol:
       i = 0 1 2 3 4 5 6 7 8
    dp[] = # # 1 1 # # 1 1 #

    i=1; j=1,2,3,4,5,6,7,8
    NO update

    i=2; j=2,4,6,8
    j=2 dp[2] = min(1,   dp[2] + dp[1]) = min(1,   1+INF) = 1;
    j=4 dp[4] = min(INF, dp[2] + dp[2]) = min(INF, 1+1) = 2;
    j=6 dp[6] = min(1,   dp[2] + dp[3]) = min(1,   1+1) = 1; 
    j=8 dp[8] = min(INF, dp[2] + dp[4]) = min(INF, 1+INF) = INF;
       i = 0 1 2 3 4 5 6 7 8
    dp[] = # # 1 1 2 # 1 1 #

    i=3; j=3,6
    j=3 dp[3] = min(1,   dp[3] + dp[1]) = min(1,   1+INF) = 1;
    j=6 dp[6] = min(1,   dp[3] + dp[2]) = min(1,   1+1) = 1; 
       i = 0 1 2 3 4 5 6 7 8
    dp[] = # # 1 1 2 # 1 1 #

    i=4; j=4,8
    j=4 dp[4] = min(2,   dp[4] + dp[1]) = min(2,   2+INF) = 2;
    j=8 dp[8] = min(INF, dp[4] + dp[2]) = min(INF, 2+1) = 3; 
       i = 0 1 2 3 4 5 6 7 8
    dp[] = # # 1 1 2 # 1 1 3

    i=5; j=5
    j=5 dp[5] = min(INF,   dp[5] + dp[1]) = min(INF,   INF+INF) = INF;
    NO UPDATE

    i=6; j=6
    j=6 dp[6] = min(1,   dp[6] + dp[1]) = min(1,   1+INF) = 1;
    NO UPDATE

    i=7; j=7
    j=7 dp[7] = min(1,   dp[7] + dp[1]) = min(1,   1+INF) = 1;
    NO UPDATE

    i=8; j=8
    j=8 dp[8] = min(3,   dp[8] + dp[1]) = min(3,   3+INF) = 3;
    NO UPDATE

    INITIAL DP:
       i = 0 1 2 3 4 5 6 7 8
    dp[] = # # 1 1 # # 1 1 #

    FINAL DP:
       i = 0 1 2 3 4 5 6 7 8
    dp[] = # # 1 1 2 # 1 1 3

 */
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define asc(x) x.begin(), x.end()
#define dsc(x) x.rbegin(), x.rend()
#define pb push_back
#define endl '\n'
#define nl cout << endl;

void solve() {
    int n; cin >> n;
    vector <int> dp(n+1, 1e9);
    vector <int> arr(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        dp[arr[i]] = 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            dp[j] = min(dp[j], dp[i] + dp[j / i]);
        }
    }

    for (int i = 1; i <= n; i++) {
        if (dp[i] == 1e9) {
            dp[i] = -1;
        }
        cout << dp[i] << " ";
    }
    nl
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int T = 1; 
    cin>>T;
    while (T--) {
        solve();
    }
    return 0;
}
