t=int(input())
while t>0:
    t-=1
    i=0
    n,z=input().split(" ")
    n,z=int(n),int(z)
    ar = list(map(int,input().split()))
    while z>0:
        z-=1
        while i<n-1:
            if ar[i]==0 and ar[i+1]==1:
                ar[i]=1
                ar[i+1]=0
                i=i+2
            else:
                i=i+1

    print(ar)
