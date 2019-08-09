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
program minComMul
implicit none
integer:: sigp,i=2,c,var,mcm=1,k
logical:: v,v1
integer,allocatable,dimension(:):: n
    print*, "Ingresa numero de valores a evaluar: "
    read*, var
    allocate (n(var))
    do c=1,var,+1
        print*, "Ingresa el valor ",c,": "
        read*, n(c)
    end do
    do
      do
        v=.false.
        v1=.false.
        do c = 1, var, +1
          if (mod(n(c),i)==0 ) then
            if ( v.eqv..false. ) then
              print*, "(",i,")"
              k=k+1
              mcm=mcm*i
              v=.true.
            end if
            n(c)=n(c)/i
          else
            if ( n(c)/=1 ) then
              v1=.true.
            end if
          end if
        end do
        if(v.eqv..false.) exit
      end do
      i=sigp(i)
      if(v1.eqv..false.) exit
    end do
    if ( k==1 ) then
      print*,"= 1"
    else
      print*,"=",mcm
    end if
end program minComMul