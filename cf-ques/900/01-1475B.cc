/*
 * Title: New year Number 2026-01-27
 *
 *  Number Theory - Diophantine equation
 *  2020x + 2021y = n
 *  2020x + (2020 + 1)y = n
 *  2020x + 2020y + y = n
 *  2020(x + y) + y = n
 *  so x + y is total number of 2020 and 2021 
 *          let (x+y) q = n/2020
 *  and y is remainder of n%2020
 *          let (y)   r = n%2020
 *
 *  n = 2020q + r
 *  so q >= r
 *          n/2020 >= n%2020
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin>>n;
    if (n/2020 >= n%2020) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) solve();
}
