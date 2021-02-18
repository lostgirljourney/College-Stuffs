from itertools import combinations

arr = set(map(int, input().split()))
r = int(input())
if(r<=len(arr)):
	print(list(combinations(arr, r)))
else:
	print("Not possible.")