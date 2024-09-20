#include <iostream>
#include <windows.h>
using namespace std;
void interDirDer(int A[], int n){
	int i, j;
	int aux;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if (A[j]>A[j+1]){
				aux = A[j];
				A[j] = A[j+1];
				A[j+1] = aux;
			}
			
		}
		
	}
}
void interDirIzq(int A[], int n){
	int i, j;
	int aux;
	for(i=1; i<n; i++){
		for(j=n; j<i; j--){
			if (A[j]<A[j-1]){
				aux = A[j-1];
				A[j] = A[j];
				A[j] = aux;
			}
			
		}
		
	}
}
void interDirCen(int A[], int n){
	int i = 0, j;
    int cen = 1;
    int aux;
    do{
        cen = 0;
        for(j = 0; j < n - i - 1; j++) {
            if(A[j] > A[j + 1]) {
                aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
                cen = 1;
            }
        }
        i++;
    } while(i < n - 1 && cen == 1);
}
void interDirBi(int A[],int n) {
	int izq=1;
	int der=n-1;
	int k=n-1;
	int aux;
	while (izq<=der) {
		for (int i=der;i>=izq;i--) {
			if (A[i-1]>A[i]) {
				aux=A[i-1];
				A[i-1]=A[i];
				A[i]=aux;
				k=i;
			}
		}
		izq=k+1;
		for (int i=izq;i<=der;i++) {
			if (A[i-1]>A[i]) {
				aux=A[i-1];
				A[i-1]=A[i];
				A[i]=aux;
				k=i;
			}
		}
		der=k-1;
	}
}

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
	do{
		cout<<"1. Ordenar de derecha a izquierda"<<endl;
		cout<<"2. Ordenar de izquierda a derecha"<<endl;
		cout<<"3. Ordenar con señal"<<endl;
		cout<<"4. Ordenar de manera bidireccional"<<endl;
		cout<<"5. Ordenar por insercion directa"<<endl;
		cout<<"6. Ordenar por selección directa"<<endl;
		cout<<"7. Salir"<<endl;
		cout<<"Elige una opcion (1-7): ";
		cin>>opcion;
		switch(opcion){
			case 1:
				interDirDer(Arreglo, numero);
					cout << "Arreglo ordenado: " << endl;
					for(i = 0; i < numero; i++){
					cout << Arreglo[i] << " ";
					}
					cout<<endl;
				break;
			case 2:
				interDirIzq(Arreglo, numero);
					cout << "Arreglo ordenado: " << endl;
					for(i = 0; i < numero; i++){
						cout << Arreglo[i] << " ";
					}
					cout<<endl;
				break;
			case 3:
				interDirCen(Arreglo, numero);
					cout << "Arreglo ordenado: " << endl;
					for(i = 0; i < numero; i++){
						cout << Arreglo[i] << " ";
					}
					cout<<endl;
				break;
			case 4:
				interDirBi(Arreglo, numero);
					cout << "Arreglo ordenado: " << endl;
					for(i = 0; i < numero; i++){
						cout << Arreglo[i] << " ";
					}
					cout<<endl;
				break;
			case 5:
				InsercionDir(Arreglo, numero);
					cout << "Arreglo ordenado: " << endl;
					for(i = 0; i < numero; i++){
					cout << Arreglo[i] << " ";
					}
					cout<<endl;
				break;
			case 6:
				SeleccionDir(Arreglo, numero);
				cout << "Arreglo ordenado: " << endl;
					for(i = 0; i < numero; i++){
						cout << Arreglo[i] << " ";
					}
					cout<<endl;
				break;
			case 7:
				cout<<endl;
				cout<<"saliendo...."<<endl;
				menu= false;
				break;
			default:
				cout<<"opcion invalida"<<endl;
		}
	}while(menu);
	return 0;
}


