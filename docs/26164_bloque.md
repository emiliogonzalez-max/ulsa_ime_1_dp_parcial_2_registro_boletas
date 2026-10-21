## 1. Autor

**Nombre:** [Maximiliano Muñoz Solís]
**Matrícula:** [26164]
**Bloque y opción elegida:** [Boleta Individual]
**Archivo de código:** [(../include/mostrar_boleta.h)]

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?

[Mi bloque hace que al seleccionar esa opción en el menú se pida el nombre de estudiante del que se quiere saber su estado de calificaciones, si no hay ningún alumno registrado te dice que no hay nadie, si pones un nombre de un alumno no registrado te pedirá que pongas otro. Después de esto, calcula el promedio en base a las calificaciones que se ingresaron, determina si tienes materias reprobadas y cuantas, aparte de tomar en cuenta si tienes al menos una materia reprobada se te considera reprobado y al final lo imprime. Esto sirve para identificar rapidamente los estados de calificaciones de cualquier alumno ingresado en la lista]

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

[Recibe los arreglos de los bloques anteriores, como nombres y calificaciones de estudiantes en ciertas materias y la variable total de alumnos registrados, este bloque recibe directo un nombre de alumno que lo busca en los arreglos e imprime sus calificaciones por materia, promedio, cantidad de materias reprobadas y si el esta reprobado o no]

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**

[mostrarBoleta que busca el nombre del alumno e imprime su boleta y leerCadena que pide el nombre]

**¿Qué ciclo usaste y por qué ese?**

[for para recorrer el arreglo de los nombres y encontrar el alumno que se busca]

**¿Qué acumuladores o contadores usaste y con qué valor inician?**

[materiasReprobadas = 0, e indice = -1]

**¿Dónde está tu decisión múltiple y qué casos cubre?**

[Utilicé ? y : que son otras formas de usar if y else, cubre si el promedio es aprobado o reprobado]

**¿Qué constantes definiste y por qué son constantes?**

[No definí ninguna pero usé CALIFICACION_APROBATORIA y es constante porque su valor mínimo de aprobación no cambia]

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

[Si no hay alumnos registrados: "No hay alumnos registrados."
Si el nombre ingresado no coincide con el nombre de un alumno ingresado: "No se encontro al alumno."]

## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.
1.Poner contador en 0
2.Para cada alumno, si su calificacion es 7 o mas, sumar uno al contador 
3.Devolver el contador
[Inserta aquí tu respuesta]
SI total == 0 ENTONCES
    MOSTRAR "No hay alumnos registrados."
    TERMINAR FUNCION
FIN SI

MOSTRAR "Nombre a buscar: "
LEER noombreBuscado

indice = -1

PARA i = 0 HASTA total - 1
    SI nombres [i] == nombreBuscado ENTONCES
        indice = i
        SALIR DEL CICLO
    FIN SI
FIN PARA

SI indice == -1 ENTONCES
    MOSTRAR "No se encontro al alumno: ", nombreBuscado
    TERMINAR FUNCION
FIN SI

promedio = (espanol[indice] + matematicas[indice] + disenoProgramas[indice]) / 3

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

MOSTRAR "---BOLETA---"
MOSTRAR "Alumno: ", nombres[indice]
MOSTRAR "Espanol: ", espanol[indice]
MOSTRAR "Matematicas: ", matematicas[indice]
MOSTRAR "Disno de Programas: ", disenoProgramas[indice]
MOSTRAR "Promedio: ", promedio
MOSTRAR "Materias reprobadas: ", materiasReprobadas

SI promedio >= CALIFICACION_APROBATORIA Y materiasReprobadas == 0 ENTONCES
    MOSTRAR "Estado: Aprobado"
SI NO
    MOSTRAR "Estado: Reprobado"
FIN SI

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

[Inserta aquí tu respuesta]

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 2 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 3 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |