from collections import Counter

a=input().strip()
b=input().strip()
c=input().strip()

if Counter(a+b) == Counter(c):
    print("YES")
else:
    print("NO")
    
    
