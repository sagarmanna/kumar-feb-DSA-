// input(n)
// intput(k)
// input(arr)
// int counnt validPairs(){
//     int cnt=0;
//      for(int i=1; i<=n;i++){
//         for(int j=i+1;j<=n;j++){
//           int absDiff=abs(b[i]-b[j]);  
//           if(absDiff==k){
//             cnt++;
//           }
//         }
//      }
//      return cnt;
// }


// pshudocode
//  OPTIMIZED SOLUTION

//  input(n,k)
//  input(arr)
//  int countPairs(){
//     int cnt=0;
//     map<int,int>mp;
//     for(int j=1;j<=n;j++){
//         if(mp.find(b[j]+k)!=mp.end())
//         cnt=cnt+mp[b[j]-k];


//     }
//     return cnt;
//  }




