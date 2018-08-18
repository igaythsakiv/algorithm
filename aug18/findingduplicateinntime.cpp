int Solution::repeatedNumber(const vector<int> &A) {
    int size=A.size();
    int newsize=size/sqrt(size);
    int a[int(sqrt(size))+1];
    int b=sqrt(size);
    for(int i=0;i<=b;++i)
    a[i]=0;
    for(int i=0;i<size;++i)
    a[A[i]/b]++;
    int i;
    for( i=0;i<=b;++i)
    if(a[i]>b)break;
    for(int j=0;j<=b;++j)
    a[j]=0;
    int basic=i*b;int upper=(i+1)*b;
  cout<<basic<<" "<<upper<<endl;
    for(int k=0;k<size;++k)
    {
        if(A[k]>=basic&&A[k]<upper)
            {//cout<<A[k]<<",";
                a[A[k]-basic]++; }
    }//cout<<endl;cout<<"b="<<b<<endl;
    for(int k=0;k<b;++k)
    {//cout<<a[k]<<",";
        if(a[k]==2)
        return k+basic;
    }
    return -1;
/*    int b[size+1];
    for(int i=0;i<=size;++i)
    b[i]=0;
    for(int i=0;i<size;++i)
    b[A[i]]++;
    for(int i=1;i<=size;++i)
    if(b[i]==2)return i; 
  */  // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

