#include <stdio.h>
int main()
{
	int tc,n;
	double p;
	scanf(" %d",&tc);
	while(tc>0){
		p=1;
		scanf(" %d",&n);
		for(int i=n;i>0;i--){
			p*=i;
		}
		printf("%.0lf\n",p);
		tc--;
	}
	return 0;
}