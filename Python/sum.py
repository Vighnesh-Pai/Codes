n=int(input("Check the number you want to check"))
count=0
for i in range(1,n+1):
    if n%i is 0:
        count+=1
if count==2:
    print(f"The number {n} is prime")
else:
    print(f"The number {n} isn't prime")
