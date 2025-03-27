// input(n);
// input(k);
// input(arr)
// int cnt =0;
// for(i=1;i<=n;i++){
//     for(int j =i+1;j<=;j++){
//         int difference=arr[i]-arr[j];
//         if(difference==k){
//             cnt++;
//         }
//     }
// }
// print (cnt)


//optimized Pseducode 

input(n)
input(k)

input(arr)
int cnt =0;
 map<int , int>mp;
 for(int i=1;i<=n;i++){
    int requiredElement=arr[i]+k;
    if(mp.find(requiredElement)!=mp.end()){
        cnt-int +mp[requried Element];

    }
    mp[arr[i]]++;
 }
print cnt;
