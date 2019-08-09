function primo(k)
implicit none
logical :: primo
integer :: i,k
do i=2,k-1,+1
    if(mod(k,i)==0) then
        primo=.false.
        return
    end if
end do
primo=.true.
return
end function primo
function sigp(n)
implicit none
integer :: n,sigp
logical :: primo
n=n+1
do while (.not.primo(n))
    n=n+1
end do
sigp=n
return
end function sigp
program descFacPrim
implicit none
    integer:: n,j,sigp
    logical:: primo
    print*, "Ingresa un numero: "
    read*, n
    if(primo(n).eqv..true.) then
        print*, "Es primo"
    else
        j=2
        do
            do while(mod(n,j)/=0)
                j=sigp(j)
            end do
            print*, "(",j,")"
            n=n/j
            if (primo(n).eqv..true.) exit
        end do
        print*, "(",n,")"
    end if
end program descFacPrim