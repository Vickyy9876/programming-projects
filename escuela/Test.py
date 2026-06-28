inventario = {
    "mouse": ("Genius", 500),
    "teclado": ("Hyperx", 1500),
    "computadora": ("Acer", 5000), #CARGA DE PRODUCTOS (Perifericos)
    "notebook": ("HP", 3000),
    "parlante": ("JBL", 2000)
}
stock = {}
for i in range(len(inventario)):

    nombre = input("Ingrese el nombre del producto: ")
    if nombre in inventario:

        cantidad = int(input("Ingrese cantidad en stock: ")) #Se regista el stock disponible para luego utilizar esa respuesta en las consultas.
        stock[nombre] = cantidad
        print("-" * 40)
    else:
        print("Ese producto no existe")
    
print("-" * 40)
respuesta = input("Ingrese producto a consultar o SALIR: ")
while respuesta != "SALIR":
    print("-"*46)
    if respuesta in inventario:
        categoria, precio = inventario[respuesta] #CONSULTA INTERACTIVA ( El usuario pregunta stock disponible del producto ingresado)
        print("Nombre:", respuesta)
        print("Categoria:", categoria)
        print("Precio:", precio)
        if respuesta in stock:
            print("Stock disponible:", stock[respuesta])
        else:
            print("Stock disponible: 0")
    else:
        print("Producto no encontrado")
    print("-" * 46)
    respuesta = input("Ingrese producto a consultar o SALIR: ")

print("==== RESUMEN FINAL ====") #RESUMEN FINAL (Se muestra stock, precio y nombre del producto ingresado)

for producto in inventario:
    categoria, precio = inventario[producto]
    if producto in stock:
        if stock[producto] == 0:
            print(producto, "- $", precio, "[Sin stock]")
        else:
            print(producto, "- $", precio, "[STOCK:", stock[producto], "]")
    else:
        print(producto, "- $", precio, "[Sin stock]")