A = list(map(str, input().split()))

result = []

for i in A:
	if(i.islower()==True or i.isupper()==True):
		result.append(i)
	  
print(result)