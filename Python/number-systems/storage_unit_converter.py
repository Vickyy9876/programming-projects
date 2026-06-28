
print("Bienvenido al programa de conversión de unidades de almacenamiento") 
print("------------------------------------------------------------------------")

dict_almacenamiento = {
    "b": 1/8,
    "B": 1,
    "KB": 1024,
    "MB": 1024 ** 2,
    "GB":  1024 ** 3,
    "TB": 1024 ** 4
}

while True:
    print("-------------------------------------------------------------------------")
    unidad = input("Ingrese la unidad de origen (b, B, KB, MB, GB, TB): ")

    cantidad = float(input("Ingrese la cantidad: "))
    destino = input("Ingrese la unidad de destino (b, B, KB, MB, GB, TB): ")
    if unidad not in dict_almacenamiento or destino not in dict_almacenamiento:
        print("-----------------------------------------------------------------------------------------------")
        print("Error al ingresar las unidades. Por favor, intente nuevamente con las unidades correctas.") 
        print("------------------------------------------------------------------------------------------------")     
    else:
        bits = cantidad * dict_almacenamiento[unidad]
        resultado = bits / dict_almacenamiento[destino]
        print("-------------------------------------------------------------------------")
        print(f"{cantidad} {unidad} son equivalentes a {resultado} {destino}")

        salir = input("¿Desea seguir? (s/n): ")
        if salir == "n":
            print("Programa finalizado")
            break
            

    