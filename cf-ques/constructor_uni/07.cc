/*
 * Title: Comics collection 2026-02-04
 *
 * given:
 * n : have 1 to n
 * i (1-n):
 *  divisible by 5 cost = 5
 *  divisible by 3 cost = 3
 *  divisible by 2 cost = 2
 *  else           cost = 1;
 *
 *  goal: total cost of collection
 *
 *  for c2:
 *   remove c2 = n/2
 *   remove c2 = n/2 - n/lcm(2,3)
 *   remove c2 = n/2 - n/lcm(2,3) - n/lcm(2,5)
 *   add    c2 = n/2 - n/lcm(2,3) - n/lcm(2,5) + n/lcm(2,3,5)
 *  eg:
 *   n = 30
 *   c2 = n/2 {2,4,6,8,10,12,14,16,18,20,22,24,26,28,30} c2 = 15left
 *   c2 = n/6 {6,12,18,24,30} c2 = c2 - 5 = 10left
 *   c2 = n/10 {10,30} c2 = c2 - 2 = 8num
 *   ... 30 was in both n/6 & n/10 so we need to add back all num that are both divisible by 6 && 10
 *   c2 = n/30
 */
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define _ << " " <<

void solve() {
    ll n; cin >> n;
    ll c5 = n / 5,
       c3 = n / 3 - (n / 15), // remove n that can be div by 5 * 3
       c2 = n / 2 - (n / 6) - (n / 10) + (n / 30), // remove 2 * 3 | 2 * 5 | 2 * 3 * 5
       c1 = n - (c5 + c3 + c2);
    cout << (c5 * 5) + (c3 * 3) + (c2 * 2) + (c1 * 1) << endl;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll T; cin >> T;
    while (T--) solve();
    return 0;
}
