/*
 * Find all the factor for a given n 0(root(n))
 */

#include <bits/stdc++.h>
using namespace std;

void all_divisor(int n) {
    vector<int> div;
    for (int i=2; i*i<=n; ++i) {
        if (n%i==0) {
            div.push_back(i);                       // 2
            if (n/i != i) { div.push_back(n/i); }   // 10/2 = 5
        }
    }
}

int main() {
    int n;
    cin>>n;

    // 0(root(n))
    all_divisor(n);

    return 0;
}

/* 
 * Factors or Divisors 
 *
 * if 12 % 2 == 0 then 
 * 2 is a factor of 12
 */
