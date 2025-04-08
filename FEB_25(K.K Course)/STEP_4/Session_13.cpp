class Solution{
    int maxDistance(int arr[],int n)
    {
        unordered_map<int,int>firstOccurance;
        int maxi=0;
        for(int i =0; i<n;i++){
            if(firstOccurance.find(arr[i])!=firstOccurance.end()){
                maxi=max(maxi,i-firstOccurance[arr[i]]);
            }else firstOccurance[arr[i]]=i;
            }
            return maxi;

        }
    };
  

    // count pairs with given sum 

    class Solution {
        public:
        int getPairCount(int arr[], int n , int k){
            unordered_map<int, int> frequency;
            int ans=0;
            for(int i =0;i<n;i++){
                int b=arr[i];
                int a =k-b;
                ans+= frequency[a];
                frequency[b]++;
            }
            return ans;
        }
    };



    // First Unique Character in a String 
    class Solution{
        public:
        int firstUniqChar(string s){
            unordered_map<char, int> frequency;
            for(auto ch : s){
                frequency[ch]++;

            }
             for(int i =0; i<s.size();i++){
                if(frequency[s[i]]==1) return i;

             }
             return -1;
        }
    
         TIME complexity=O(N)
          Space Complexity=O(26)=> O(1);
