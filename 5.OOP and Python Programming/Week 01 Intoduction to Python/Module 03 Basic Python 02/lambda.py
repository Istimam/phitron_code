# lambda
def doubled(x):
    return x*2
result = doubled(44)
print(result)

doubled = lambda num : num * 2
result = doubled(44)
squared = lambda num : num * num
output = squared(9)
print(output)

numbers = [12, 15, 13, 17, 19]
doubled_nums = map(doubled,numbers)
print(list(doubled_nums))

actors = [
    {'name': 'sabana', 'age': 96},
    {'name': 'sabila', 'age': 34},
    {'name': 'suhana', 'age': 6},
    {'name': 'saba', 'age': 90},
]

juniors = filter(lambda actor : actor['age'] < 40, actors)
num = lambda a:a*a
print(num(2**2))