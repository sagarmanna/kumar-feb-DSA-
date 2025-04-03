// //PsudoCode
// //BrouthForce Approach

// input(n)
// //n is the size of array
// input(k)
// input(arr)

// int maxSize=0;
// int minSize=1e9m;
// cnt B=0;
// cnt=0;
// cnt A=0;
// for(int i=0;i<n-1;i++){
//     int sum=0;
//     for(int j=i;j<n;j++){
//         sum=sum+arr[j];
//         if(sum==k){
//             if(maxSize<j-i+1){
//                 maxSize=j-i+1;
//                 cnt A=1;

//             }
//             if(minSize==j-i+1;){
//                 minSize=j-i+1;
//                 cntB++;

//             }
//             if(minSize==j-i+1){
//                 cntB++;
//             }
//         }
//     }
// }
// print (cntA);// no of Subarrays with largest size 
// print (cntB);// no of Subarrays with smallest size


//  C++ CODE (Brouthforce )
//   int countSortestSubarraywith Sum(vector<int>)&nums, int k ){
//     int n =nums.size();
//      int minLength=INT_MAX,cnt=0;
//      for(int start =0; start<n;start++){
//         int sum =0;
//          for(int end=start;end<n;end++){
//             sum+=num[end];
//              if(sum==k){
//                 int length=end-start+1;
//                 if(length< minLegth){
//                     minLengtrh =length;
//                 count=1;                }
//              } else if(length==minLength){
//                 count++;
//              }

//          }
//      }
//   }
// return count;
// }
// int countLargestSubarrayswith(vector<int>&nums,intk ){
//     int n =nums.size();
//     int maxLength=0, count=0;
//     for(int start=0;start<n;start++){
//         int sum =0;
    
//     }
// }


// optimized CODE PSEUDOCODE


input(n)
input(k)
input(arr)


int minSize=calculateMinSize();
int maxSize=calculateMaxSize();

 int cntA=0,cntB=0;sum=0;
  int i =0;
   int cnt(int size){
 for(int j=0;j<n;j++){


 if(j-i+1<size){
    j++;
 }
else{
    sum=sum=arr[i];
    i++;
    j++;
}

 }
}
cntA=cnt(minSize)
cntB=cnt(maxSize)

print(cntA)
print(cntB)



