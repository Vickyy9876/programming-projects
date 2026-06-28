estadisticas={}
tabla_posiciones={}
salir=""
maximo=0
def promedio_puntos(estadisticas):
    total_puntos=0
    total_jugadores=0
    for i in estadisticas:
        total_puntos+=estadisticas[i][0]
        total_jugadores+=1
    if total_jugadores>0:
        return total_puntos/total_jugadores
    else:
        return 0
while salir!="s":
    jugador=input("Ingrese el jugador: ")
    print("-"*46)
    puntos=int(input("Ingrese cantidad de puntos: "))
    print("-"*46)
    partidos_ganados=int(input("Ingrese cantidad de partidos ganados: "))
    print("-"*46)
    estadisticas[jugador]=[puntos, partidos_ganados]
    salir=input("¿Desea salir? (s/n): ")
for i in estadisticas:
  if estadisticas[i][1]>maximo:
    maximo=estadisticas[i][1]
    tabla_posiciones[i]=maximo
print("Tabla de posiciones:")
for i in tabla_posiciones:
    print(f"{i}: {tabla_posiciones[i]}")
print("-"*46)
print(f"Promedio de puntos: {promedio_puntos(estadisticas)}")