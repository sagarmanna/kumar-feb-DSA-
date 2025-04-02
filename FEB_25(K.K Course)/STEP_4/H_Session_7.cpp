// pseudocode

// input(n)//n is the size ofthe array
// input(k)


// input(arr)
// int maxlength =0;
// int minLength=INT_MAX;
// for(i=1;i<=n;i++){//i denote the any subarray
//     int sum=0;
//     for(int j =i;j<=n;j++){//j denote ending point of subarray
//         sum=sum+arr[j];
//         if(sum==k and j-i+1 >maxLength){
//             max.Length =j-i+1;
//         }
//         if(sum==k and j-i+1<maxLength){
//             min.Length =j-i+1;
//         }

//     }
// }

// print (maxLength);
// print(minLength);



//OPTIMISED SOLUTION

intput(n)
input(k)
input(arr)
 map<int, int> mp;
 map<int, int> mp2;
 mp[0]=0;
 int pSum=0;
 int maxLength=0;
 int mindLength=INT_MAX:
 for(int j=1;j<=n;j++){
  ps=ps+arr[j];
  int x=ps-k;
  if(mp.find(x)!=mp.end()){

    int i=mp[x]+1;
    int curlength =j-i+1;
    if(curLength>maxLength){
      maxLength=curLength;
    }
  }
    if(mp.find(ps)==mp.end())
    mp[ps]=j;

    }
    print(maxLength);
    print(minLength);
 
