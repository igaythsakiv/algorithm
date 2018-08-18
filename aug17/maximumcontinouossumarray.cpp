int Solution::maxSubArray(const vector<int> &A) {
    int max,curr,size=A.size();
    curr=A[0];
    max=A[0];
    for(int i=1;i<size;++i)
    {
        if(curr+A[i]>A[i])
        curr=curr+A[i];
        else
        curr=A[i];
        if(max<curr)
        max=curr;
    }
    return max;
}

