/*
 * Title: Chees Factory 2026-02-04
 *
 * a = 1 2 3 
 *  all 3 customer : kg of chees they can buy
 *  0 : 1 rs per/kg
 *  1 : 2 rs per/kg
 *  2 : 3 rs per/kg
 *
 * b = 3 2 1
 *  all 3 containers : kg of chees it can hold
 *  0 : 3 per/kg
 *  1 : 2 per/kg
 *  2 : 1 per/kg
 *
 * sol: 
 *     so customer a[i] paying the highest per kg
 *     give a[i] the highest b[i] (highest num of kg it can hold)
 */
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define _ << " " <<

void solve() {
    vector<ll> a(3), b(3);
    for (int i = 0; i < 3; i++) cin >> a[i];
    for (int i = 0; i < 3; i++) cin >> b[i];
    sort(all(a));
    sort(all(b));
    cout << a[0] * b[0] + a[1] * b[1] + a[2] * b[2] << endl;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll T; cin >> T;
    while (T--) solve();
    return 0;
}
