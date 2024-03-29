numbers = [10, 39, 20, 9, 44, 55]
odds = []
for num in numbers:
    if num%2 == 1:
        odds.append(num)
print(odds)

# same work but in one line (list comprehension)
odd_nums = [num for num in numbers if num%2 == 1 if num %5 == 0]
print(odd_nums)