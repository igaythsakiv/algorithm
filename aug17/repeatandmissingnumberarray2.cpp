vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int size=A.size();
 long long int xx=0;
 int xora=0,xorb=0;
 for(int i=1;i<=size;++i)
 xora^=i;
 for(int i=0;i<size;++i)
 xorb^=A[i];
 int twoxor=xora^xorb;
 int k=twoxor&~(twoxor-1);
 xora=0;
 xorb=0;
 for(int i=1;i<=size;++i)
 {
     if(k&i)
     xora^=i;
     
 }
 for(int i=0;i<size;++i)
 {
     if(k&A[i])
     xorb^=A[i];
 }
 int num1=xorb^xora;
 int num2=num1^twoxor;
 vector<int>b;
 for(int i=0;i<size;++i)
 {
     if(num1==A[i])
     {
         b.push_back(num1);
         b.push_back(num2);
         return b;
     }
 }
 b.push_back(num2);
 b.push_back(num1);
 return b;
   //for(int i=1;i<=size;++i)
   //xx=xx^i;
    //int t;
 /*long long int sum=0;
    for(int i=0;i<size;++i)
        {
            sum+=A[i];
            xx+=A[i]*A[i];
        }
  long long int sum2=size*(size+1);
   sum2=sum2/2;
   long long int sum3=sum2*(2*size+1);
   sum3=sum3/3;
   sum3=sum3-xx;
   sum2=sum2-sum;
   sum3=sum3/sum2;
   long long int ans1=(sum3+sum2)/2;
    long long int ans2=(sum3 -sum2)/2;
   vector<int>b;
   b.push_back(ans2);
   
   b.push_back(ans1);
   return b;*/
}

