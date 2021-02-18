ls = []

print("To stop the input just press enter.")
ip = tuple(map(int, input().split()))
ls.append(ip)

while(ip != ()):
    ip = tuple(map(int, input().split()))
    ls.append(ip)

ls.pop()

result = list(filter(lambda i: all(x>=0 for x in i) , ls))

print(result)