def count_ways(k,s):
    cnt=0
    for x in range(min(k,s)+1):
        for y in range(min(k,s-x)+1):
            z = s-x-y
            if z >= 0 and z <= k:
            # if x+y+z == s:
                cnt+=1
    return cnt

x=input()
num=x.split()
num1,num2=map(int,num)
result=count_ways(num1,num2)
print(result)
