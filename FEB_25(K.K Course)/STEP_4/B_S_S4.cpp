class Solution {
    public: 
     int search(vector<int& nums, int target){
        int n=nums.size();
        int l =0; r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>= nums[0]){
                if(target>nums[mid]||target<nums[0]) l=mid+1;
                else r=mid -1;
            } else[
                if(target>nums[mid] || target> nums[n-1])r=mid-1;
                else l =mid+1;
            ]
        }
        return -1;
     }
};


 //Question 2 
   class Solution {]
 int singleNonDuplicate(vector<int>&nums){
     int n = nums.size();
     int l=0; r=n-1;
      while(l<r){
        int mid = (l+r)/2;
        if(mid%2==1 && nums[mid]== nums[mid-1]) || (mid%2==0 && nums[mid+1])){
            l=mid+1;

        } else{
            r=mid;
        }
      }
      return nums[l];
 }
}