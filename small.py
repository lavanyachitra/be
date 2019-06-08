e1=int(input())
l=[int(i) for i in input().split()]
s=0
for i in range(e1):
	for j in range(i):
		if l[j]<l[i]:
			s+=l[j]
print(s)
