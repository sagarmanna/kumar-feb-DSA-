class solution {
    public:
     int search (vector<int>& nums, int target){
        int n=nums.size();
        int l=0;r=n-1;
        while(l<= r){
            int mid =(l+r)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>=nums[0]){
                if(target>nums[mid]|| target<nums[0]) l=mid+1;
                else r=mid-1;

            }else{
                if(target>nums[mid]|| target>nums[n-1]) r= mid-1;
                else l= mid+1;
            }

            
        } 
        return -1;
     }
}

//Question 3


bool lessThanEqual(double a, double n, double m) { 
    double res = 1; 
    for (int i=1; i <= n; i++) { 
    res = a; 
    (res > m) return false; 
    } 
    return true 
    } 
    double findNthRootOfM(int n, int m) ( 
    double l=1,r= m; 
    while (-1> (10-8)) ( 
    double mid (1+r)/2; 
    (lessThanEqual(mid, n, m)) { 
    l= mid; 
    }else r= mid; 
    } 
    return 1; 
    }