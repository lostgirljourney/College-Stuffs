A = list(map(str, input().split()))
vowels = "aeiouAEIOU"
vowelCountList = []
for i in A:
	vowelCount = 0 
	for j in vowels:
		vowelCount += i.count(j)
	vowelCountList.append(vowelCount)
	  
print(A.pop(vowelCountList.index(max(vowelCountList))))