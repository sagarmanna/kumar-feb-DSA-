-> n. k 
-> b[n+1];


for(i=1;i<=n;i++){ r = 0 
    for(j=i;j<=n;j++){
        
        r = r + b[j] 
        //r ==== sum[i.....j]
        if(r<=k){
            l = abs(j-i+1)
            p = max(p,l)
        }
    }
}


print(p)

