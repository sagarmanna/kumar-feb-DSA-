// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n, k;
//     cin>>n;
//     vector<int>arr(n+1);
//     for(int i =1; i<=n;i++){
//         cin>>arr[i];
//     }
//     cin>>k;
//     int count=0;
//     // Brouth Force Approach
//     for(int j =1; j<=n;j++){
//         int current_sum=0;
//         for(int i=j;i>=1;i--){
//             current_sum+=arr[i];
//             if(current_sum==k){
//                 count++;
//             }
//         }
//     }
//     cout<<"The number of subarrays with sum equal to "<<k<<"k"<<count<<endl;
//     return 0;
// }




// // BrouthForce Approach 2
// #include<iostream>
// using namespace std;
// int main(){
//     int n, k;
//     cin>>n;
//     vector<int>arr(n+1);
//     for(int i =1;i<=n;i++){
//         cin>>arr[i];
//     }
//     cin>>k;
//     int count=0;
//     vector<int>prefix_sum(n+1,0);
//     //compute the prefix sum
//     for(int j =1; j<=n;j++){
//         prefix_sum[j]=prefix_sum[j-1]+arr[j];

//     }
//     for(int j =1; j<=n;j++){
//         for(int i =0;i<j;i++){
//             if(prefix_sum[i]==prefix_sum[j]-k)[
//                 count++;
//             ]        
//     }
// }
// cout<<"the number of subarray with equal sum equal to"<<k<<"is" <<cout<<endl;




//optimized Solution
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 int countSubarraysOptimized(vector<int>&arr,int k){
    int sum=0, count=0;
    prefixSumCount[0]=1;
    for(int num:arr){
        sum+=num;
        if(prefixSumCount.find(sum-k)!+prefixSumCount.end()){
            count+=prefixSumCount[sum-k];
        }
    }prefixSumCount[sum]++;
 } 
 return count;
}
int main(){
    vector<int>arr={1,2,3,4,5};
    int k = 5;
    cout << "Number of subarrays with sum " << k << ": " << countSubarraysOptimized(arr, k) << endl;
    return 0;

}
