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

