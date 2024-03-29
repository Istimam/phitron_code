import math
import time
def timer(func):
    def inner(*args, **kawargs):
        print('time started')
        # print(func)
        start = time.time()
        func(*args, **kawargs)
        print('time ended')
        end = time.time()
        print(f'total time taken {end - start}')
    return inner
# timer()()

@timer
def get_fact(n):
    print('factorial starting')
    result = math.factorial(n)
    print(f'factorial of {n} is: {result}')
get_fact(3)
    
# timer(get_fact)()