n=int(input())
max=0
x = list(map(int,input().split()))
x.sort()
for i in range (n-1):
    if x[i]%x[i+1]==x[i] and x[i]%x[i+1]>max:
        max=x[i]%x[i+1]
print(max)
