program parImpar
implicit none
integer :: num
print*, "Ingresa un numero: "
read*, num
if (mod(num,2)==0) then
    print*, num," es par"
else
    print*, num," es impar"
end if
end program parImpar