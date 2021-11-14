def gcd(x, y):
    while(y):
        x, y = y, x % y
    return x

t=int(input())
while t:
    t-=1
    a=[]
    b=[]
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    s=list(set(a))
    k=0
    if len(s)==2:
        b.append(s[1])
        b.append(s[0])
    if len(s)>2:
        b.append(s[1])
        b.append(s[0])
        b.append(s[0])
    if len(s)!=1:
        for i in s:
            for j in a:
                if j!=i:
                    b[k]=gcd(b[k],j)
            b[k]=b[k]+i
            k+=1
        print(max(b))
    else:
        print(2*a[0])
