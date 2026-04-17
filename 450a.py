n,m=map(int, input().split())
a=list(map(int, input().split()))

max_turns = -1
ans = -1

for i in range(n):
    turns = (a[i]+m-1)//m
    if turns >= max_turns:
        max_turns = turns
        ans=i+1
        
print(ans)
