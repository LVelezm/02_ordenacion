#include <iostream>
using namespace std;
void ShellSort(int A[], int n) {
    int k = n + 1;
    while (k > 1) {
        k = k / 2;
        int cen = 1;
        while (cen == 1) {
            cen = 0;
            int i = 0; 
            while (i + k < n) {
                if (A[i + k] < A[i]) {
                    int aux = A[i];
                    A[i] = A[i + k];
                    A[i + k] = aux;
                    cen = 1;
                }
                i = i + 1;
            }
        }
    }
}
int main() {
    int n;
    cout << "Ingrese la longitud del arreglo: ";
    cin >> n;
    int A[n];
    cout << "Ingrese los elementos del arreglo:" << endl;
    for (int i = 0; i < n; i++) {
    	cout << "Elemento A[" << i+1 << "]: ";
        cin >> A[i];
    }
    ShellSort(A, n);
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    return 0;
}
