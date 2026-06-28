
def decimal_a_BCD(numero):
    
   
    if numero>0:
            bcd=" "
            for letra in str(numero):
                bcd+=bin(int(letra)) [2:].zfill(4)+" "
                
            return bcd
            
                
    else:
            print("-"*46)
            print("Numero ingresado incorrecto")
            ValueError
    

numero=int(input("Ingrese un numero entero: "))
resultado=decimal_a_BCD(numero)
print("-"*46)
print("Numero en BCD: ",resultado)