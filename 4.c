#include <stdio.h>
#include <math.h>
int main()
{
	int tc,num,ten,f,x;
	scanf(" %d",&tc);
	while(tc>0){
		ten=0;
		x=1;
		scanf(" %d",&num);
		while(1){
			f=(num/pow(5,x));
			if(f!=0){
				ten+=f;
			}
			else
				break;
			x++;
		}
		printf("%d\n",ten);
		tc--;
	}
	return 0;
}