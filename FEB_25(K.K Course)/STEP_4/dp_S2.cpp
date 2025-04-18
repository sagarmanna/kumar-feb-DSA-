#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n;
    cin>>n;
    long long a[n+1];
    long long i = 1;
     while(i<=n){
        cin>>a[i];
        i++;

     }
     long long dp[n+1]=0;
     long long kk = 0;
     dp[1]=max(a[1],kk);
     dp[2]=max(a[2],max(a[1],kk));

     long long i=3;
     while(i<=n){
        dp[i]=max(dp[i-1],a[i]+dp[i-2]);
        i++;
        // 0(N)----- Time Complexity
        //0(N)------ Space Complexity
     }
      cout<<dp[n];
     
}