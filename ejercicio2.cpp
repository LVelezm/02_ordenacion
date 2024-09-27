#include <iostream>
using namespace std;
struct Articulo {
    int codigo;
    string descripcion;
    float precio;
    int cantidad;
    int monto;
};
void ordenArticulos(int n, Articulo t[]) {
    Articulo aux;
    for (int i = n-1; i > 0 ; i--) { 
        for (int j = 0; j < i ; j++) { 
            if (t[j].monto < t[j + 1].monto) { 
                aux = t[j];
                t[j] = t[j + 1];
                t[j + 1] = aux;
            }
        }
    }
}

int main() {
    int n;
    cout << "Escriba la cantidad de articulos: ";
    cin >> n;
    Articulo articulos[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el codigo del articulo " << i + 1 << ": ";
        cin >> articulos[i].codigo;
        cout << "Ingrese la descripcion del articulo " << i + 1 << ": ";
        cin.ignore();
        getline(cin, articulos[i].descripcion);
        cout << "Ingrese el precio del articulo " << i + 1 << ": ";
        cin >> articulos[i].precio;
        cout << "Ingrese la cantidad del articulo " << i + 1 << ": ";
        cin >> articulos[i].cantidad;
        articulos[i].monto=articulos[i].cantidad*articulos[i].precio;
    }
    ordenArticulos(n, articulos);
    cout << "\nArtículos ordenados por monto descendente:\n";
    for (int i = 0; i < n; i++) {
        cout << "Codigo: " << articulos[i].codigo
             << ", Descripcion: " << articulos[i].descripcion
             << ", Precio: " << articulos[i].precio
             << ", Cantidad: " << articulos[i].cantidad
             << ", Monto: " << articulos[i].monto << endl;
    }

    return 0;
}
