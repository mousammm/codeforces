/*
 * Title : Two Knight 2026-02-09
 * Topic : Combinatorics 
 * given:
 * n = 8
 * so all grid will be 64
 * - k1 we can place in all 64 boxes
 * - k2 we can place in all 63 boxes
 *   (we can place in all boxes beside the one occupied by k1)
 * - remove duplicate k1 k2 = k2 k1
 * - all_ways = 64 * 63 / 2;
 * 
 * Bad_Ways: n = 8
   if k1 is on (3,3) it have 8 cell where k2 cannot be placed
   - so the number on cell represent the number where k2 cannot be placed
    . . . . . . . .
    . . . . . . . .
    . . 8 8 8 8 . .
    . . 8 8 8 8 . .
    . . 8 8 8 8 . .
    . . 8 8 8 8 . .
    . . . . . . . .
    . . . . . . . .
    8 apperars = (n - 4) * (n * 4)
    8 apperars = 8 * before

    . . . . . . . .
    . . 6 6 6 6 . .
    . 6 . . . . 6 .
    . 6 . . . . 6 .
    . 6 . . . . 6 .
    . 6 . . . . 6 .
    . . 6 6 6 6 . .
    . . . . . . . .
    6 apperars = (n - 4) * 4 (all 4 sides)
    6 apperars = 6 * before

    . . 4 4 4 4 . .
    . 4 . . . . 4 .
    4 . . . . . . 4
    4 . . . . . . 4
    4 . . . . . . 4
    4 . . . . . . 4
    . 4 . . . . 4 .
    . . 4 4 4 4 . .
    4 apperars = (n - 3) * 4 (all 4 sides)
    4 apperars = 4 * before
    n-3:
    . . 4 4 4 4 . . this set apperar 4 times
    . 4 . . . . . .

    . 3 . . . . 3 .
    3 . . . . . . 3
    . . . . . . . .
    . . . . . . . .
    . . . . . . . .
    . . . . . . . .
    3 . . . . . . 3
    . 3 . . . . 3 .
    3 apperar = 2 * 4
    3 apperar = 3 * before

    2 apperar = 4
    2 apperar = 2 * before
    
    NOW divide bad_ways / 2 so it reomve the duplicate
 */  

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back

void solve() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int size = i * i;
        int all_ways = size * (size - 1) / 2;
        int bad_ways = 0;
        bad_ways += 8 * (i-4) * (i-4);
        bad_ways += 6 * (i-4) * 4;
        bad_ways += 4 * (i-3) * 4;
        bad_ways += 3 * 2 * 4;
        bad_ways += 2 * 4;
        bad_ways /= 2;
        cout << all_ways - bad_ways << endl;
    }
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
