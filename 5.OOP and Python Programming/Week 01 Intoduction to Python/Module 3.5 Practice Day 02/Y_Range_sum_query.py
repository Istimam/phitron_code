N, Q = map(int, input().split())
array = list(map(int,input().split()))

prefix_sum = [0] * (N+1)
for i in range(1, N+1):
    prefix_sum[i] = prefix_sum[i-1]+array[i-1]
for _ in range(Q):
    L, R = map(int, input().split())
    result = prefix_sum[R] - prefix_sum[L - 1]
    print(result)