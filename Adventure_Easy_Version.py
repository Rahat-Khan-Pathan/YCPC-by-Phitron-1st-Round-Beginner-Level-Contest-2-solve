def knapsack(v,w,n,W):
    if n==0 or W==0:
        return 0
    if w[n-1]<=W:
        return max(knapsack(v,w,n-1,W-w[n-1])+v[n-1],knapsack(v,w,n-1,W))
    else:
        return knapsack(v,w,n-1,W)
n,W=map(int, input().split())
# print(n,W)
w=list(map(int, input().split()))
v=list(map(int,input().split()))
print(knapsack(v,w,n,W))