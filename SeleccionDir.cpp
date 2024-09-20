#include <iostream>
#include <windows.h>
using namespace std;
void SeleccionDir(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int menor = A[i];
        int k = i;

        for (int j = i + 1; j < n; j++) {
            if (menor > A[j]) {
                menor = A[j];
                k = j;
            }
        }

        A[k] = A[i];
        A[i] = menor;
    }
}
int main(){
	int i, numero, opcion;
	SetConsoleOutputCP(65001);
	bool menu=true;
	cout<<"Cual es la cantidad del arreglo (0-100):  "<<endl;
	cin>>numero;
	int Arreglo[100];
	for(i=0; i<numero; i++){
		cout<< "Arreglo [" <<i+1<<"]: ";
		cin>> Arreglo[i];
	}
	SeleccionDir(Arreglo, numero);
	cout << "Arreglo ordenado: " << endl;
	for(i = 0; i < numero; i++){
		cout << Arreglo[i] << " ";
	}
	cout<<endl;
	return 0;
}

