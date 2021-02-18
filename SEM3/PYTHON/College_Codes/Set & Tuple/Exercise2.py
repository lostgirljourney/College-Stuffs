def common():
  l1 = list(map(int, input().split()))
  l2 = list(map(int, input().split()))
  l3 = list(map(int, input().split()))

  l1 = set(l1)
  l2 = set(l2)
  l3 = set(l3)

  a = set()

  for i in l1:
    if i in l2:
      a.add(i)

  for i in a:
    if i in l3:
      print(i, end=" ")

common()