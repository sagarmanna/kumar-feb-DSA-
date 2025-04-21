n
b[n+1]
dp[n+1]

dp[1]=0;
dp[2]=abs(b[1]-b[2])


i=3;
while(i<=n){
    dp[i]= min(abs(b[i-1]-b[i])+ dp[i-1],abs(b[i-2]-b[i])+dp[i-2]);
    i+=1;
    print(dp[n])
}
