x=[]
y=[]
n=int(input('enter the size of the list'))
for i in range(n):
    a=int(input('enter the element'))
    x.append(a)

for i in x:
    if i<5:
        y.append(i)

for i in y:
    print(i)
