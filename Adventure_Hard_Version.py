import sys
sys.setrecursionlimit(10**6)  # Set the maximum recursion depth to 10^6
dp=[[-1 for j in range(1005)] for i in range(1005)]
def knapsack(v,w,n,W):
    if n==0 or W==0:
        return 0
    if dp[n][W] != -1:
        return dp[n][W]
    if w[n-1]<=W:
        dp[n][W] = max(knapsack(v,w,n-1,W-w[n-1])+v[n-1],knapsack(v,w,n-1,W))
        return dp[n][W]
    else:
        dp[n][W]=knapsack(v,w,n-1,W)
        return dp[n][W]
n,W=map(int, input().split())
# print(n,W)
w=list(map(int, input().split()))
v=list(map(int,input().split()))
print(knapsack(v,w,n,W))
