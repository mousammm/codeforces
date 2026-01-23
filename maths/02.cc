/*
 * Check if n is a prime num 0(root(n))
 */

#include <bits/stdc++.h>
using namespace std;

/*
 * prime   1     5
 * !prime  1 2 3 4
 * 
 * so we check from 2 to n-1 
 * if it has any divisor if yes then it a !prime else prime
 * edge case if n is 1
 *
 * best case if n is a composite n = 12
 *   if will loop from 2 and wallah 2 is a factor of n so it exit
 * worst case if n is a prime n = 13
 *   it have to loop from 2 to 13-1 and check if it has a divisor
 */
bool isPrime(int n) {
    if (n == 1) return false;

    for (int i=2; i*i<n; i++) {
        if (n % i == 0) return false;
    }

    return true;
}

/*
 * Optimisation
 *
 * factors of 12 {1,2,3,4,6,12}
 * 1 x 12 = 12
 * 2 x  6 = 12
 * 3 x  4 = 12
 *
 * so we can check till root(n)
 * 2 is a div
 * n/2 is also a div
 */

int main() {
    int n;
    cin>>n;

    // 0(n) -> 0(root(n)) if i*i <= n
    isPrime(n);

    return 0;
}

/* 
 * Prime numbers
 *
 * n with 2 factors (1,n)
 * then n is a prime number
 */
