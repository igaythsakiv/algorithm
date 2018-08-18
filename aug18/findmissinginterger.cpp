int Solution::firstMissingPositive(vector<int> &A) {
    int size=A.size();
    sort(A.begin(),A.end());
    int i=0;
    while(A[i]<0)++i;
    if(A[i]>1)return 1;
    while(A[i]+1==A[i+1]&&(i+1)<size)i++;
    //if(i+1==size)
    return A[i]+1;
    
    
    /*int min=100000000,max=0;
    long long int sum=0;int count=0;
    for(int i=0;i<size;++i)
    {
    
        if(A[i]>0&&min>A[i])
        min=A[i];
        if(A[i]>0&&max<A[i])
    }
    if(min>=2)
    return 1;
    for(int i=min;i<max;++i)
    {
        
    }
    long long int sum2;
    sum2=(count+2)*(count+1);
    sum2/=2;
    return int(sum2-sum);
    */
}

