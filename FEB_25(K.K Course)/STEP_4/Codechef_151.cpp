
->n=1
->m


->b[m+1]

->a[m+1] -> a[i] = 1 means aarsi exits in that index;
tot_k = 0 kc = 0 

->k[m+1] -> k[i] = 1 means krypto exists in that index;
for(i=1;i<=m;i++){
    if(b[i]==1){
        a[i] = 1 
    }
    if(b[i]==2){ k[i] = 1 tot_k+=i kc++
        
    }
    
    if(b[i]==3){a[i] = 1 
        k[i] = 1 tot_k+=i kc++
    }
}
->aarsi[m+1] -> aarsi[i] = min cost to bring all the aarsi on blue line at index i 

for(line=1;line<=m;line++){
    d = 0 
    for(i=1;i<=m;i++){
        
        if(a[i]==1){
            d = d + abs(line-i);
        }
    }
    aarsi[line] = d 
} //optimize for aarsi as given below;
->krpto[m+1] -> krypto[i] = min cost to bring all the krpto on blue line at index i  
sum_of_krypto = 0 count_of_krypto = 0 
for(line=1;line<=m;line++){ d = 0 w = 0 
    if(k[line]==1){ 
        sum_of_krypto = sum_of_krypto + line; w = line; d=1
        
        count_of_krypto = count_of_krypto + 1 
    }
    
    
    left = count_of_krypto*line - (sum_of_krypto)
    
    
    right = (tot_k - sum_of_krypto + w) - line*(kc-count_of_krypto+d);
    
    
    
    
    krypto[line] = left + right 
}

for(i=1;i<=m;i++){
    
    print(abs(aarsi[i]-krypto[i]))

    
}
