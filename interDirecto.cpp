#include <iostream>
#include <windows.h>
using namespace std;
void interDirDer(int A[], int n){
	int i, j;
	int aux;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if (A[j]<A[j+1]){
				aux = A[j];
				A[j] = A[j+1];
				A[j+1] = aux;
			}
			
		}
		
	}
}

int main(){
	int i, numero, opcion;
	bool menu=true;
	SetConsoleOutputCP(CP_UTF8);
	cout<<"Cual es la cantidad del arreglo (0-100):  "<<endl;
	cin>>numero;
	int Arreglo[100];
	for(i=0; i<numero; i++){
		cout<< "Arreglo [" <<i+1<<"]: ";
		cin>> Arreglo[i];
	}
	do{
		cout<<"1. Odenar de derecha a izquierda"<<endl;
		cout<<"2. Odenar de izquierda a derecha"<<endl;
		cout<<"3. Odenar con señal"<<endl;
		cout<<"4. Odenar de manera bidireccional"<<endl;
		cout<<"5. salir"<<endl;
		cout<<"Elige una opcion (1-5): ";
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
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				cout<<"saliendo...."<<endl;
				menu= false;
				break;
			default:
				cout<<"opcion invalida"<<endl;
		}
	}while(menu);
	return 0;
}


