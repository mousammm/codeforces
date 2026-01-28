/*
 * Title: Alice and Bob 2026-01-28
 * 
 * ques: 
 *  arr[n] = { v, v, v, vn }
 *  arr[7] = {10, 20, 30, 40, 50, 60, 70}
 *  a = 21 (num which alice choose)
 *  b = ?? (num which bob need to choose to maximize his points)
 *
 *  sol:
 *   b < a 
 *   20 < 21 mid point = a+b/2 = 21+20/2 = 20.5
 *      Marbles < 20.5: [10, 20] → Bob wins 2
 *      Marbles > 20.5: [30,40,50,60,70] → Alice wins 4
 *   15 < 21 mid point = a+b/2 = 21+15/2 = 18
 *      Marbles < 18: [10] → Bob wins 1
 *      Marbles > 18: [20,30,40,50,60,70] → Alice wins 5
 *    1 < 21 mid point = a+b/2 = 21+1/2 = 11
 *      Marbles < 11: [10] → Bob wins 1
 *      Marbles > 11: [30,40,50,60,70] → Alice wins 5
 *
 *   so when b < a the mid point a+b/2 also move left as b move left
 *   but bob wants as far right as possible to get more marbles
 *   ans still being less than a which is b = a - 1
 *
 *   for b < a
 *    v < a+b/2 bob wins
 *    to max our wins we want mid as large as possible 
 *    max b while still < a which is b = a-1
 *
 * --------------------------------------------------------
 *    b > a
 *   22 > 21 mid point = a+b/2 = 21+22/2 = 21.5
 *      Marbles < 21.5: [10, 20] → Alice wins 2
 *      Marbles > 21.5: [30,40,50,60,70] → Bob wins 5
 *   30 > 21 mid point = a+b/2 = 21+30/2 = 25.5
 *      Marbles < 25.5: [10,20] → Alice wins 2
 *      Marbles > 25.5: [30,40,50,60,70] → Bob wins 5
 *   100 > 21 mid point = a+b/2 = 21+100/2 = 60.5
 *      Marbles < 60.5: [10,20,30,40,50,60] → Alice wins 6
 *      Marbles > 60.5: [70] → Bob wins 1
 *
 *   so when b > a the mid point a+b/2 also move right as b move right
 *   but bob wants as far left as possible to get more marbles
 *   ans still being greater than a which is b = a + 1
 *
 *   for b > a
 *    v > a+b/2 bob wins
 *    to max our wins we want mid as large as possible 
 *    max b while still > a which is b = a + 1
 */
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n,a; cin>>n>>a;
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin>>arr[i];

    int l=0, r=0;
    for (int i=0; i<n; i++) { 
        if (a > arr[i]) l++;
        if (a < arr[i]) r++;
    }

    cout<< (l>r ? a-1 : a+1) <<endl;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while (t--) solve();
    return 0;
}
