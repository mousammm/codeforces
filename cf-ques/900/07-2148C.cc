/*
 * Title: Pacer 2026-02-05
 *
 * input:
 * n : no of requirement
 * m : total minutes
 * a : time whrn fj needs to be
 * b : which side fj needs to be
 * 
 * fj : initially is on side 0 
 *
 * example::
 * 2 4 : n m
 * 2 1 : on 2nd min fj needs to be on side 1
 * 4 0 : on 4nd min fj needs to be on side 0
 *      side
 *
 * 0index points += a - px -> 2 - 0 = 2
 *  (a - px + 2) % 2 = (2 - 0 + 2) % 2 = 4 % 2 = 0
 *  (b - py + 2) % 2 = (1 - 0 + 2) % 2 = 3 % 2 = 1
 *  0 != 1 is True so points-- -> points = 1
 *  points = 1, px = 2, py = 1
 *
 * 1index points += a - px = 4 - 2 = 2
 *  (a - px + 2) % 2 = (4 - 2 + 2) % 2 = 4 % 2 = 0
 *  (b - py + 2) % 2 = (0 - 1 + 2) % 2 = 1 % 2 = 1
 *  0 != 1 is True so points-- -> points = 2
 *  points = 2, px = 4, py = 0
 *          px      py      a       b   p += (a-px+2)%2          points(before/after)
 *  start   0       0       _       _                              0/0
 *  1st     0       0       2       1   points += 2-0 = 2          0/1
 *                                      (2-0+2)%2 = 0
 *                                      (1-0+2)%2 = 1
 *                                      0 != 1 -> points--
 *  2st     2       1       4       0   points = points + 4-2 = 3  1/2
 *                                      (4-2+2)%2 = 0
 *                                      (0-1+2)%2 = 1
 *                                      0 != 1 -> points--
 *
 *  if (px != m) {
 *     points += m - px
 *  }
 *  else px = m = 4
 *
 */
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define _ << " " <<

void solve() {
    ll n, m;
    cin >> n >> m;

    ll points = 0;
    ll px = 0, py = 0;
    while (n--) {
        ll a, b;
        cin >> a >> b;
        points += a - px;
        if (((a - px + 2) % 2) != ((b - py + 2) % 2)) {
            points--;
        }
        px = a;
        py = b;
    }
    if (px != m) {
        points += m - px;
    }
    cout << points << endl;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll T; cin>>T;
    while (T--) solve();
    return 0;
}
