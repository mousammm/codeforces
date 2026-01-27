/*
 * title: social experiment 2026-01-25
 *
 * n = 5
 * divide n in groups of 2-3 in (g1-g2)
 * g1: 3
 * g2: 2
 * give g1-g2
 */

#include <bits/stdc++.h>
using namespace std;

// original ans
void solve() {
    int n; cin>>n;
    int cpy=n;
    
    vector<int> a;
    for (int i=0; n > 3; i++) {
        n -= 3;
        a.push_back(3);
    }
    a.push_back(n);

    int g1=0, g2=0;
    for (int i=0; i<a.size(); i++) {
        if (i==0 or i % 2 == 0) {
            g1 += a[i]; 
            cout<<"g1:"<<a[i]<<endl;
        }
        else {
            g2 += a[i];
            cout<<"g2:"<<a[i]<<endl;
        }
    }
    cout<<g1-g2<<endl;

}

// optimal ans
void solve_op() {
    /*
     * n = even can div in equally in 2 groups diff is 0
     * n = odd  can't  div in equally in 2 groups diff is 1
     */
    int n; cin>>n;

    if (n < 4) cout<<n<<endl;
    else cout<<n % 2<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    // while (t--) solve();
    while (t--) solve_op();
    return 0;
}
