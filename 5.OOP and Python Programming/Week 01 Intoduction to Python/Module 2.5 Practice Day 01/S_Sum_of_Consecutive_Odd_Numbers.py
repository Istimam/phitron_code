t =int(input())
while t > 0:
    x=input()
    num=x.split()
    num1,num2 = map(int,num)
    xx=min(num1,num2)
    yy=max(num1,num2)
    sum=0
    for i in range(xx+1,yy):
        if i%2 != 0:
            sum+=i
    print(sum)
    t-=1