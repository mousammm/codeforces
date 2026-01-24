/*
   1 2 3 4 .. -> n
   n(low,high)
   have a total T
   need to distibute exactly T among n 
   each must get between its low and high

   ans:  
    minPossible = sum(low)
    maxPossible = sum(high)
    if (T < minPossible or T > maxPossible) -> Impossible

    if Possible (give all n its minimum)
    remaning = T - minPossible 

    for each n
        canGive = min(remaning, high - low)
        give n = low + canGive
        remaning -= canGive
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, sumTime;
    cin>>d>>sumTime;

    vector<int> minTime(d), maxTime(d);
    int minSum=0,maxSum=0;

    for (int i=0; i<d; i++) {
        cin>>minTime[i]>>maxTime[i];
        minSum += minTime[i];
        maxSum += maxTime[i];
    }

    if (sumTime < minSum || sumTime > maxSum) {
        cout<<"NO"<<endl;
        return 0;
    }

    cout<<"YES"<<endl;
    int remaning = sumTime - minSum;
    vector<int> sche(d);

    for (int i=0; i<d; i++) {
        int canAdd = min(remaning, maxTime[i] - minTime[i]);
        sche[i] = minTime[i] + canAdd;
        remaning -= canAdd;
    }

    for (int i=0; i<d; i++) {
        cout<<sche[i]<<" ";
    }
    cout<<endl;

    return 0;
}
