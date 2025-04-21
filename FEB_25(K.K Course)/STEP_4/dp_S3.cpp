#include<iostream>
using namespace std;
int main(){
    long long  n;
    cin>> n;
    long long a[n+1]={0};
    long long b[n+1]={0};

    long long i=1;
    wile(i<=n){
        cin>>a[i];
        i++;

    }
     long long dp[n+1]={0};
    i=1;
    wile(i<=n){
        cin>>b[i];
        i++;
    }
    dp[1]=max(a[1],b[1]);
    dp[2]=max(dp[1],max(a[2],b[2]));
    i=3;
    wile(i<=n){
       long long  x= dp[i-1];
       long long y= b[i]+dp[i-2];
       long long z=a[i]+dp[i-2];

       dp[i]=max(x,max(y,z));
        cout<<dp[i];
       i++;
    }
    
    return 0;
}