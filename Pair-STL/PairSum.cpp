#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'largestValue' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY A as parameter.
 */

long largestValue(vector<int> A) {
    long max_value = LONG_MIN;  // Inicializamos el máximo valor con el valor mínimo posible
    
    // Recorremos todos los posibles subarreglos
    for (int i = 0; i < A.size(); i++) {
        for (int j = i + 1; j < A.size(); j++) {
            long sum_of_products = 0;
            // Para cada subarreglo, calculamos la suma de productos de todos los pares
            for (int k = i; k <= j; k++) {
                for (int l = k + 1; l <= j; l++) {
                    sum_of_products += A[k] * A[l];
                }
            }
            max_value = max(max_value, sum_of_products);  // Actualizamos el máximo valor
        }
    }
    
    return max_value;  // Retornamos el mayor valor obtenido
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string A_temp_temp;
    getline(cin, A_temp_temp);

    vector<string> A_temp = split(rtrim(A_temp_temp));

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        int A_item = stoi(A_temp[i]);
        A[i] = A_item;
    }

    long result = largestValue(A);

    cout << result << "\n";

    return 0;
}
