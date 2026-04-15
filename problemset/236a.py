s = input().strip()

seen = [False] * 26
count = 0

for ch in s:
    idx = ord(ch) - ord('a')
    if not seen[idx]:
        seen[idx]=True
        count += 1
        
print("CHAT WITH HER!" if count % 2 == 0 else "IGNORE HIM!")