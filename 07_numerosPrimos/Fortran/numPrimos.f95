program numPrimos
implicit none
integer :: n,i
logical :: comp=.false.
print*, "Ingresa un numero: "
read*, n
do i=2,n-1,+1
    if(mod(n,i)==0) then
        comp=.true.
        print*, "No es primo"
        if(comp.eqv..true.) exit
    end if
end do
if (.not. comp) then
    print*, "Es primo"
end if
end program numPrimos