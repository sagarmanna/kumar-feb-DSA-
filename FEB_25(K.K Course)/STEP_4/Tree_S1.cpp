n
g[] [];
i=1;
while(i<= n-1){
    read(x);
    read(y);
    g[x].push_back(y);
    g[y].push_back(x);
    i=i+1;

}

queue<int> q;
used[n+1] -->0;
used[1]=1;
q.push(1);
child[n+1]
child[i]  // numbver of children of node i
while(! q.empty()){
   top=q.front()
    q.pop()
    print(top)
    for(auto children :g[top]){
        if(used[children]==0){
            used[children]=1;
                q.push(children);

                count=count+1;

        }
                else{

                }
                child[top]=count
    }
}
i=1;
while(i<=n){
    print(child[i])
    i++;

}
// printing leaves
i=1;
while(i<=n){
    if(child[i]==0){
        print(i);
    }
}