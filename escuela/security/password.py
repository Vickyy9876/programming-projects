bandera_mayus=False
bandera_numero=False
bandera_long=False
bandera_min=False
bandera_especial=False

contra=input("Ingrese una contreseña: ")
for i in contra:
    if i.isupper()==True:
        bandera_mayus= True 
     
    elif i.isnumeric()==True:
        bandera_numero=True
       
    elif i.islower()==True:
        bandera_min=True
       
    elif not i.isdigit()==True:
        bandera_especial=True
        
        
    
if  len(contra)>=6 and len(contra)<=12:
    bandera_long=True

if bandera_mayus==True and bandera_numero==True and bandera_min==True and bandera_especial==True and bandera_long==True:
    print("Va queriendo ;)")
else:
    print("Pensa de nuevo ")
    match (bandera_mayus, bandera_numero, bandera_min, bandera_long, bandera_especial):
        case (False, _, _, _, _):
            print("No pusiste una mayúscula")
        case (_, False, _, _, _):
            print("No pusiste un número")
        case (_, _, False, _, _):
            print("No pusiste una minúscula")
        case (_, _, _, False, _):
            print("Te faltaron o te pasaste de dígitos")
        case (_, _, _, _, False):
            print("No pusiste un símbolo especial")
    
        
    