import random
ls = []
for _ in range(20):
	value = random.randrange(1, 100)
	ls.append(value)
ls.pop(0)
ls.pop(len(ls)-1)
ls.sort()
print(ls)