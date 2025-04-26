long long n;
read(n);
//size of graph 
integer m;
//number of edges 
read  m;
 G[n];// graph using adjacency list
 integer i=1;
  while(i<=m){
    int  u,v;
    read>u>>v;  // reading the edges in this graph
    G[u].push_back(v);
    G[v].push_back(u);
    i++;


  }
  queue  q;  // declear q
  visited[]={0};
  visited[1]={1};
  lvl[]={0};
  lvl[1]=0;

  while(!q.empty()){
    v=q.front();//this is top most element of queue
    print() v.....lvl[v]);
    q.pop(); // pop thew element odf queue

for(auto u: G[v]){
    if(used[u]==0){
      q.push(u);
      visited[u]=1;
      lvl[u]=lvl[v]+1;
      ways[u]=ways[u]+ways[u];
    }
    else{

    }
  
}
  }



  // 2nd solution 

  