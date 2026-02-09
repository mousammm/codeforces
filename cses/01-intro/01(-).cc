/*
 * Title: Weird Algo 2026-01-27
 * Topic : Implementaion
 *
 * given:
 * n : is
 *  - even divides n / 2
 *  - odd multiply n * 3 + 1
 *  do it till n = 1;
 *
 *  input:
 *  3
 *  3 10 5 16 8 4 2 1
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    ll n; cin >> n;
    cout << n << " ";

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
            cout << n << " ";
        }
        else {
            n = (n * 3) + 1;
            cout << n << " ";
        }
    }
    cout << endl;

    return 0;
}
