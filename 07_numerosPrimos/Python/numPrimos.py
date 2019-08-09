n=int(input("Ingresa un numero: "))
comp=False
for i in range(2,n):
    if n%i==0:
        comp=True
        print("No es primo")
        break
if not comp:
    print("Es primo")