#include <iostream>
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

int main(){
	int i, numero;
	cout<<"Cual es la cantidad del arreglo: "<<endl;
	cin>>numero;
	int Arreglo[numero];
	for(i=0; i<numero; i++){
	cout<< "Arreglo [" <<i<<"]: ";
	cin>> Arreglo[i];
	}
	cout<<"Elija como quiera ordenarlo"<<endl;
	interDirDer(Arreglo, numero);
	cout 
}

