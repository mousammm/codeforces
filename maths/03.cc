/*
 * Prime factorization for n 0(NlogN)
 */

#include <bits/stdc++.h>
using namespace std;

/*
 * Time complexity 0(NlogN)
 *
 * for loop 0(n)
 * while will divide n/i 
 * i at minimum will be 2 so n/2  0(log.n)
 * then for i = 3,5,.. it will be much less
 * Tc is 0(NlogN)
 */

// pair<primeNUM, expo>
vector<pair<int, int>> primeFactors(int n) {
    vector<pair<int, int>> res;
    for (int i=2; i<=n; i++) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
            res.push_back({i, cnt});
        }
    }

    return res;
}

/* Optimization
 * i*i <= n
 * factors of 12 {2,2,3}
 *
 * go till root(n) = i*i <= 12
 * 2*2 <= 12
 * 3*3 <= 12
 * 4*4 <= 12
 *
 * so our for loop will go till i=3 i*i <= n
 */

// 0(root(n)logn)
vector<pair<int, int>> primeFactorsOP(int n) {
    vector<pair<int, int>> res;
    for (int i=2; i*i<=n; i++) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
            res.push_back({i, cnt});
        }
    }
    /*
     * 12/2 = 6
     * 6/2  = 3
     * 3/3  = 1
     *
     * for 12 if cond will not run
     */
    if (n > 1) res.push_back({n, 1});

    return res;
}

int main() {
    int n;
    cin>>n;

    // 0(nlogn)
    primeFactors(n);

    // 0(root(n)logn) ~~ 0(root(n))
    primeFactorsOP(n);

    return 0;
}

/* 
 * Prime factorization
 *
 * 12 
 * 2 x 2 x 3
 * 2^2 x 3^1
 */
