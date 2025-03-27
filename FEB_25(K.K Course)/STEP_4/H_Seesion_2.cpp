// input(n);
// input(k)

// input(arr)
// int cnt=0;
//   for(int i =0; i <n;i++){
//     for(int j=i+1;i<n;j++){
//         int sum=arr[i]+arr[j];
//         if(sum==k)
//         cnt++;
        
//     }

//   }
//   print(cnt);

//(Optimized Approach Pseudocode 

input(n);
input(k);

input(arr)
int count({
    int cnt=0;
    map<int, int>mp;
    for(int i=0; i<n;i++){
        int complementoryElement= k -arr[i];
        if(mp.find(complementoryElement)!= mp.end()){
            cnt++;
        }
        mp[arr[i]=1;
    
    }
    return cnt;

}
print(cnt);