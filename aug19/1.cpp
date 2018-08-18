#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<vector<int>> a;
    int m1,ele;
    vector<int>b;
    double sum=0;
    vector<double>c;
    while(n--)
    {cin>>m1;
     sum=0;
     for(int i=0;i<m1;++i)
     {cin>>ele;
      b.push_back(ele);
      sum+=ele;
       }
     sum/=m1;
     c.push_back(sum);
     a.push_back(b);
    }double mean;
    double finding=0;
    double largefinding=100000000000000000000000000000000.0;
    for(int i=0;i<n;++i)
    {mean=c[i];
     for(int j=0;j<n;++j)
     {
         for(int k=0;k<a[j].size();++k)
         {cout<<a[j][k]<<" ";
             finding+=abs(a[j][k]-mean);
         }
     }
     if(largefinding>finding)
         largefinding=finding;
     
        
    }
    cout<<largefinding<<endl;
    return 0;
}

