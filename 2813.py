
n = int(input())

c = 0
t = 0
gc = 0
gt = 0

for i in range(n):

  sd,sn = input().split()

  if (sd=='chuva' and gc<=0):
    c += 1
    gt += 1
    if gc>0:
      gc-=1
  if (sd=='chuva' and gc>0):
    gt += 1
    if gc>0:
      gc-=1
  if (sn=='chuva' and gt<=0):
    t += 1
    gc += 1
    if gt>0:
      gt-=1
  if (sn=='chuva' and gt>0):
    gc += 1
    if gt>0:
      gt-=1

print(c, t)
