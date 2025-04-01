// PseudoCode
// input(n) ;//n is size of array
// input(q) // l is index and r is heigher index and we find sum of [l..r]
// input(arr)

// int getSum(int l, int r ){
// int sum=0;
// for(int i=l;i<=r;i++){
//     sum=sum+arr[i];

// }
// return sum;
// }
// for(int i=0; i<q.size();i++){
//     int current_l=q[i][0],current_r=q[i][1];
//     print(getSum(current_l,current_r));
// }

// for each quary of l and r , will call
//  this getSum() , so time complexity will be
//  0(n*q) where , q is the size of array containg
//  different l and r values 


// // BrouthForce Approach C++ CODE
// #include<iostream>
// #include<vector>
// using namespace std;
// int brouthForceSum(const vector<int>&nums, int l, int r){
//     int sum=0;
//     for(int i=l;i<=r;++i){
//         sum+=nums[i];
//     }
//     return sum;
// }
// int main(){
//     vector<int>nums={0,1,2,3,4,5,6,7,8,9};
//     int l=3,r=7;
//     cout<<"Brouth Force Sum"<<brouthForceSum(nums,l,r)<<endl;
//     return 0;
// }



//OPTIMIZED Pseudocode

input(n)
input(arr)
input prefix[n];
for(int i=1;i<=n;i++){
prefix[i]=prefix[i-1]+arr[i];
}
int l,r;
print("Sum of element from range l till r="prefix[r]-prefix[l-1]);
// time complexity - 0(n*Q);
// o(n) for creating prefix  Array 
// 0(q) for Traversing Queries