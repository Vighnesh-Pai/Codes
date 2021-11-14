t=int(input())
m=1000000007
list=[]
list.append(1)
for i in range(1,1000000):
    list.append((list[i-1]*i)%m)
while t>0:
    t-=1
    n=int(input())
    print(list[n+1]-1)
