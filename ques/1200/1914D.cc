/*
 * Title: Three Activities 2026-01-24
 *
 * for n(3)
 * idx    0 1 2 ... 
 * a[n] - 9 3 1 ...
 * b[n] - 2 5 4 ...
 * c[n] - 4 1 8 ...
 *
 * ans = a[x] + b[y] + c[z]
 *   x != b != c
 *   a[x] b[y] c[y] == MAX
 *
 * ans:
 * sort(in desc)  a=b=c<value,index>
 * if (a.i != b.j && a.i != c.k && b.j != c.k)
 *          ans = max(ans, a.v + b.v + c.v)
 * 
 */

#include <bits/stdc++.h>
#include <ios>
using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<pair<long long, int>> a(n), b(n), c(n);

    for (int i=0; i<n; i++) { cin>>a[i].first; a[i].second = i; }
    for (int i=0; i<n; i++) { cin>>b[i].first; b[i].second = i; }
    for (int i=0; i<n; i++) { cin>>c[i].first; c[i].second = i; }

    sort(a.begin(), a.end(), [](const auto& p1, const auto& p2) {
            return p1.first > p2.first;
    });

    sort(b.begin(), b.end(), [](const auto& p1, const auto& p2) {
            return p1.first > p2.first;
    });

    sort(c.begin(), c.end(), [](const auto& p1, const auto& p2) {
            return p1.first > p2.first;
    });

    long long ans = 0;

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            for (int k=0; k<3; k++) {
                if (a[i].second != b[j].second &&
                    a[i].second != c[k].second &&
                    b[j].second != c[k].second) {
                        ans = max(ans, a[i].first + b[j].first + c[k].first);
                }
            }
        }
    }

    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while (t--) solve();

    return 0;
}
