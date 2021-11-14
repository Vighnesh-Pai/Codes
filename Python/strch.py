t=int(input())
while t:
    cnt=0
    t-=1
    n=int(input())
    str=input()
    ch=input()
    for i in str:
        if ch==i:
            cnt+=1

    count=0
    left=0
    right=0

    if cnt is 1:
        for i in str:
            if i!=ch:
                left+=1
            else:
                break
        right=n-left-1
        print(left,right)

        for i in range(2,n):
            left1=0
            right1=0
            if(left<i-1):
                left1=i-1-left
            if(right<i-1):
                right1=i-1-right

            count=count+i-right1-left1
        print(count+2)
