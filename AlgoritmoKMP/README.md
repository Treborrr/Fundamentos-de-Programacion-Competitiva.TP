
# Problema KMP - HackerRank

## Descripción

Este desafío utiliza el famoso algoritmo de KMP. Aunque no es necesario entender completamente cómo funciona, es importante comprender lo que calcula. El algoritmo toma una cadena `S` de longitud `N` como entrada y calcula la longitud de la mayor frontera válida de cada prefijo de `S` en complejidad lineal.

Dado un conjunto de frecuencias de letras, debes construir una cadena que cumpla las siguientes condiciones:

1. La frecuencia de cada letra en la cadena debe coincidir con las frecuencias proporcionadas.
2. Para cada prefijo de la cadena, la suma de los valores `kmp[i]` para todos los prefijos debe ser mínima.

Si hay múltiples cadenas que cumplen con estas condiciones, debes elegir la más pequeña lexicográficamente.

## Formato de entrada

Una sola línea que contiene 26 enteros separados por espacios, que representan las frecuencias de las letras de la 'a' a la 'z'.

### Restricciones
- La suma de todas las frecuencias será un entero positivo menor o igual a \(10^6\).

## Formato de salida

Imprime una cadena que cumpla con las condiciones mencionadas.

## Ejemplo de entrada

```plaintext
2 2 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
```

## Ejemplo de salida

```plaintext
aabb
```

## Explicación

La cadena de salida debe tener dos 'a' y dos 'b'. Hay varias cadenas posibles, pero debemos asegurar que la suma de `kmp[i]` sea mínima. Entre todas las cadenas que cumplen ambas condiciones, "aabb" es la más pequeña lexicográficamente.

## Implementación del Algoritmo KMP

```cpp
kmp[1] = 0;
for (i = 2; i <= N; i = i + 1) {
    l = kmp[i - 1];
    while (l > 0 && S[l + 1] != S[i]) {
        l = kmp[l];
    }
    if (S[l + 1] == S[i]) {
        kmp[i] = l + 1;
    } else {
        kmp[i] = 0;
    }
}
```
