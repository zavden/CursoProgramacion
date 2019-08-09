def primo(k):
    for i in range(2,k):
        if int(k%i)==0:
            return False
    return True
n=int(input("Ingresa un numero: "))
n=n+1
while not primo(n):
    n=n+1
print("El siguiente primo es: %d"%(n))