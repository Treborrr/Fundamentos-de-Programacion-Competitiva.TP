#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    
    multimap<int, int> m; // multimap para almacenar (elemento, indice)
    int A[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
        m.insert({A[i], i}); // inserta (elemento, indice) en el multimap
    }
    
    cin >> x; // elemento a borrar

    // imprime el contenido del multimap
    for (auto &p : m) {
        cout << p.first << " " << p.second << endl;
    }
    
    // buscar y borrar el elemento x
    if (m.find(x) != m.end()) {
        m.erase(x); // borra todas las ocurrencias de x
        cout << "borrado " << x << endl;
    } else {
        cout << "no encontrado" << endl;
    }

    // imprime el contenido restante
    for (auto &p : m) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
