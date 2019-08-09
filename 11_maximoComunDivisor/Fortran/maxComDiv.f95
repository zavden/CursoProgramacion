function minimo(m1,m2)      !Inicia funcion minimo
implicit none
integer:: minimo,m1,m2
    if(m1<=m2) then
        minimo=m1
    else
        minimo=m2
    end if
    return
end function minimo         !Finaliza funcion minimo
function primo(k)           !Inicia funcion primo
implicit none
logical:: primo
integer:: k,i
    do i=2,k-1,+1
        if(mod(k,i)==0) then
            primo=.false.
            return
        end if
    end do
    primo=.true.
    return
end function primo          !Finaliza funcion primo
function sigp(k)            !Inicia funcion siguiente primo
implicit none
integer:: sigp,k
logical:: primo
    k=k+1
    do while(.not. primo(k))
        k=k+1
    end do
    sigp=k
    return
end function sigp           !Finaliza funcion siguiente primo
program MaxComDiv           !Inicia funcion MCD
implicit none
integer:: minimo,i=2,c,var,MCD=1,mini,sigp
logical:: primo,ver=.true.
integer,allocatable,dimension(:):: n
    print*, "Ingresa numero de valores a evaluar: "
    read*, var
    allocate (n(var))
    do c=1,var,+1
        print*, "Ingresa el valor ",c,": "
        read*, n(c)
    end do
    mini=n(1)
    do c=2,var,+1
        mini=minimo(mini,n(c))
    end do
    do
        do c=1,var,+1
            if(mod(n(c),i)/=0) then
                ver=.false.
            end if
            if(ver.eqv..false.) exit
        end do
        if(ver.eqv..true.) then
            print*,"(",i,")"
            MCD=MCD*i;
            do c=1,var,+1
                n(c)=n(c)/i
            end do
        else
            i=sigp(i)
            ver=.true.
        end if
        if(i>mini) exit
    end do
    print*, "=", MCD
end program MaxComDiv