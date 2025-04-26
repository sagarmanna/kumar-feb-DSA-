n
b[n+1]
G[n+5][]
i=1
while(i<=n-1)
{
    read(u)
    read(v)
    G[u].push_back(v);
    G[v].push_back(u);
    i++;

}
i=1;
while(i<= n){
    i=i+1;

}
used[n+1]
parent[n+1]
DFS(1,G,used,parent);
i=1;
while(i<=n){
    print(sum[i])
    i=i+1;

}
return 0;
}




/// Q2

n
b[n+1]
G[n+5][]
i=1
while(i<=n-1)
{
    read(u)
    read(v)
    G[u].push_back(v);
    G[v].push_back(u);
    i++;

}
i=1;
while(i<= n){
    i=i+1;

}
used[n+1]
parent[n+1]
DFS(1,G,used,parent);
i=1;
while(i<=n){
   answer=max(answer,sum[i])
    i=i+1;

}
print(answer)
return 0;
}
