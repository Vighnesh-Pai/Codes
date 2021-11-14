t=int(input())
while t>0:
    t-=1
    one=0
    n,z=input().split(" ")
    n,z=int(n),int(z)

    i=input().replace(" ","")

    for j in i:
        if j=='1':
            one+=1

    i_b=int(i,2)
    if(one>z):
        a=bin(i_b*(one-z))
    else:
        a=bin(i_b*(one-z)+one)



    a=a.replace("0b","")

    a=str(a)

    for i in range(n):
        print(a[i], end=' ')
    print()
