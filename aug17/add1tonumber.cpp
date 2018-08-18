vector<int> Solution::plusOne(vector<int> &A) {
    int size=A.size();
    int carry=1;
    for(int i=size-1;i>=0;i--)
    {
        if(A[i]+carry==10)
        {
            A[i]=0;
            carry=1;
        }
        else
        {
            A[i]=A[i]+1;
            carry=0;
        }
        if(carry==0)
        break;
    }
    if(carry==1)
    A.insert(A.begin(),1);
    int i=0;
    while(A[i]==0)
    A.erase(A.begin());
    
    return A;
}

