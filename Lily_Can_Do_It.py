t=int(input())
while t>0:
    t-=1
    n=int(input())
    l=list(map(int, input().split()))
    o=0
    e=0
    for a in l:
        if a%2==0:
            e+=1
        else:
            o+=1
    if e>0 and o>0:
        print("YES")
    else:
        print("NO")
