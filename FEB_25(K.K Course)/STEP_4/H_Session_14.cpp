
// IST SOlution code
class solution{
    public: 
    int longestConsecutive(vector<int>&nums){
        unordered_map<int, bool>present,checked;
        for(auto a: nums){
            present[a]=true;
        }
        int longestConsecutiveChain=0;
        for(auto a:nums){
            if(!checked[a] && !present[a-1]){
                int currentChain=0;
                int start=0;
                while(present[start]){
                    currentChain++;
                    checked[start]=true;
                    start++;
                }
                longestConsecutiveChain= max(longestConsecutiveChain, currentChain);
            }
        }
        return longestConsecutiveChain;
    }
};




// second  question solution 

class Solution{

    int maxLen(vector<int>&A, int n)
    {
        unordered_map<int, int>prefixSumIndex;
        int sum=0;
        int maxLength=0;
        for(int i =0; i<nli++){
            sum+=A[i];
            if(sum==0)maxLength=i+1;
            else{
                if(prefixSumIndex.find(sum)!= prefixSumIndex.end()){
                    maxLength=maxLength, i - prefixSumIndex[sum]);
                } else{
                    prefixSumIndex[sum]=i;
                }
            }
        }
        return maxLength;
    }
};