
print("Calculadora de corriente en un circuito con resistencias en paralelo")
print("--------------------------------------------------------------------------")
salir=True
while salir==True: 
    
    R1=float(input("Ingrese el valor de la resistencia 1 en ohmios: "))
    R2=float(input("Ingrese el valor de la resistencia 2 en ohmios: "))
    R3=float(input("Ingrese el valor de la resistencia 3 en ohmios: "))
    R4=float(input("Ingrese el valor de la resistencia 4 en ohmios: "))
    Vi=float(input("Ingrese el valor del voltaje en voltios: "))
    
    R12=R1*R2/(R1+R2)
    R34=R3*R4/(R3+R4)
    Rtotal=R12+R34

    I=Vi/Rtotal

    print("--------------------------------------------------------------------------")
    print(f"La corriente total en el circuito es: {I:.2f} A")
    print("--------------------------------------------------------------------------")
    salir=input("¿Desea realizar otro cálculo? (s/n): ")
    if salir=="n":
        salir=False
        print("Gracias por usar la calculadora de corriente")
    else:
        salir=True
    print("--------------------------------------------------------------------------")

