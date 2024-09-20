#include <iostream>
using namespace std;
void Reduce(int A[], int inicio, int final) {
    int izq = inicio;
    int der = final;
    int pos = izq;
    int cen = 1;
    while (cen == 1) {
        cen = 0;
        while (A[pos] <= A[der] && pos != der) {
            der = der - 1;
        }
        if (pos != der) {
            int aux = A[pos];
            A[pos] = A[der];
            A[der] = aux;
            pos = der;
        }
        while (A[pos] >= A[izq] && pos != izq) {
            izq = izq + 1;
        }
        if (pos != izq) {
            int aux = A[pos];
            A[pos] = A[izq];
            A[izq] = aux;
            pos = izq;
            cen = 1;
        }
        if (pos - 1 > inicio) {
            Reduce(A, inicio, pos - 1);
        }
        if (pos + 1 < final) {
            Reduce(A, pos + 1, final);
        }
    }
}
int main(){
    int n;
    cout << "Ingrese la longitud del arreglo: ";
    cin >> n;
    int A[n];
    cout << "Ingrese los elementos del arreglo:" << endl;
    for (int i = 0; i < n; i++) {
    	cout << "Elemento A[" << i+1 << "]: ";
        cin >> A[i];
    }
    Reduce(A, 0, n - 1);
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    return 0;
}