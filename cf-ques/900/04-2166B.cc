/*
 * Title: Tab Closing 02/02/2026
 * a = screen length
 * b = 
 * n = tabs 
 * tab length = min(b, a/m) m = no of remaning tabs
 * (x) mark is located on len, 2len, 3len, mlen
 *
 * case 1: we have const len 
 *  b >= a 
 *      len = min(b, a/m) 
 *       len = a/m
 *      x = 1a/1, 2a/2, 3a/3, ma/m
 *       x = a (last x will be always a)
 *      - Ans = 1
 * 
 *  b*n <= a
 *      len = min(b, a/n)
 *       len = b
 *      x = 1.b, 2.b, 3.b, n.b 
 *       x = [0,n*a] since n*b <= a
 *      - Ans = 1
 *
 * case 2: variable len
 *  b < a && b*n > a 
 *      len = min(b, a/n) 
 *       len = a/n (since a/n < b)
 *      x = 1a/1, 2a/2, 3a/3, na/n
 *       x = a (last x will be always a)
 *
 *      - close last tab first remaning tabs expand 
 *      - eventually tabs reach length b when a/ >= b
 *      - need to back track 
 *      - Ans = 2
 *
 *  hints::::
 *  b < a each tab max lenght is less than the whole screen
 *  b*n > a when all n tabs are open they must squeeze together (each tab < b)
 */
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int a,b,n; cin>>a>>b>>n;
    if ((long long)b*n <= a || b >= a) cout<<1;
    else cout<<2;
    cout<<endl;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while (T--) solve();
    return 0;
}
