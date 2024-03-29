# list, array, collection is same
#index     0   1   2   3   4   5
numbers = [10, 39, 20, 39, 44, 55]
#index     -6   -5   -4  -3  -2  -1
print(numbers[3],numbers[-3])

#list(start : end) #start from the start index and stops before the end index
print(numbers[2:5])
print(numbers[1:4])

#list(start : end : step)
print(numbers[1:5:2])
print(numbers[:4]) 
print(numbers[:]) # shortcut to copy a list
print(numbers[::-1]) #shortcut to reverse a list