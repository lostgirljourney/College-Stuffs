A = list(map(str, input().split()))
result = []
for i in A:
	summ = 0
	for j in range(len(i)):
		summ+=ord(i[j])
	result.append(summ)
print(result)