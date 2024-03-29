# set: unique items collection. No Duplicate
# tuple --> ()
# list --> []
# set --> {}
numbers = [12,13,14,15,16,20]
print(numbers)
numbers_set = set(numbers)
print(numbers_set)
numbers_set.add(55)
print(numbers_set)

numbers_set.remove(12)
print(numbers_set)

for item in numbers_set:
    print(item)

if 9 in numbers_set:
    print('9 Exists')
else:
    print('Dosen\'t Exist')

A = {1, 2, 4}
B = {1, 2, 4 ,5, 6}
print(A&B)