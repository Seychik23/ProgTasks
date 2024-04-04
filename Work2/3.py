import math
x = float(input("Input x"))
def calculate_exp(x, constant=0.0001):
    result = 0
    term = x
    n = 1

    while abs(term) >= constant:
        result += term
        n += 1
        term = x**n / math.factorial(n)

    return result
exp = calculate_exp(x)
print("Exp: ", exp)
