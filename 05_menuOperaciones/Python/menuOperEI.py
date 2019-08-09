op=input("Elija una de las siguientes opciones:\n\n\ta) Suma.\n\tb) Resta.\n\tc) Multiplicacion.\n\td) Division.\n\n\t\t\t\t Opcion: ")
if op=='a':
    num1=float(input("Ingresa primer sumando: "))
    num2=float(input("Ingresa segundo sumando: "))
    res=num1+num2
    print("La suma es: %f" %res)
elif op=='b':
    num1=float(input("Ingresa el minuendo: "))
    num2=float(input("Ingresa el sustraendo: "))
    res=num1-num2
    print("La resta es: %f" %res)
elif op=='c':
    num1=float(input("Ingresa primer factor: "))
    num2=float(input("Ingresa segundo factor: "))
    res=num1*num2
    print("El producto es: %f" %res)
elif op=='d':
    num1=float(input("Ingresa dividendo: "))
    num2=float(input("Ingresa divisor: "))
    res=num1/num2
    print("La division es: %f" %res)
else:
    print("Esa no es una opcion.")