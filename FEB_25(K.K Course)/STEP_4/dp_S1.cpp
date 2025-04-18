
#include<iostream>
 using namespace std;
 int main(){

 long  long n ;
  cin>> n;
  long  long a[n+1];// 1 based indexing 
  long long i =1;
   while(i<= n){
    cin>> a[i];
    i++;
   }
    // 1 ---> dp[]
    long long dp[n+1]={0};
    dp[1]=a[1];
    dp[2]=a[1]+a[2]; // base cases

    long long i =3;
    while(i <= n){
        dp[i]=dp[i-1]+a[i];
        i++;
        // this is took 0(n) time and we calculated all requries dp values ]

    }



    return 0;

 }

//  long  long q;
//  cin>>q;
//  i=1;
//  while (i<=q){
//     long  long index;
//     cin>> index;
//     cout<< dp[index];
//     cout<< "\n";
//     i++;

 // 0(Q) times = TOTAL TIME 
 //}