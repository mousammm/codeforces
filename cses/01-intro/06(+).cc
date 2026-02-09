/*
 * Title : Number Sprial 2026-02-08
 * col -> x axis (horizontal)
 * row -> y axis (vertical)
 *  
 * given:
 *   row col
 *    y   x
 *   row > col (horizontal)
 *     when row 
 *       - even
 *       - odd
 *   row <= col (vertical)
 *     when col
 *       - even
 *       - odd
 */  

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back

void solve() {
    int row, col;
    cin >> row >> col;

    if (row <= col) {
        if (col % 2 == 0) {
            cout << ((col - 1) * (col - 1) + 1) + (row - 1) << endl;
        } else {
            cout << col * col - (row - 1) << endl;
        }
    } else if (row > col) {
        if (row % 2 == 0) {
            cout << row * row - (col - 1) << endl;
        } else {
            cout << ((row - 1) * (row - 1) + 1) + (col - 1) << endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }

    return 0;
}
