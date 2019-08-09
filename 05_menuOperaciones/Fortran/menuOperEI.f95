program menuOperEI
implicit none
real num1,num2,res
character(2) op
print *, 'Este programa calcula varias operaciones'
print *
print *, 'a) Suma.'
print *, 'b) Resta.'
print *, 'c) Multiplicacion.'
print *, 'd) Division.'
print *
write(*,*) 'Elige opcion: '
read(*,*) op
if (op=='a') then
    print*, 'Escribe primer sumando: '
    read(*,*) num1
    print*, 'Escribe segundo sumando:'
    read(*,*) num2
    res=num1+num2
    print*, 'La suma es: ', res
else if (op=='b') then
    print*, 'Escribe el minuendo: '
    read(*,*) num1
    print*, 'Escribe el sustraendo:'
    read(*,*) num2
    res=num1-num2
     write(*,*) 'La resta es: ', res
else if (op=='c') then
    print*, 'Escribe el segundo factor: '
    read(*,*) num1
    print*, 'Escribe el primer factor:'
    read(*,*) num2
    res=num1*num2
    write(*,*) 'El producto es: ', res
else if (op=='d') then
    print*, 'Escribe divisor: '
    read(*,*) num1
    print*, 'Escribe dividendo:'
    read(*,*) num2
    res=num1/num2
    write(*,*) 'El cociente es: ', res
else
    print*, 'Esa no es una de las opciones.'
end if
end program menuOperEI