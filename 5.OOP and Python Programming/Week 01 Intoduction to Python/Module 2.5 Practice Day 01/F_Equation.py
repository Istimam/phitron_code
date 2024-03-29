x=input()
num = x.split()
base,num2=map(int,num)
sum=0
for i in range(2,num2+1,2):
    sum+=pow(base,i)
print(sum)