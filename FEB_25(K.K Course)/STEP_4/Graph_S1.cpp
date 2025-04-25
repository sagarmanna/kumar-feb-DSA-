integer  n -->  number of nodes in the graph
read (n);

// takeing input 
integer m;
taking input --> number of edges in the graph 

 read(m);
 G[n] ;// contructing a graph using adjacency list

integer i=1;
while(i<=m){
    int u,v;
    cin>>u>>v;  // reading the edges in the graph
    G[u].push_back(v);
    G[v].push_back(u);
    // making undirected graph
    i++;

}


queue q;

q.push(1);
visited[]=0;
lvl[]=0;
lvl[1]=0;

While(q.empty)
print(v.. lvl[v]);

q.pop();

for(auto u : G[v]){ // this means iterating through all nodes connected to nodes 
    if(visited[u]==0){
        q.push(u);
        visited[u]-1;
        lvl[u]-lvl[v]+1;

    }
    else{
        // already visited node u so why visiting it again ....so stop
    }
}