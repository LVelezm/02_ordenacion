#include <iostream>
using namespace std;

struct Fecha {
    int dia;
    int mes;
    int anio;
};

struct Personal {
    string dni;
    string nombres;
    Fecha fechaNacimiento;
};

bool compararFechas(Fecha f1, Fecha f2) {
    if (f1.anio != f2.anio) {
        return f1.anio < f2.anio;
    }
    if (f1.mes != f2.mes) {
        return f1.mes < f2.mes;
    }
    return f1.dia < f2.dia;
}

void ordenarPersonal(int n, Personal p[]) {
    Personal clave;
    for (int i = 1; i < n; i++) {
        clave = p[i];
        int j = i - 1;
        while (j >= 0 && compararFechas(clave.fechaNacimiento, p[j].fechaNacimiento)) {
            p[j + 1] = p[j];
            j--;
        }
        p[j + 1] = clave;
    }
}

int main() {
    int n;
    cout << "Escriba la cantidad de personal: ";
    cin >> n;

    Personal personal[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el DNI del personal " << i + 1 << ": ";
        cin >> personal[i].dni;
        cout << "Ingrese los nombres del personal " << i + 1 << ": ";
        cin.ignore();
        getline(cin, personal[i].nombres);
        cout << "Ingrese la fecha de nacimiento del personal " << i + 1 << " (dia mes anio): ";
        cin >> personal[i].fechaNacimiento.dia >> personal[i].fechaNacimiento.mes >> personal[i].fechaNacimiento.anio;
    }

    ordenarPersonal(n, personal);

    cout << "\nPersonal ordenado por fecha de nacimiento:\n";
    for (int i = 0; i < n; i++) {
        cout << "DNI: " << personal[i].dni
             << ", Nombres: " << personal[i].nombres
             << ", Fecha de Nacimiento: " << personal[i].fechaNacimiento.dia << "/"
             << personal[i].fechaNacimiento.mes << "/"
             << personal[i].fechaNacimiento.anio << endl;
    }

    return 0;
}
