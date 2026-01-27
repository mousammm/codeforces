/*
 * Title: Cheap Travel 2026-01-24
 * n : total rides
 * m : special rides 
 * a : price for n rides
 * b : price for m rides
 *
 * ans:
 * n = 1 2 3 4 5 6
 *     1 1 1 1 1 1 = (n*a) = price of normal ride
 * m =  1   2   3 
 *      2   2   2  = (n/m) * b = price of special
 * a = 1 
 * b = 2
 *
 * special case:
 * n = 1 2 3 4 5
 *     1 1 1 1 1 = (n*a) = price of normal ride
 * m =  1   2
 *      2   2    = (n/m) * b = price of special
 * a = 1 
 * b = 2
 *
 *  for the 5th ride not coverd by special ride
 *  (n%m) * a
 *  what if (n%m) * a is greater than price of b
 *  min(n%m * a, b)
 *
 *  final SOL: min({n*a,(n/m)*b,min(n%m*a,b)})
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,a,b;
    cin>>n>>m>>a>>b;

    int c1 = n * a;
    int c2 = n/m * b;
    int c3 = c2 + (n % m) * a;

    return 0;
}



