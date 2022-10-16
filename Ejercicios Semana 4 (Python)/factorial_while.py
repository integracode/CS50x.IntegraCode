#Factorial de un numero utilizando el ciclo while
number = int(input("Ingresa un numero para calcular su factorial:\n"))

if (number == 0 or number <= 0):
    print("Ingresa un numero mayor a 0")
else:
    factorial = 1
    while(number):
        print(">Factorial: "+ str(factorial))
        print(">Number: "+ str(number))
        print("factorial = factorial(%s) * number(%s)" %(factorial,number))
        factorial = factorial * number
        print("factorial = %s" %(factorial))
        print("number = number(%s) - 1" %(number))
        number = number - 1
        print("number = %s" %(number))