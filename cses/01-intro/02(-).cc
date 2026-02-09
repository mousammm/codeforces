/*
 * Title : Missing number 2026-02-04
 * Topic : Implementaion
 *
 * given:
 *  n : 1 to n
 *  goal find the missing num
 *
 *  example
 *  n    = 5
 *  a[n] = 2 3 1 5
 *
 *  sol:
 *  a[n]     = 0 2 3 1 5
 *  arr[n+1] = 0 0 0 0 0
 *                        i = 1 2 3 4 5
 *  i = 1; arr[a[1]] = arr[2] 0 1 0 0 0
 *  i = 2; arr[a[2]] = arr[3] 0 1 1 0 0
 *  i = 3; arr[a[3]] = arr[1] 1 1 1 0 0
 *  i = 4; arr[a[4]] = arr[5] 1 1 1 0 1
 *
 *  if (arr[i] == 0) cout << i << endl;
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;

    vector<ll> a(n), arr(n+1, 0);
    for (int i = 1; i <= n-1; i++) {
        cin >> a[i];
        arr[a[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        if (arr[i] == 0) cout << i << endl;
    }
    
    return 0;
}
