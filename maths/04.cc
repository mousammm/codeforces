/*
 * Seive of E. 
 * from 1 to n get prime or not in 0(1)
 */

#include <bits/stdc++.h>
using namespace std;

/*
 * TC 0(nloglogn)
 *
 * for loop 0(n)
 * next for loop we only go for prime num (loglogn)
 *
 * Optimization
 * j = i*i
 * i * i <= n 0(nloglog.root(n))
 */
vector<bool> seive(int n) {
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i=2; i*i<=n; i++) {
        if (isPrime[i]) {
            for(int j=i*i; j<=n; j+=i){
                isPrime[j] = false;
            } 
        }
    }

    return isPrime;
}


// More optimized 0()
vector<bool> seiveOP(int n) {
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;

    // handle even num
    for (int i=4; i<=n; i+=2) {
        isPrime[i] = false;
    }

    // handle odd num
    for (int i=3; i*i<=n; i+=2) {
        if (isPrime[i]) {
            for(int j=i*i; j<=n; j+=2*i){
                isPrime[j] = false;
            } 
        }
    }

    return isPrime;
}
int main() {
    int n;
    cin>>n;

    // vector<bool> a = seive(n);
    vector<bool> a = seiveOP(n);

    for (int i=0; i<a.size(); i++) {
        if (a[i]) cout<<i<<" ";
        // else cout<<"- ";
    }
    cout<<endl;

    return 0;
}

/* 
 * 
 *
 */
