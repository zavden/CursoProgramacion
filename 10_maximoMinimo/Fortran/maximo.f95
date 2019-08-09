program maximo
implicit none
real:: k1,k2
integer:: nvar,i
    print*, "Escribe el numero de variables a comparar: "
    read*, nvar
    do i=1,nvar,+1
        print*, "Ingresa el valor ",i,": "
        read*, k2
        if(k1<=k2 .or. i==1) then
            k1=k2
        end if
    end do
    print*, "El mayor es: ",k1
end program maximo