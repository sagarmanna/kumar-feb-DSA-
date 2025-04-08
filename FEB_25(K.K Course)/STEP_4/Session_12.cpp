// hashmap code 

void solve(){
    int n ,q;
    cin>>n>>q;
    vector<int>arr(n+1;)
    for(int i=1; i<=n;i++){
        cin>>arr[i];

    }
    unordered_map<int>frequencyMap;
    for(int i=1; i<=n;i++){
        frequencyMap[arr[i]]++;

    }
    for(int i =1; i<=q;i++){
        int x;
        cin>>x;
        cout<<frequencyMap[x]<<"\n";

    }
}



//TWO SUM

 class sollution {
    public:
    vector<int>twoSUm(vector<int>&nums, int target){
    unordered_map<int,int> indexMap;
    int n =num.size();
    for(int i =0; i<n;i++){
        a+b=t
        a=t-b
        int remaining=target-nums[i];
        if(indexMap.find(remaining)!= indexmap.end()){
            return{indexMap[remaining], i};
                }
                return { -1,-1};
    }
