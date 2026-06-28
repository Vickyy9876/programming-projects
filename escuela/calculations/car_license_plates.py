registro={}
patente=None
print("--------------------------------------------------")
while patente!="salir":
    
    patente=input("Ingrese la patente de su auto: ")
    
    if patente !="salir":
            marca = input("Ingrese marca del auto: ")
            modelo = input("Ingrese modelo del auto: ")
            año = input("Ingrese año del auto: ")
            color = input("Ingrese color del auto: ")
            registro[patente] = [marca, modelo, año, color]
    print("--------------------------------------------------")
    
for patente in registro:
    print(f" Patente: {patente} | Datos: {registro[patente]}")
    print("--------------------------------------------------")