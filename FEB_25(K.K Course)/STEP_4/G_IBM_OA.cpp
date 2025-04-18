// Pseudocode
n;
b[n-1]
for(i=1; i<=n;i++){
    read (b[i])
}

q;
for (int i=1; i<=q;i++){
    read(target)
    for(int i=1;i<=n;i++){
        u=u+abs(b[i]-target)//abs=absolute
    }
}
print u;



//optimized code 

n;-> read (n)
b[n+1]; -> prefix[n+1]={0}
tot=0;

for(i=1; i<=n;i++){
    read (b[i])
    tot=tot+b[i]
}
sort (b)
q;
for (int i = 1 ; i<= q ; i++) {
    read(target)
g= left_part_last_index(target)
left_part = target* g- (sum of first g elements)  // O(N)
right_part = (sum of right part) - target*(number of elements in the right part)
print (u);





