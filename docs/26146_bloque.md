# Documentación del bloque

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/<matrícula>/bloque.md (por ejemplo, docs/123456/bloque.md)
y llena tu copia.
-->

## 1. Autor

**Nombre:** Oliver Fernando López Pineda
**Matrícula:** 26146
**Bloque y opción elegida:** Estadísticas por materia
**Archivo de código:** estadisticas_materia.h

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?

calcula y muestra un resumen estadístico del rendimiento del grupo por materia. Le sirve al profesor o usuario para conocer rápidamente el promedio general de calificaciones en Español, Matemáticas y Diseño de Programas, así como identificar las calificaciones mas altas y bajas.

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

Entradas (Parámetros): Recibe los arreglos constantes con los nombres de los alumnos, las calificaciones de las tres materias (espanol, matematicas, disenoProgramas) y la variable entera total que indica cuántos alumnos han sido registrados. No requiere capturar datos por teclado en este punto.
Salidas: Imprime en la consola un reporte con los promedios de cada materia y las calificaciones máximas o mínimas registradas, o bien, un mensaje de advertencia si la lista de alumnos está vacía.

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**

Validación inicial: Comprueba si la variable total es igual a 0. En caso de que no existan registros, imprime un mensaje de aviso ("No hay alumnos registrados.") y detiene la ejecución mediante un return para prevenir operaciones inválidas.
Inicialización de variables: Prepara acumuladores de tipo double (sumaEspanol, sumaMatematicas, sumaDiseno) inicializados en 0.0, y define variables de control para las calificaciones máximas y mínimas tomando inicialmente el primer elemento del arreglo ([0]) como punto de referencia.
Recorrido iterativo: Utiliza un ciclo for para examinar de forma paralela los arreglos de cada materia alumno por alumno. Dentro de este ciclo se realizan dos acciones simultáneamente:
Se acumulan los valores de las notas para calcular posteriormente el promedio general.
Se realizan estructuras condicionales (if) para evaluar si la nota actual supera al valor máximo registrado o si es inferior al mínimo, actualizándolos al vuelo.
Cálculo y salida de datos: Finalmente, calcula los promedios dividiendo la suma total de cada materia entre el número de alumnos y muestra en la consola el reporte co

**¿Qué ciclo usaste y por qué ese?**

[Inserta aquí tu respuesta]
Usé un ciclo for porque sabemos exactamente cuántas iteraciones se deben realizar (desde i = 0 hasta i < total), lo que permite recorrer de forma exacta los arreglos de los alumnos registrados.
**¿Qué acumuladores o contadores usaste y con qué valor inician?**

[Inserta aquí tu respuesta]
Usé acumuladores de tipo double para las sumas de cada materia (sumaEspanol, sumaMatematicas, sumaDiseno), los cuales inician en 0.0. También utilicé variables auxiliares para los valores mayores y menores (mayorEspanol, menorEspanol, etc.) que inician tomando el valor del primer elemento del arreglo correspondiente ([0]) para tener una base contra la cual comparar.

**¿Dónde está tu decisión múltiple y qué casos cubre?**

[Inserta aquí tu respuesta]
Se implementaron estructuras condicionales if dentro del ciclo para evaluar de forma independiente cada materia y verificar si la calificación actual del alumno supera al valor máximo registrado hasta el momento o si es menor que el mínimo, actualizándolos de manera dinámica.

**¿Qué constantes definiste y por qué son constantes?**

[Inserta aquí tu respuesta]
En esta función en específico se reciben arreglos constantes (const std::string, const double) para proteger los datos originales de los alumnos y evitar que sean modificados por error durante el cálculo de las estadísticas.

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

[Inserta aquí tu respuesta]
Maneja el caso de que no existan alumnos dados de alta (total == 0), evitando errores de división entre cero o accesos inválidos a memoria. Muestra el mensaje: "No hay alumnos registrados.\n".

## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.
1.Poner contador en 0
2.Para cada alumno, si su calificacion es 7 o mas, sumar uno al contador 
3.Devolver el contador
[Inserta aquí tu respuesta]
```

SI total = 0 ENTONCES
MOSTRAR "No hay alumnos registrados."
DETENER la función
FIN SI
sumaEspanol ← 0.0
sumaMatematicas ← 0.0
sumaDiseno ← 0.0
mayorEspanol ← espanol[0]
menorEspanol ← espanol[0]
mayorMatematicas ← matematicas[0]
menorMatematicas ← matematicas[0]
mayorDiseno ← disenoProgramas[0]
menorDiseno ← disenoProgramas[0]
DESDE i ← 0 HASTA total - 1 HACER
sumaEspanol ← sumaEspanol + espanol[i]
sumaMatematicas ← sumaMatematicas + matematicas[i]
sumaDiseno ← sumaDiseno + disenoProgramas[i]
SI espanol[i] > mayorEspanol ENTONCES mayorEspanol ← espanol[i] FIN SI
SI espanol[i] < menorEspanol ENTONCES menorEspanol ← espanol[i] FIN SI
SI matematicas[i] > mayorMatematicas ENTONCES mayorMatematicas ← matematicas[i] FIN SI
SI matematicas[i] < menorMatematicas ENTONCES menorMatematicas ← matematicas[i] FIN SI
SI disenoProgramas[i] > mayorDiseno ENTONCES mayorDiseno ← disenoProgramas[i] FIN SI
SI disenoProgramas[i] < menorDiseno ENTONCES menorDiseno ← disenoProgramas[i] FIN SI
FIN DESDE
MOSTRAR "--- ESTADISTICAS POR MATERIA ---"
MOSTRAR "Espanol: ", (sumaEspanol / total)
MOSTRAR "Matematicas: ", (sumaMatematicas / total)
MOSTRAR "Diseno de Programas: ", (sumaDiseno / total)
MOSTRAR "Mas alta: Diseno de Programas (", mayorDiseno, ")"
MOSTRAR "Mas baja: Matematicas (", menorMatematicas, ")"

FIN




**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**
si, corregí algunos errores de lógica y diseño

[Inserta aquí tu respuesta]

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | [dudas se sintaxis] | [tome ayuda de la ia] |
| 2 | [organización de equipo] | [comumicación] |
| 3 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
