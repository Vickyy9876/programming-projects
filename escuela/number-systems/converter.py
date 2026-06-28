valor_convertir=input("Ingrese el valor que desea convertir: " )
print("-------------------------------------------------------------")
base_origen=int(input("Ingrese el valor de la base de origen(2,8,10,16): "))
print("-------------------------------------------------------------")
base_destino=int(input("Ingrese el valor de la base de destino(2,8,10,16): "))
print("-------------------------------------------------------------")
if base_origen==10:
    valor_decimal=int (valor_convertir,10)
elif base_origen==2:
    valor_decimal=int(valor_convertir,2)
elif base_origen==8:
    valor_decimal=int(valor_convertir,8)
elif base_origen==16:
    valor_decimal=int(valor_convertir,16)

if base_destino==2:
    valor_destino=bin(valor_decimal)
elif base_destino==8:
    valor_destino=oct(valor_decimal)
elif base_destino==10:
    valor_destino=(valor_decimal)
elif base_destino==16:
    valor_destino=hex(valor_decimal)

if base_destino!=10:
    print(valor_destino[2:])
else: 
    print(valor_decimal)