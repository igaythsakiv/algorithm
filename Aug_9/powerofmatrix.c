//power of matrix
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct matrix
{
	int a,b,c,d;
};
struct matrix* matrixmultiply(struct matrix *a,struct matrix *b)
{
/*printf("content of a\n");
printf("%d %d %d %d\n",a->a,a->b,a->c,a->d);
printf("content of b\n");
printf("%d %d %d %d\n",b->a,b->b,b->c,b->d);
*/	struct matrix *c=(struct matrix*)malloc(sizeof(struct matrix));
	c->a=a->a*b->a+a->b*b->c;
	c->b=a->a*b->b+a->b*b->d;
	c->c=a->c*b->a+a->d*b->c;
	c->d=a->c*b->b+a->d*b->d;
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
int main()
{
	char aa[3000];
	scanf("%s",aa);
	int m;scanf("%d",&m);
	int k=strlen(aa);
	printf("value of k %d\n",k);
	struct matrix *a=(struct matrix*)malloc(sizeof(struct matrix));
	a->a=1;a->b=1;a->c=1;a->d=0;
	struct matrix *ca=power(a,aa,k);
	printf("%d",ca->a);
	return 0;
}

