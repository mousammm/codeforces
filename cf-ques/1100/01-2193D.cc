/*
 * Title: Monster Game 2026-02-07
 *
 * given :
 * n : number of - swords & level;
 * n : 1 2 3 4 (1 to n) level
 * a : 6 7 8 8 (strength of sword)
 * b : 3 3 3 3 (number of swords stirke needed to defeat) swords can use only one strike
 * x : difficulty level 
 * swords with strengh less than x will not effect the mosnter
 * score : x.num of level completed
 *
 * goal : choose game dificulty to max score
 *
 * example;;
 * n    : 3
 * a[n] : 1 3 4  (strength)
 * b[n] : 2 1 1  (stike needed)
 * score = x.level completed 
 *       = 3.1 = 3
 * 
 * sol: 
 *  cin >> a[n] >> b[n]   idx = 0 1 2
 *  sort a in decreasing a[n] = 4 3 1
 *                       b[n] = 2 1 1
 *
 *  Sort swords from strongest to weakest
    Try using only the strongest 1 sword, then strongest 2, then strongest 3, etc.
    For each case, see how many levels you can beat
    Multiply: (strength of weakest sword in your chosen set) × (levels beaten)
    Take the maximum result
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
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(rall(a));
    ll h = 0, sum = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        while (h < n && sum + b[h] <= (i+1)) {
            sum += b[h];
            h++;
        }
        ans = max(ans, a[i] * 1LL * h);
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll T; cin>>T;
    while (T--) solve();
    return 0;
}
/*
 * 1/h < n: We still have levels to try
 * 2/sum + b[h]: Total strikes needed if we try to complete one more level
 * 3/ step(2) <= (i+1): Number of usable swords we have (for 0 base indexing)
 * Check: Can we complete the next level with our available swords
 *
 * i=0; h=0; sum=0; ans=0
 * 1/ 0 < 3 -> True
 * 2/ 0 + b[0] = 0 + 2 = 2
 * 3/ 2 <= (0 + 1) 
 *    2 <= 1 = False
 * ans = max(ans, a[0] * h) = max(0, 4 * 0) = max(0, 0) = 0
 *
 * i=1; h=0; sum=0; ans=0
 * 1/ 0 < 3 (True)
 * 2/ 0 + b[0] = 0 + 2 = 2
 * 3/ 2 <= (1+1)
 *    2 <= 2 = True
 * sum = sum + b[h] = 0 + 2 = 2;
 * h++;
 *
 * second while:
 * sum + b[h] = 2 + b[1] = 2 + 1 = 3
 * step(2) <= (i+1) = 3 <= 2 = False exit while loop 
 * h=1; sum=2;
 * ans = max(ans, a[1] * h) = max(0, 3 * 1) = max(0, 3) = 3
 *
 * i=2; h=1; sum=2; ans=3;
 * 1/ 1 < 3 (True)
 * 2/ 2 + b[1] = 2 + 1 = 3
 * 3/ 3 <= (2+1)
 *    3 <= 3 = True
 * sum = sum + b[h] = 2 + 1 = 3;
 * h++; h=2
 *
 * second while:
 * sum + b[h] = 3 + b[2] = 3 + 1 = 4
 * step(2) <= (i+1) = 4 <= 3 = False exit while loop 
 * h=2; sum=3;
 * 
 * Conclusion:
 * - check how many consecutive level can u complete with the currennt number of usuable swords
 * - each time i increases we have more swords and complete more levels 
 *   while loop keep addig levels as long as we have enough swords for them
 */
