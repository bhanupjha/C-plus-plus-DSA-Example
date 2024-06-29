import math


def is_prime(num):
    if num <= 1:
        return False
    if num == 2:
        return True
    if num % 2 == 0:
        return False
    for i in range(3, int(math.sqrt(num)) + 1, 2):
        if num % i == 0:
            return False
    return True


def find_smallest_prime(numbers):
    q = min(numbers)
    
    for p in range(q, q * q):  
        if all(p % num == q for num in numbers if num != q) and is_prime(p):
            return p
    
    return "None"


input_numbers = list(map(int, input().split()))
n = input_numbers[0]
numbers = input_numbers[1:]


result = find_smallest_prime(numbers)
print(result)
