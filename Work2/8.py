# Двойной факториал числа
print('Input n:')
n = int(input())
def doublefact (n):
    if (n==0 or n==1):
        return 1
    else:
        return n*doublefact(n-2)
    
print ("Double factorial of", n, "=", doublefact(n))