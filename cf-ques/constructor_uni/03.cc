/*
 * Title: Fair division 2026-02-04
 *
 * bake 2 roll 
 * current temp = t0
 * bake at any order
 *
 * 1st roll temp at t1
 * 2st roll temp at t2
 * goal: min number of min she has to spend changing the temp of the oven
 *
 * do both the case:
 * case 1: t0 -> t1 -> t2 = |t1 - t0| + |t2 - t1|
 *  1/ time need to go from t0 to t1
 *  2/ time need to go from t1 to t2
 * case 1: t0 -> t2 -> t1 = |t2 - t0| + |t1 - t2|
 *  1/ time need to go from t0 to t2
 *  2/ time need to go from t2 to t1
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define all(x) x.begin(), x.end()
#define _ << " " <<

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    ll t0, t1, t2;
    cin >> t0 >> t1 >> t2;

    ll c1 = abs(t1 - t0) + abs(t2 - t1);
    ll c2 = abs(t2 - t0) + abs(t1 - t2);
    cout << min(c1, c2) << endl;
    return 0;
}
