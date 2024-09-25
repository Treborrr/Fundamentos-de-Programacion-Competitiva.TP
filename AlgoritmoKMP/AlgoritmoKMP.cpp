#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>    // Para INT_MAX
#include <numeric>    // Para accumulate

using namespace std;

// Función para calcular el arreglo KMP (lps)
vector<int> computeKMPArray(const string &s) {
    int n = s.length();
    vector<int> lps(n, 0);
    int len = 0;
    int i = 1;

    while (i < n) {
        if (s[i] == s[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

// Función principal para resolver el problema
string constructString(vector<int> &freq) {
    string result;
    
    // Crear la cadena S con las frecuencias dadas
    for (int i = 0; i < 26; i++) {
        result += string(freq[i], 'a' + i);
    }

    // Probar todas las permutaciones posibles que sean lexicográficamente válidas
    sort(result.begin(), result.end());

    string best_result = result;
    int min_kmp_sum = INT_MAX;

    do {
        vector<int> kmp = computeKMPArray(result);
        int current_kmp_sum = accumulate(kmp.begin(), kmp.end(), 0);

        // Comparar para minimizar la suma de la tabla kmp[] o si son iguales, elegir la más pequeña lexicográficamente
        if (current_kmp_sum < min_kmp_sum || (current_kmp_sum == min_kmp_sum && result < best_result)) {
            min_kmp_sum = current_kmp_sum;
            best_result = result;
        }
    } while (next_permutation(result.begin(), result.end()));

    return best_result;
}