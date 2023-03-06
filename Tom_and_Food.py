t=int(input())
while t>0:
    t-=1
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    i=0
    j=0
    x=1
    ans=0
    s=0
    while j<n:
        s+=a[j]
        ans=max(ans,s)
        if(x<k):
            x+=1
            j+=1
        else:
            s-=a[i]
            i+=1
            j+=1
    print(ans)