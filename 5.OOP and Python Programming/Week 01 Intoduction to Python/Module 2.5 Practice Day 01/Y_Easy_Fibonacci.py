def fibonacci(n):
    fib_series = [0,1]
    for _ in range(2,n):
        fib_series.append(fib_series[-1]+fib_series[-2])
    return fib_series
n=int(input())
result=fibonacci(n)
for i in range(0,n):
    print(result[i],end =" ")