#include<stdio.h>
#include<string.h>
int main()
{
	int t_c,n1,n2,rev1,rev2,s,revs;
	scanf("%d",&t_c);
	while(t_c>0){
		rev1=0,rev2=0,revs=0;
		scanf("%d%d",&n1,&n2);
		while(n1!=0){
			rev1=rev1*10+n1%10;
			n1/=10;
		}
		while(n2!=0){
			rev2=rev2*10+n2%10;
			n2/=10;
		}
		s=rev1+rev2;
		while(s!=0){
			revs=revs*10+s%10;
			s/=10;
		}
		printf("%d\n",revs);
		t_c--;
	}
	return 0;
}