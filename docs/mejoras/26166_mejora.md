Propuesta de mejora elaborada por: [Roberto Emiliano Velazquez Ibarra]


**Matrícula:** 26166
**Título de la propuesta:** [Ordenar la lista de alumnos por promedio]


## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?

[ Es una mejora, el programa ya funciona, pero la lista de alumnos solo se muestra en el orden en que se capturaron. Con esta mejora se puede ver el grupo ordenado de mayor a menor promedio, como un ranking. ]

## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.

[Los arreglos paralelos que ya existen no se modifican; se agrega un arreglo nuevo, `orden[]`, que guarda las posiciones de los alumnos de mayor a menor promedio, para que sus datos no se desfasen al ordenar.]

## 3. Receta

Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con `[NUEVO]` y cada paso que cambia con `[CAMBIA]`. Los pasos sin marca son los que ya existen.

```
INICIO
  repetir
    [CAMBIA] mostrar menú (agregar opción "Ver ranking por promedio")
    leer opción
    según opción:
      capturar alumnos
      calcular promedios
      mostrar boletas
      [NUEVO] ver ranking por promedio:
        [NUEVO] si no hay alumnos capturados: avisar y volver al menú
        [NUEVO] llamar ordenarPorPromedio()
        [NUEVO] llamar mostrarRanking()
      salir
  hasta que opción sea salir
FIN

[NUEVO] ordenarPorPromedio():
  [NUEVO] para i desde 0 hasta total-1: orden[i] = i
  [NUEVO] repetir para pasada desde 0 hasta total-2:
    [NUEVO] para j desde 0 hasta total-2-pasada:
      [NUEVO] si promedio[orden[j]] < promedio[orden[j+1]]:
        [NUEVO] intercambiar orden[j] y orden[j+1]

[NUEVO] mostrarRanking():
  [NUEVO] para i desde 0 hasta total-1:
    [NUEVO] mostrar (i+1), nombre[orden[i]], promedio[orden[i]]
```
