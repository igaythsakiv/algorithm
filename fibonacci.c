#include<stdio.h>
#include<stdlib.h>
void dby10(int *p,int *len)
{
	int i=0;
	for(i=0;i<*len-1;++i)
	{
		*(p+i)=*(p+i+1);
	}
	*len=*len-1;
}
void add1(int *p,int *len)
{int carry=1;
	int i;
	for( i=0;i<*len;++i)
	{
		if(*(p+i)+carry>9)
		{
			carry=1;
			*(p+i)=(*(p+i)+carry)%10;
		}
		else
			carry=0;
		if(carry==0)
			break;
	}
	if(carry==1)
	{*(p+i)=1;
	        *len=*len+1;}
}

void sby1(int *p,int *len)
{
     int i=0;int change=1;
     for(i=0;i<*len;++i)
     {
     if(*(p+i)==0)
     {
	     *(p+i)=9;change=1;
	    // printf("%d",*(p+i));
     }
     else{
	     *(p+i)=*(p+i)-1;
	     change=0;
     }
     if(change==0)
	     break;
     }
     if(i==*len-1)
	     *len=*len-1;


}
void dby2(int *p,int *len)
{

}
struct node
{
	int a;
	int b;
};
int reper(struct node arr[],int p)
{
	for(int i=1;i<p;++i)
	{
		arr[i].a=arr[i-1].b;
		arr[i].b=(arr[i-1].a+arr[i-1].b)%100;
	}
	int j;
	for(int i=0;i<p;++i)
	{
		for(j=i+1;j<p;++j)
			if(arr[i].a==arr[j].a&&arr[i].b==arr[j].b)
				break;
	}
	return j;
}
int print(int n)
{
int i;int c;	int a=0,b=1;
	for(i=2;i<n;++i)
	{
		c=(a+b)%100;
		a=b;
		b=c;
	}
	return c;
}

int main()
{
	int a[1000];
	FILE *fp=fopen("data.txt","r");
	if(fp==NULL)
	{printf("file cannot be open");
			exit(1);
	
	}
	int i=0;
	char ch;
	while((fscanf(fp,"%c",&ch))!=EOF)
	{  a[i++]=ch-'0';
		printf("%d   ",ch-'0');
	}int b[1000];
	int k=i-1;
	int j=k-1;
	for(int i=0;i<k;++i)
		b[j--]=a[i];
	dby10(b,&k);
/*	for(int i=0;i<k;++i)
		printf("%d",b[i]);*/
	int c[10];c[0]=0;c[1]=0;c[2]=0;c[3]=1;
	int p=4;
	sby1(c,&p);
	for(int i=0;i<p;++i)
		printf("%d",c[i]);
         printf("enter the m value");
	 int m;
	 scanf("%d",&m);
	 m=m*m+2;
	 struct node newa[m];
	 newa[0].a=0;
	 newa[0].b=1;
	 int rep=reper(newa,m);
         printf("enter the fibonacci number");
	 int n;
	 scanf("%d",&n);
	 n=n%rep;
	 printf("reper value is %d \n",rep);
	 printf("%d",print(n));
return 0;
}

