int Solution::maxArr(vector<int> &A) {
  int size=A.size();
  int b[size],c[size];
  for(int i=0;i<size;++i)
  {
      b[i]=A[i]+i;
      c[i]=A[i]-i;
  }
   int min1=b[0],min2=c[0],max1=b[0],max2=c[0];
   for(int i=1;i<size;++i)
   {
       if(min1>b[i])
       min1=b[i];
       if(max1<b[i])
       max1=b[i];
       if(min2>c[i])min2=c[i];
         if(max2<c[i])max2=c[i];
   }
    int sum1=max1-min1;
    int sum2=max2-min2;
    if(sum1>sum2)
    return sum1;
    else 
    return sum2;
}

