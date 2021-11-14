x=[]
y=[]
z=[]

n1=int(input('enter the size of first list'))
for i in range(n1):
    x.append(int(input()))
n2=int(input('enter the size of second list'))
for i in range(n2):
    y.append(int(input()))

for i in x:
    if i in y and i not in z:
        z.append(i)

for i in z:
    print(i)
