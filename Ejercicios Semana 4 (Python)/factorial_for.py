#Factorial de un numero utilizando el ciclo for
number = int(input("Ingresa un numero para calcular su factorial:\n"))

if (number == 0 or number <= 0):
    print("Ingresa un numero mayor a 0")
else:
    factorial = 1
    for number in range(number,0,-1):
        print(">Factorial: "+ str(factorial))
        print(">Number: "+ str(number))
        print("factorial = factorial(%s) * number(%s)" %(factorial,number))
        factorial = factorial * number
        print("factorial = %s" %(factorial))