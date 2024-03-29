numbers = [10, 39, 20, 39, 44, 55]

numbers.append(56)
print(numbers)

numbers.insert(0,71)
print(numbers)

if 98 in numbers:
    numbers.remove(98)
    print(numbers)

last = numbers.pop()
print(last,numbers)

index = numbers.index(71)
print(index)