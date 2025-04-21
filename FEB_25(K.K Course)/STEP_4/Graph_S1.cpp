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
