program tablasMultiplicar
implicit none
integer:: i,j
print*, "Ingrese el numero cuya tabla deseas conocer: "
read*, j
do i=1,10,+1
    print*, j," x ",i," = ",i*j
end do
end program tablasMultiplicar