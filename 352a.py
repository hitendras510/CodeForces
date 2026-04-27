n = int(input())
arr = list(map(int, input().split()))

count0 = arr.count(0)
count5 = arr.count(5)

# Case 1: no zero → cannot end with 0
if count0 == 0:
    print(-1)

# Case 2: not enough 5s to make multiple of 9
elif count5 < 9:
    print(0)

# Case 3: valid
else:
    count5 = (count5 // 9) * 9   # largest multiple of 9
    print("5" * count5 + "0" * count0)