#include iostreram>
using namespace std;
typedef long long int ll ; 
ll height[500000+5];
int b[500000+5];
void DFS(int node,vector <int> G[],int used[],int parent[]){
    
    used[node] = 1 ; 
    
    for(auto u: G[node]){ //iterating all children "u" of "node"
        
        if(used[u]==0){
            //if this node/branch has never been visited before 
            //just go into it and search it using dfs in recursion
            parent[u] = node ; 
            DFS(u,G,used,parent);
            
        }
    }
    
    
    //print(node)--->parent
    //----> bottom up traversal 
    ll h = 0 ; 
    for(auto child: G[node]){
        
        if(child==parent[node]){
            //it means the child node is parent of the node
            //it is not the child
            //ignore it
        }
        
        else{
            h = max(h,height[child]); 
        }
    }
    
    height[node] = 1 + h; 
    
    
}

int main(){
    int n ; 
    cin>>n ; 
    vector <int> G[n+1];
    int 

    i = 1 ; 
    while(i<=n-1){
        int u,v;
        cin>>u>>v ; 
        G[u].push_back(v);
        G[v].push_back(u); 
        i++;
    }
    int used[n+1] = {0};
    int parent[n+1] = {0};
    DFS(1,G,used,parent); //starts from node 1  
    
    ll answer = -100000000000000;    
    i = 1 ;
    while(i<=n){
        cout<<(height[i]);
        cout<<'\n';
        i++;
    }
   
    return 0 ; 
}

