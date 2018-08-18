//power of matrix
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
unsigned long long int m;
struct matrix
{
	unsigned long long int a,b,c,d;
};
struct matrix* matrixmultiply(struct matrix *a,struct matrix *b)
{
/*printf("content of a\n");
printf("%d %d %d %d\n",a->a,a->b,a->c,a->d);
printf("content of b\n");
printf("%d %d %d %d\n",b->a,b->b,b->c,b->d);
*/	struct matrix *c=(struct matrix*)malloc(sizeof(struct matrix));
	c->a=((a->a*b->a)%m+(a->b*b->c)%m)%m;
	c->b=((a->a*b->b)%m+(a->b*b->d)%m)%m;
	c->c=((a->c*b->a)%m+(a->d*b->c)%m)%m;
	c->d=((a->c*b->b)%m+(a->d*b->d)%m)%m;
//	printf("content of c\n");
//	printf("%d %d %d %d  \n",c->a,c->b,c->c,c->d);
	return c;
}
struct matrix* power(struct matrix *a,char n[],int k)
{
	int i=k-1;
	struct matrix *y;
	y=(struct matrix*)malloc(sizeof(struct matrix));
	y->a=1;y->b=0;y->c=0;y->d=1;
	while(i>=0)
	{
		if(n[i]=='1')y=matrixmultiply(y,a);
		a=matrixmultiply(a,a);
		i=i-1;
	}
	return y;
}
void sby1(char *aa)
{
	int k=strlen(aa);
	k--;
	int carry=1;
	while(k>=0)
	{if(carry==0)
		break;
	       	if(aa[k]-'0'-1==-1)
		{
			aa[k]='1';carry=1;}
	else{ aa[k]='0';carry=0;}

	}
}

int main()
{
	char aa[3000];
	scanf("%s",aa);
	scanf("%lld",&m);
	int k=strlen(aa);
	//printf("value of k %d\n",k);
	struct matrix *a=(struct matrix*)malloc(sizeof(struct matrix));
	a->a=1;a->b=1;a->c=1;a->d=0;
	sby1(aa);
	struct matrix *ca=power(a,aa,k);
	printf("%lld",ca->a);
	return 0;
}

