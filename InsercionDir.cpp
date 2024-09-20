#include <iostream>
#include <windows.h>
using namespace std;
void InsercionDir(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int aux = A[i];
        int k = i - 1;
        while (k >= 0 && aux < A[k]) {
            A[k + 1] = A[k];
            k = k - 1;
        }
        A[k + 1] = aux;
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
	InsercionDir(Arreglo, numero);
	cout << "Arreglo ordenado: " << endl;
	for(i = 0; i < numero; i++){
		cout << Arreglo[i] << " ";
	}
	cout<<endl;
	return 0;
}