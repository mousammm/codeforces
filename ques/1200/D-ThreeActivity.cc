#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int> a(n),b(n),c(n), m(n);

    for (int i=0; i<n; i++) cin>>a[i];
    for (int i=0; i<n; i++) cin>>b[i];
    for (int i=0; i<n; i++) cin>>c[i];

    for (int i=0; i<n; i++) {
        m.push_back(max({a[i],b[i],c[i]}));
    }

    sort(m.rbegin(), m.rend());

    int ans = 0;
    for (int i=0; i<3; i++) ans += m[i];

    cout<<ans<<endl;

}

int main() {
    int t; cin>>t;

    while (t--) {
        solve();
    }

    return 0;
}
