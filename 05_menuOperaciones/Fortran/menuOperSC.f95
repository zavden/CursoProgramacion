program menuOperSC
implicit none
real:: num1,num2,res
character(1):: op,rep
print*, 'Este programa calcula varias operaciones'
print*
print*, 'a) Suma.'
print*, 'b) Resta.'
print*, 'c) Multiplicacion.'
print*, 'd) Division.'
print*
print*, 'Elige opcion: '
read*, op
select case (op)
    case ('a')
        print*, 'Escribe primer sumando: '
        read*, num1
        print*, 'Escribe segundo sumando:'
        read*, num2
        res=num1+num2
        print*, 'La suma es: ', res
    case ('b')
        print*, 'Escribe el minuendo: '
        read*, num1
        print*, 'Escribe el sustraendo:'
        read*, num2
        res=num1-num2
        print*, 'La resta es: ', res
    case ('c')
        print*, 'Escribe el segundo factor: '
        read*, num1
        print*, 'Escribe el primer factor:'
        read*, num2
        res=num1*num2
        print*, 'El producto es: ', res
    case ('d')
        print*, 'Escribe divisor: '
        read*, num1
        print*, 'Escribe dividendo:'
        read*, num2
        res=num1/num2
        print*, 'El cociente es: ', res
    case default
        print*, 'Esa no es una de las opciones.'
end select
end program menuOperSC