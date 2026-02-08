/*
 * Title : Permutation 2026-02-08
 *
 * given:
 * n : integer
 * - print a Permutation 
 * - no adjacent diff should be one
 *
 *  n = 5
 *  - vect a;
 *  - a = 1 3 5 (odd num from 1 to n)
 *  - a = 1 3 5 2 4 (even num from 1 to n)
 *  if a[i] - a[i+1] == 0 : NO SOLUTION
 *  - Print from a[n to 1]
 *      
 *  edge case n = 4
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a;

    if (n == 4) {
        a = {2, 4, 1, 3};
    } else {
        for (int i = 1; i <= n; i += 2) a.pb(i);
        for (int i = 2; i <= n; i += 2) a.pb(i);
    }

    for (int i = 0; i < n-1; i++) {
        if (abs(a[i] - a[i+1]) == 1) {
            cout << "NO SOLUTION" << endl;
            return 0;
        }
    }

    for (int i = n-1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
