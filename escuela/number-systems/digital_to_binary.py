print("-"*46)
print("---Convertidor de numero decimal a binario---")
print("-"*46)

def sacar_binario(numero):
        if numero>0:
            binario=""
            
            while numero>0:
                resto=numero%2
                binario=str(resto)+binario  
                numero=numero//2
            return binario
                
        else:
            print("-"*46)
            print("Numero ingresado incorrecto")
            ValueError
       

numero=int(input("Ingrese un numero decimal: "))
resultado = sacar_binario(numero)
print("-"*46)
print(f"El numero {numero} en binario es: {resultado}")