a = input().split()

o = []

for i in a:

  if i[:2] == i[2:4]:
    o.append(i[2:])
  else:
    o.append(i)

print(*o)
