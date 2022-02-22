#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    int opcion;
    string hora, nombre, tratamiento, descripcion;
    int preciot, cantidad, preciou, total, suma, menu=0;

    do
    {

        cout << "***SIMULADOR DE CITA***" << endl;

        cout << "Puchale 1 para agendar cita" << endl;

        cout << "Puchale 2 para modificar cita" << endl;

        cout << "Puchale 3 para eliminar cita" << endl;

        cout << "Puchale 4 para lista de citas vigentes" << endl;

        cout << "Puchale 5 para limpiar pantalla" << endl;

        cout << "Puchale 6 para salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ingrese nombre del paciente" << endl;
            cin >> nombre;
            cout << "Ingrese hora del tratamiento" << endl;
            cin >> hora;
            cout << "Ingrese nombre del tratamiento" << endl;
            cin >> tratamiento;
            cout << "Ingrese la descripcion" << endl;
            cin >> descripcion;
            cout << "Ingrese precio unitario tratamiento" << endl;
            cin >> preciot;
            cout << "Ingrese cantidad del tratamiento" << endl;
            cin >> cantidad;
            cout << "Ingrese precio unitario" << endl;
            cin >> preciou;

            suma = preciot + preciou;
            cout << suma << endl;


            cout << "Desea agendar otra cita puchale 0 si es el caso" << endl;
            cin >> menu;
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            menu = 10;
            break;
        default:
            cout << "Ingrese una opcion valida" << endl;

        }
    } while (menu == 0);

}