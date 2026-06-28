listaBits=["B", "KB", "MB", "GB", "TB"]
print("Seleccione una unidad de esta lista y luego la unidad a la que quisieras pasarlo: ", listaBits)
print("------------------------------------------------------------------------------------------------------------------")

pos_origen =listaBits.index(input("Ingrese la unidad de origen:  "))
mayuscula_origen= pos_origen.lower()
print(mayuscula_origen)
pos_destino=listaBits.index(input("Ingrese la unidad de destino: "))
valor= float(input("Ingrese el valor de dicha unidad:  "))
diferencia=pos_destino - pos_origen
resultado= valor *(1024**(-diferencia))
print(f"El resultado del pasaje es igual a {resultado} ")