t=int(input())
while t>0:
    t-=1
    count=0
    n,m=input().split(" ")
    n,m=int(n),int(m)

    if (m>n and m<2*n) or (n>m and n<2*m):
        while n>0 and m>0:
            count+=1
            if n>m:
                r=n%m
                if r==0:
                    n=0
                else:
                    n=r
            else:
                r=m%n
                if r==0:
                    n=0
                else:
                    m=r

    else:
        while 1:
            count+=1
            if m/n+n/m>1:
                break
            if m>n:
                m=m-n
            else:
                n=n-m

    if count%2==0:
        print('Rich')
    else:
        print('Ari')
