passwords = [
    "hola",
    "python123",
    "seguridad",
    "abc456",
    "clave"
]

def revisar_contraseñas(passwords):
    for contra in passwords:
        if len(contra)<8 :
            print( contra, "--> Contraseña débil")
        elif len(contra)>=8:
                for caracter in contra:
                    if caracter.isdigit():
                        print( contra, "--> Contraseña fuerte")
                        break
                    else:
                        print( contra, "--> Contraseña débil")
                        break
    return passwords  
revisar_contraseñas(passwords)