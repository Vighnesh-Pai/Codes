t=int(input())
x=[]
while t:
    cnt=0
    count=0
    t-=1
    n=int(input())
    str,ch = input().split(" ")
    for i in str:

        if ch==i:
            cnt+=1
            x.append(count)
        count+=1
    #print(x)

    bcount=0
    str2=str
    freq=cnt
    j=0

    while(cnt):

        cnt-=1



        left=0
        right=0
        #print(str2)
        for i in str2:
            if i!=ch:
                left+=1
            else:
                break
        right=len(str2)-left-1
        #print(left,right)

        for i in range(2,len(str2)+1):
            left1=0
            right1=0
            if(left<i-1):
                left1=i-1-left
            if(right<i-1):
                right1=i-1-right

            bcount=bcount+i-right1-left1

        a=x[j]
        str2=str[a+1:]
        j+=1
    print(bcount+freq)
