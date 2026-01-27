#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin>>n;
    vector<ll> a(n);

    for (int i=0; i<n; i++) cin>>a[i];

    ll k = 2;
    while(1) {
        set<int> a1;
        for (ll j=0; j<a.size(); j++) {
            a1.insert(a[j] % k);
        }
        if (a1.size() == 2) break;
        k *= 2;
    }
    cout<<k<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin>>t;
    while (t--) solve();
    return 0;
}
