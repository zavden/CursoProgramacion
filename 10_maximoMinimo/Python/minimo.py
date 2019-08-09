nvar=int(input("Escribe el numero de variables a comparar: "))
for i in range(1,nvar+1):
    k2=float(input("Ingresa el valor de %d: "%(i)))
    if (i==1 or k1>=k2):
        k1=k2
print("El menor es: %f"%(k1))