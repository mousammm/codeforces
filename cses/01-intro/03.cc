/*
 * Title : Repetation 2026-02-04
 *
 * given:
 * string n; 
 * EABCDDEEE 
 * E = 3 times
 *  - max repetation of a single char;
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string n; cin >> n;

    ll cnt = 1, max_dna = 1;
    for (int i = 0; i < n.size() - 1; i++) {
        if (n[i] == n[i+1]) {
            cnt++;
            max_dna = max(cnt, max_dna);
        } else {
            cnt = 1;
        }
    }
    cout << max_dna << endl;
    
    return 0;
}
