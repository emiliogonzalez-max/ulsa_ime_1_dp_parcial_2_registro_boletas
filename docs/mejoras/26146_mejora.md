# Propuesta de mejora

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/mejoras/<matrícula>/mejora.md (por ejemplo, docs/mejoras/123456/mejora.md)
y llena tu copia.

La propuesta es solo diseño: no se programa.
Puede tocar cualquier parte de la solución del equipo y se resuelve con los temas del parcial.
Dentro de un equipo no puede haber dos propuestas iguales.
-->

Propuesta de mejora elaborada por: Oliver Fernando López Pineda

**Matrícula:** 26146
**Título de la propuesta:** abreviaciones

## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?
Es una mejora, en lugar de escribir todo el nombre completo del alumno, usar métodos de cadenas para usar solo las primeras tres iniciales del nombre y del apellido o incluso un numero de lista por orden alfabético e introducir unicamente este dato.
[Inserta aquí tu respuesta]

## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.
Modificar la función de búsqueda empleando la función .find() de la librería string en lugar de una comparación estricta (==).
[Inserta aquí tu respuesta]

## 3. Receta

Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con `[NUEVO]` y cada paso que cambia con `[CAMBIA]`. Los pasos sin marca son los que ya existen.

```
[Inserta aquí tu respuesta]
```
[NUEVO] MOSTRAR "--- RESUMEN DE ALUMNOS (INICIALES) ---"
 [NUEVO] DESDE i ← 0 HASTA total - 1 HACER
      [NUEVO] iniciales ← subcadena de nombres[i] desde la posición 0 con longitud 3
      [NUEVO] MOSTRAR "Alumno [", iniciales, "] -> Espanol: ", espanol[i], " | Matematicas: ", matematicas[i], " | Diseno: ", disenoProgramas[i]
   FIN
