#Вычисление косинуса 
import math
x = float(input("Input x"))
n = int(input("Input n"))
def cos_s (x, n):
    result = 0
    for i in range (n):
        result =+((-1) **i ) * (x ** (2*i)) / math.factorial(2*i)
        return result
cos = cos_s(x, n)
print ("X=", x, "N=", n, "Cos=",cos)
