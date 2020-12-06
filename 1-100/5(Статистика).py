n = int(input())
a = [int(i) for i in input().split()]
a1 = []
a2 = []
for i in a:
    if i % 2 == 0:
        a1.append(str(i))
    else:
        a2.append(str(i))
print(' '.join(a2))
print(' '.join(a1))
if len(a1) < len(a2):
    print('NO')
else:
    print('YES')