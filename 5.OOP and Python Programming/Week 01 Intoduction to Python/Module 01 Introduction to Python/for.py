# for(int i=0; i<n; i++)
numbers=[5,10,15,20]
sum = 0
for num in numbers:
    # print(num)
    sum+=num
    if sum > 20:
        print('bigger values',sum)
print(sum)