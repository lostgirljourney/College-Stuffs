A = list(map(str, input().split()))
for i in range(len(A)):
	if(A[i].isdigit()==True):
		A[i] = int(A[i])
		A[i] += 6
		A[i] = str(A[i])
	else:
		continue

print(A)