## 1. Autor

**Nombre:** [Roberto Emiliano Velazquez Ibarra ]
**Matrícula:** [26166]
**Bloque y opción elegida:** [Capturar alumnos ]
**Archivo de código:** [captura_alumnos.h]

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?

[Mi bloque captura a un alumno nuevo: pide su nombre y sus calificaciones de Español, Matemáticas y Diseño de Programas, y lo guarda en los arreglos paralelos del grupo. Le sirve a quien usa el programa para dar de alta alumnos sin tocar el código, porque revisa que el nombre no esté vacío y que las calificaciones estén entre 0 y 10 antes de guardarlas.]

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

[Recibe los arreglos de nombres y de calificaciones (español, matemáticas y diseño de programas) y el total de alumnos registrados. Del teclado lee el nombre y las tres calificaciones.Imprime mensajes de error cuando algún dato es inválido, "Alumno N registrado." cuando todo sale bien, o aviso de lista llena. Devuelve el nuevo total de alumnos (o el mismo total si la lista estaba llena).]

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**

[Tiene dos. `capturaNombreMateria(materia)` regresa el nombre de la materia según su número, para usarlo en el mensaje al pedir la calificación. `capturarAlumno(...)` pide el nombre y las tres calificaciones, las valida, guarda al alumno en los arreglos y regresa el nuevo total.]

**¿Qué ciclo usaste y por qué ese?**

[Usé un `for` para pedir las calificaciones, porque siempre son 3 materias y ya se sabe cuántas vueltas hay. Usé `while` para validar el nombre y cada calificación, porque no se sabe cuántas veces se va a equivocar el usuario: se repite hasta que el dato sea válido.]

**¿Qué acumuladores o contadores usaste y con qué valor inician?**

[Solo el contador `i` del `for`, que inicia en 0 y recorre las materias. No necesité acumuladores. El total de alumnos llega como parámetro y se actualiza con lo que devuelve `agregarAlumno`.]

**¿Dónde está tu decisión múltiple y qué casos cubre?**

[Está en `capturaNombreMateria`, con un `switch`: el caso 0 regresa "Espanol", el caso 1 "Matematicas" y el `default` "Diseno de Programas". Usé `switch` porque se decide según un solo número con pocos valores fijos.]

**¿Qué constantes definiste y por qué son constantes?**

[Definí `CAPTURA_NUM_MATERIAS = 3`, que marca cuántas calificaciones se capturan y el tamaño del arreglo `cal`. Es constante porque el número de materias no cambia mientras corre el programa, y así si cambia solo se modifica en un lugar. También uso `MAX_ALUMNOS`, que viene de `registro.h`, para saber cuándo la lista está llena.]

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

[- Lista llena: "La lista esta llena (MAX_ALUMNOS alumnos)." y no registra al alumno.
- Nombre vacío: "El nombre no puede quedar vacio." y lo vuelve a pedir.
- Calificación fuera de rango: "Calificacion invalida. Debe estar entre 0 y 10." y la vuelve a pedir.]

## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.

[1. Si total >= MAX_ALUMNOS: avisar que la lista está llena y devolver total
2. Pedir el nombre
3. Mientras el nombre esté vacío: avisar y volver a pedirlo
4. Para cada materia (0 hasta CAPTURA_NUM_MATERIAS - 1):
   4.1 Obtener el nombre de la materia
   4.2 Pedir la calificación
   4.3 Mientras la calificación no sea válida (entre 0 y 10): avisar y volver a pedirla
5. Agregar al alumno a los arreglos con su nombre y sus 3 calificaciones
6. Mostrar "Alumno N registrado."
7. Devolver el nuevo total]
```

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

[Sí. Probé con un alumno llamado Ana con calificaciones 8, 9.5 y 7, y la receta lo registró bien. Luego probé con un nombre vacío y con una calificación de 11, y en los dos casos volvió a pedir el dato. Corregí que la revisión de lista llena estuviera al inicio, antes de pedir cualquier dato, para no hacer capturar a alguien que no se va a poder guardar.]

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | No sabía si validar el nombre vacío aquí o en `leerCadena` | Lo dejé aquí también para que el bloque se valide solo |
| 2 | Cuántas veces pedir una calificación inválida | Usé `while` para repetir hasta que sea válida |
| 3 | Cómo regresar el nombre de cada materia | Usé un `switch` en `capturaNombreMateria` |
