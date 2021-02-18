ls = []

print("To stop the input just press enter.")
ip = tuple(map(str, input().split()))
ls.append(ip)

while(ip != ()):
    ip = tuple(map(str, input().split()))
    ls.append(ip)

ls.pop()

ans = []

for i in range(len(ls)):
    flag = 0
    for j in range(len(ls[i])):
        if(ls[i][j].islower() != True):
            flag = 1
            break

    if(flag == 0):
        ans.append(ls[i])

print(ans)