Propuesta de mejora elaborada por: [Maximiliano Muñoz Solís]

**Matrícula:** [26164]
**Título de la propuesta:** [Materias Reprobadas en Boleta]

## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?

[Es una mejora, lo que cambia es que en la boleta después de darte tu calificación en cualquier materia reprobada te dice cuantos puntos te faltaron para aprobarla]

## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.

[Solo se cambia el mostrarBoleta, lo que se hace es agregar varios if para verificar si las calificaciones por materia son reprobatorias, en ese caso se resta de la calificación aprobatoria (7) la calificación obtenida por el alumno y se imprime esa diferencia, si su calificación es aprobatoria no pasa nada]

## 3. Receta

Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con `[NUEVO]` y cada paso que cambia con `[CAMBIA]`. Los pasos sin marca son los que ya existen.

```
[Inserta aquí tu respuesta]
SI total == 0 ENTONCES
    MOSTRAR "No hay alumnos registrados."
    TERMINAR FUNCION
FIN SI

MOSTRAR "Nombre a buscar: "
LEER nombreBuscado

indice = -1

PARA i = 0 HASTA total - 1
    SI nombres[i] == nombreBuscado ENTONCES
        indice = i
        SALIR DEL CICLO
    FIN SI
FIN PARA

SI indice == -1 ENTONCES
    MOSTRAR "No se encontro al alumno ", nombreBuscado
    TERMINAR FUNCION
FIN SI

promedio = (espanol[indice] + matematicas[indice] + disenoProgramas[indice]) / 3.0

materiasReprobadas = 0

SI espanol[indice] < CALIFICACION_APROBATORIA ENTONCES
    materiasReprobadas = materiasReprobadas + 1
FIN SI

SI matematicas[indice] < CALIFICACION_APROBATORIA ENTONCES
    materiasReprobadas = materiasReprobadas + 1
FIN SI

SI disenoProgramas[indice] < CALIFICACION_APROBATORIA ENTONCES
    materiasReprobadas = materiasReprobadas + 1
FIN SI

MOSTRAR "--- BOLETA ---"
MOSTRAR "Alumno: ", nombres[indice]
MOSTRAR "Espanol: ", espanol[indice]
MOSTRAR "Matematicas: ", matematicas[indice]
MOSTRAR "Diseno de Programas: ", disenoProgramas[indice]

[NUEVO] SI espanol[indice] < CALIFICACION_APROBATORIA ENTONCES
    [NUEVO] diferencia = CALIFICACION_APROBATORIA - espanol[indice]
    [NUEVO] MOSTRAR "Te faltan ", diferencia, " puntos para aprobar Espanol."
[NUEVO] FIN SI

[NUEVO] SI matematicas[indice] < CALIFICACION_APROBATORIA ENTONCES
    [NUEVO] diferencia = CALIFICACION_APROBATORIA - matematicas[indice]
    [NUEVO] MOSTRAR "Te faltan ", diferencia, " puntos para aprobar Matematicas."
[NUEVO] FIN SI

[NUEVO] SI disenoProgramas[indice] < CALIFICACION_APROBATORIA ENTONCES
    [NUEVO] diferencia = CALIFICACION_APROBATORIA - disenoProgramas[indice]
    [NUEVO] MOSTRAR "Te faltan ", diferencia, " puntos para aprobar Diseno de Programas."
[NUEVO] FIN SI

MOSTRAR "Promedio: ", promedio
MOSTRAR "Materias reprobadas: ", materiasReprobadas

SI promedio >= CALIFICACION_APROBATORIA
   Y materiasReprobadas == 0 ENTONCES
    MOSTRAR "Estado: Aprobado"
SINO
    MOSTRAR "Estado: Reprobado"
FIN SI
