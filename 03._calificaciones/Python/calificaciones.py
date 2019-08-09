calif=float(input("Ingresa tu calificacion: "))
if calif<6:
    if calif<0:
        print("Tu calificacion no es valida.")
    else:
        print("Estas reprobado.")
else:
    if calif>10:
        print("Tu calificacion no es valida.")
    else:
        print("Estas aprobado.")