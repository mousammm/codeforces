/*
 * Title : Increasing Array 2026-02-04
 * Topic : Implementation
 *
 * given:
 * n : integer 
 * a[n] : 3 2 5 1 7
 * if ai > ai+1
 * - make ai = ai+1
 * - and store the diff 
 * goal : output the total difference
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll ans = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i-1]) {
            ans += a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }

    cout << ans << endl;
    
    return 0;
}
