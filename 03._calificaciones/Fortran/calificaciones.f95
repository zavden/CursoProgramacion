program calificaciones
implicit none
real :: calif
print*, "Ingresa tu calificacion:"
read*, calif
if (calif<6) then
    if (calif<0) then
        print*, "Tu calificacion no es valida."
    else
        print*, "Estas reprobado."
    end if
else
    if (calif>10) then 
        print*, "Tu calificacion no es valida."
    else
        print*, "Estas aprobado."
    end if
end if
end program calificaciones