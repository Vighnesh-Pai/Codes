t=int(input())
while t>0:
    t-=1
    count=0
    n,m=input().split(" ")
    n,m=int(n),int(m)

    while n>0 and m>0:
        count+=1
        if n>m:
            if n<2*m:
                r=n%m
                if r==0:
                    n=0
                else:
                    n=r

            else:
                if count%2==0:
                    print('Rich')
                else:
                    print('Ari')
                n=0

        elif n==m:
            if count%2==0:
                print('Rich')
            else:
                print('Ari')
            n=0

        else:
            if m<2*n:
                r=m%n
                if r==0:
                    n=0
                else:
                    m=r

            else:
                if count%2==0:
                    print('Rich')
                else:
                    print('Ari')
                n=0
