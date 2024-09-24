# Pair-Sum

Dada una matriz, definimos su valor como el valor obtenido siguiendo estas instrucciones:

- Escribe todos los pares de números de esta matriz.
- Calcula el producto de cada par.
- Encuentra la suma de todos los productos.

Por ejemplo, para una matriz determinada, para una matriz determinada [7, 2, -1, 2], el resultado sería el siguiente:

| Pares           | (7, 2), (7, -1), (7, 2), (2, -1), (2, 2), (-1, 2) |
|-----------------|---------------------------------------------------|
| Productos       | 14, -7, 14, -2, 4, -2                             |
| Suma de productos | 14 + (-7) + 14 + (-2) + 4 + (-2) = **21**          |

Tenga en cuenta que (7, 2) aparece dos veces, una por cada aparición de 2.

Dada una matriz de números enteros, encuentre el valor más grande de cualquiera de sus subarreglos no vacíos.

**Nota:** una submatriz es una subsecuencia contigua de la matriz.

Completa la función `largestValue` que toma una matriz y devuelve un número entero que indica el valor más grande de cualquiera de los subarreglos no vacíos de la matriz.

## Formato de entrada

La primera línea contiene un único número entero, `n`, que denota el número de números enteros en la matriz `A`.

La segunda línea contiene `n` enteros separados por espacios `A_i` que denota los elementos de la matriz `A`.

## Restricciones

- \( 3 \leq n \leq 5 \cdot 10^5 \)
- \( -10^3 \leq A_i \leq 10^3 \)

### Subtareas

- \( n \leq 5000 \) por el 20% de los puntos.
- \( n \leq 2 \cdot 10^5 \) por el 70% de los puntos.

## Formato de salida

Imprima una sola línea que contenga un único número entero que indique el valor más grande de cualquiera de los subarreglos no vacíos de la matriz.

### Entrada de muestra 0

```
6  
-3 7 -2 3 5 -2
```

### Salida de muestra 0

```
41
```

### Explicación 0

En este caso, tenemos \( A = [-3, 7, -2, 3, 5, -2] \). El subconjunto de mayor valor resulta ser [7, -2, 3, 5] con valor:

\[
(7 \cdot -2) + (7 \cdot 3) + (7 \cdot 5) + (-2 \cdot 3) + (-2 \cdot 5) + (3 \cdot 5) = 41
\]

### Entrada de muestra 1

```
10  
5 7 -5 6 3 9 -8 2 -1 10
```

### Resultado de muestra 1

```
200
```
