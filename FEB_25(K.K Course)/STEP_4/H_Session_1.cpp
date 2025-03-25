// input(n);
// input(arr);
// input(k);
// bool check(){

//     for(int i=1;i<=n;i++){
//         for(int j=i+1;j<=n && j<=i+k;j++){
//             if(arr[i]--arr[j]){
//                 print("YES ,We  found a valid Pair");
//                 return true ;

//             }
//         }
//     }
//     return false;
// }


//Broute force approach optimization

// input(n);
// input(k);
// int (arr);
// bool check(){
//     map<int,int>mp;
//     //key=element;
//     //value= last index where key element has occured in arr 

//     for(int i =1; i<=n;i++){
//         int current Element =arr[i];
//         if(mp.find(cuurentElemnt)!=mp.end()){
//         int lastIndex=mp[currentElement];
//         int distance =i-lastIndex;
//         if(distance<=k)
//         return true;
//     }
// }
// return false;
// }



#include <iostream>
#include <unordered_map>
#include <vector>

int countPairs(const std::vector<int>& arr, int k) {
    std::unordered_map<int, int> freq;
    int count = 0;

    for (int j = 0; j < arr.size(); ++j) {
        int complement = k - arr[j];
        if (freq.find(complement) != freq.end()) {
            count += freq[complement];
        }
        freq[arr[j]]++;
    }

    return count;
}

int main() {
    std::vector<int> arr = {1, 5, 7, -1, 5};
    int k = 6;
    std::cout << "Count of pairs: " << countPairs(arr, k) << std::endl;
    return 0;
}
