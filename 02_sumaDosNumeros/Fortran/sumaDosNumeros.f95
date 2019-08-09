program sumaDosNumeros
implicit none
real:: num1,num2,suma                         !Declaracion de variables
    print*, 'Este programa suma dos numeros'
    print*, 'Ingresa primer numero:'
    read*, num1                             !Lectura de valor num1
    print*, 'Ingresa segundo numero:'
    read*, num2                             !Lectura de valor num2
    suma=num1+num2                             !Operacion suma
    print*, 'La suma es: ',suma                !Impresion de resultado
end program sumaDosNumeros
