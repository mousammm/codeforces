/*
 * Title: Out Of memory 2026-02-07
 *
 * given :
 * n : length of array
 * m : num of operation perform
 * h : max value that bessie cmpt can store
 *
 * a[n] : a1,a2,..,an
 * m : 
 *  - b : the operation bessie can perform
 *  - c : the operation bessie can perform
 *
 *  a[b] = a[b] + c
 *
 * sol:
   3 4 5 : n m h
   1 2 1 : arr[n+1]
   1 4 : idx val
   2 4 : idx val
   3 3 : idx val
   2 0 : idx val

         idx = 0 1 2 3
   arr[n+1]  = 0 1 2 1
 * map[1](4) = 0 4 0 0
 * map[2](4) = 0 4 4 0 map[2]+arr[2] > 5 map.clear
 * map[3](3) = 0 0 0 3
 * map[2](0) = 0 0 0 3
 *
 * cout << map[i] + arr[i] << endl;
 */
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define nl cout << endl;
#define int long long

#define vi vector<int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#define pb push_back
#define _ << " " <<

void solve() {
    int n, m, h;
    cin >> n >> m >> h;
    vi arr(n+1);
    for (int i = 1; i <= n; i++) cin >> arr[i];

    map<int, int> mpp;
    for (int i = 0; i < m; i++) {
        int idx, val;
        cin >> idx >> val;
        if (arr[idx] + mpp[idx] + val > h) {
            mpp.clear();
        } else {
            mpp[idx] += val;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << arr[i] + mpp[i] << " ";
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
