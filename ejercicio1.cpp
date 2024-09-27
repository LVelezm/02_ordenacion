#include <iostream>
using namespace std;
struct monomio{
	float coef;
	float exp;
};
void ordenPol(int n, monomio t[]){
	monomio aux;
	for(int i=0; i<n-1 ;i++){
		for(int j = n - 1; j > i; j--){
			if(t[j].exp>t[j-1].exp){
				aux=t[j];
				t[j]=t[j-1];
				t[j-1]=aux;
			}
		}	
	}
}
int main(){
	int n;
	cout<<"Escriba la cantidad de terminos: ";
	cin>>n;
	monomio ter[n];
	for(int i=0; i<n; i++){
		cout<<"Escriba el coeficiente "<< i+1 << ": "; 
		cin>> ter[i].coef;
		cout<<"Escriba el exponente "<< i+1 << ": ";
		cin>>ter[i].exp;
	}
	ordenPol(n, ter);
	for(int i=0; i<n; i++){
		cout<<"El coeficiente "<< i+1 <<" es: "<<ter[i].coef<<endl;
		cout<<"El exponente "<< i+1 << " es: "<<ter[i].exp<<endl;
	}
	return 0;
}