function primos(k)
implicit none
integer :: k,i
logical :: primos
do i=2,k-1,+1
    if(mod(k,i)==0) then
        primos=.false.
        return
    end if
end do
primos=.true.
return
end function primos
program sigPrimo
implicit none
integer :: j
logical:: primos
print*, "Ingresa un numero: "
read*, j
j=j+1
do while (.not.primos(j))
    j=j+1
end do
print*, "El siguiente primo es: ",j
end program sigPrimo