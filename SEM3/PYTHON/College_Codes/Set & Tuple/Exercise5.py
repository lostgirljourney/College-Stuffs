ls = []

print("To stop the input just press enter.")
ip = tuple(map(int, input().split()))
ls.append(ip)

while(ip != ()):
    ip = tuple(map(int, input().split()))
    ls.append(ip)

ls.pop()

ans = []

for i in range(len(ls)):
    ans.append(tuple(sorted(ls[i])))
   
print(set(ans))