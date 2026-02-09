/*
 * Title : Two Sets 2026-02-09
 *
 * given :
 * n : 7
 * 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28
 * sum of n! : n * (n + 1) / 2
 *
 * - create 2 set where there sum is equal 
 * - else NO
 *
 * sol :
 * - if the sum of n! is odd -> cant div into 2 equal sets
 * - else 
 *   7 4 3
 *   6 5 2 1
 */  

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back

void solve() {
    int n;
    cin >> n;

    int sum_n = n * (n + 1) / 2;

    if (sum_n % 2 != 0) {
        cout << "NO" << endl;
        return;
    }

    int sum_a = 0, sum_b = 0;
    vector<int> a, b;
    for (int i = n; i >= 1; i--) {
        if (sum_a <= sum_b) {
            a.push_back(i);
            sum_a += i;
        } else {
            b.push_back(i);
            sum_b += i;
        }
    }

    cout << "YES" << endl;

    cout << a.size() << endl;
    for (auto i : a) cout << i << " ";
    cout << endl;

    cout << b.size() << endl;
    for (auto i : b) cout << i << " ";
    cout << endl;
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
