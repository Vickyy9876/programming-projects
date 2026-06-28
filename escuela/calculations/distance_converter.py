
print("--- Conversor de Distancias ---")
print("1. Millas a Kilómetros")
print("2. Kilómetros a Millas")

opcion = input("Seleccione una opción (1 o 2): ")

if opcion== "1":
    print("Conversor de millas a kilometros")
    print("----------------------------------")
    dato= float(input("Ingrese su medida en millas: "))
    resultado=dato*1.609
    print(f"El resultado de convertir {dato}  millas a kilometros es: {resultado} km"  )

elif opcion== "2":
    print("Conversor de kilometros a millas")
    print("----------------------------------")
    dato=float(input("Ingrese su medida en kilometros : "))
    resultado= dato* 0.621371
    print(f"El resultado de convertir {dato}  kilometros es: {resultado} millas"  )
else:
    print("Eligio mal la opcion, elija entre 1 y 2")
           