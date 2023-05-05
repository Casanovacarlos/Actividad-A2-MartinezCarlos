#include <iostream>

using namespace std;

int main()
{
    int calificacion = 0; 
    int contador = 0;
    int suma = 0; 

    do {
        cout << "\nIntroduzca calificación: ";
        cin >> calificacion;

        if (calificacion != 0) {
            if (calificacion >= 5 && calificacion <= 10) {
                
                contador++; 
                suma = suma + calificacion;
            }
            else 
                cout << "Calificación no es válida, solo valores entre 5 y 10\n";
        }
        else 
            cout << "\n\n";
    } while (calificacion != 0);

    
    cout << "\n: " << contador;
    cout << "\n: " << (suma/(float)contador);

    cout << "\n\t\t";
}
 
