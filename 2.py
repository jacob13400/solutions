t_c=int(input())
while(t_c>0):
	x=[x for x in input().split(' ')]
	n1,n2=x[0],x[1]
	print(int(str(int(n1[-1::-1])+int(n2[-1::-1]))[-1::-1]))
	t_c-=1
