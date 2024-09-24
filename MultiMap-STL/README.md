# MultiMap STL

Se le proporciona una matriz `A` de tamaño `N`. Debe insertar los elementos de `A` en un **mapa múltiple** (elemento como clave e índice como valor) y mostrar los resultados. Además, debe borrar un elemento `x` determinado del mapa múltiple e imprimir `"borrado x"` si se borró correctamente; de lo contrario, imprima `"no encontrado"`.

## Ejemplo 1:

### Entrada:
```
n = 10  
A[] = 9 8 7 4 4 2 1 1 9 8  
x = 1
```

### Salida:
```
1 6  
1 7  
2 5  
4 3  
4 4  
7 2  
8 1  
8 9  
9 0  
9 8  
borrado 1  
2 5  
4 3  
4 4  
7 2  
8 1  
8 9  
9 0  
9 8
```

## Tu tarea:
Dado que se trata de un problema de función, no es necesario realizar ninguna entrada. Simplemente completa las funciones proporcionadas. En una nueva línea, imprime el resultado requerido.

### Restricciones:
- \(1 \leq n \leq 1000\)
- \(1 \leq A_i \leq 10^6\)
```
LINK: https://www.geeksforgeeks.org/problems/multimap-operations/1
