N = int(input())
array = list(map(int,input().split()))
mx = array.index(max(array))
mn = array.index(min(array))
array[mn],array[mx] = array[mx],array[mn]
print(*array)