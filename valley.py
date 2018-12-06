#s is the input string
i,x,y=0,0,0
d=[]
#d will store the heights after each move
for i in s:
    if i=="D":
        x-=1
        d.append(x)
    else:
        x+=1          
        d.append(x)
"""COUNTING VALLEYS IF HEIGHT BECOMES 0 AFTER THE LEAST DEPTH.
THEN MOVING I VARIABLE TO THE SEA LEVEL."""
while i<len(d):
    if d[i]<0:
        if d[i+abs(d[i])]==0:
            y+=1
            i+=abs(d[i])
    i+=1
print(y)