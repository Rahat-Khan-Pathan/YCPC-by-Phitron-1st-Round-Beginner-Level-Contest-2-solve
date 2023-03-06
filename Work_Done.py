import math
t=int(input())
while t>0:
    t-=1
    x,d1,d2=map(int,input().split())
    ans=math.ceil((x*d1)/d2)
    print(ans)