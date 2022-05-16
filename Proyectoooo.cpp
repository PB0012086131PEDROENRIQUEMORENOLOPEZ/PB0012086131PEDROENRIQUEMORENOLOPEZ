#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <vector>
using namespace std;

void alta();
void lista();
void impresion();
void modificar();
void eliminar();
string hora[100], nombre[100], tratamiento[100], descripcion[100];
int ponme = -1;
float cantidad[100], preciou[100], total[100], iva[100], subt[100];

int main()
{
    int opcion;
    cout << "***SIMULADOR DE CITAS***" << endl;

    cout << "Presione 1 para tener una cita" << endl;

    cout << "Presione 2 para modificar cita" << endl;

    cout << "Presione 3 para eliminar la cita" << endl;

    cout << "Presione 4 para lista de citas vigentes" << endl;

    cout << "Presione 5 para borrar todo lo que escribiste" << endl;

    cout << "Presione 6 para salir" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        alta();
        return main();
        break;

    case 2:
        modificar();
        return main();
        break;

    case 3:
        eliminar();
        return main();
        break;

    case 4:
        lista();
        return main();
        break;

    case 5:
        system("cls");
        return main();
        break;

    case 6:
        impresion();
        break;

    }
}
void alta()
{
    int opcion = 1;
    do
    {
        system("CLS");
        ponme = ponme + 1;
        cin.ignore();
        cout << "Ingrese nombre" << endl;
        getline(cin, nombre[ponme]);;
        cout << "Ingrese hora" << endl;
        cin >> hora[ponme];
        cin.ignore();
        cout << "Ingrese tratamiento" << endl;
        getline(cin, tratamiento[ponme]);;
        cin.ignore();
        cout << "Ingrese descripcion" << endl;
        getline(cin, descripcion[ponme]);;
        cout << "Ingrese el precio del tratamiento" << endl;
        cin >> preciou[ponme];
        cout << "Ingrese la cantidad del tratamiento" << endl;
        cin >> cantidad[ponme];
        subt[ponme] = preciou[ponme] * cantidad[ponme];
        cout << "El subtotal es de:" << subt[ponme] << endl;
        iva[ponme] = subt[ponme] * .16;
        cout << "Con un iva de:" << iva[ponme] << endl;
        total[ponme] = iva[ponme] + subt[ponme];
        cout << "El total es de:" << total[ponme] << endl;
        cout << "Quiere agendar otra cita? presione 0 si ese es el caso, si no presione otro numero" << endl;
        cin >> opcion;
    } while (opcion == 0);
}
void lista()
{
    system("CLS");
    for (int i = 0; i <= ponme; i++)
    {
        if (nombre[i].length() > 0)
        {
            cout << "cita" << 1 + i << endl;
            cout << "Nombre del paciente:" << nombre[0 + i] << endl;
            cout << "Hora del tratamiento:" << hora[0 + i] << endl;
            cout << "Nombre de tratamiento:" << tratamiento[0 + i] << endl;
            cout << "Descripcion de tratamiento:" << descripcion[0 + i] << endl;
            cout << "Precio unitario:" << preciou[0 + i] << endl;
            cout << "Cantidad del tratamiento:" << cantidad[0 + i] << endl;
            cout << "Con total de:" << total[0 + i] << endl;
        }
    }
}
void impresion()
{
    ofstream archivo;
    int text, i{};
    string text2;

    archivo.open("citas.txt", ios::out);

    if (archivo.fail())
    {
        cout << "Error exploto el archivo"; exit(1);
    }
    for (int i = 0; i < ponme; i++);
    {
        if (nombre[i].length() > 0)
        {
            archivo << "" << endl;
            archivo << "cita" << i + 1 << endl;
            archivo << "" << endl;
            text2 = nombre[i];
            archivo << "Nombre:" << text2 << endl;
            text2 = hora[i];
            archivo << "Hora:" << text2 << endl;
            text2 = tratamiento[i];
            archivo << "Tratamiento:" << text2 << endl;
            text2 = descripcion[i];
            archivo << "Descripcion:" << text2 << endl;
            text = preciou[i];
            archivo << "Preciou:" << text << endl;
            text = cantidad[i];
            archivo << "Cantidad del tratamiento:" << text << endl;
            text = total[i];
            archivo << "Total" << text << endl;
        }
    }
    archivo.close();
}
void modificar()
{
    int l, opcion;
    cout << "Ingresa el numero de cita que deseas modificar";
    cin >> l;
    l = l - 1;
    cout << "Ingresa que quieres modificar" << endl << "1.-Nombre" << endl << "2.-Hora" << endl << "3.-Tratamiento" << endl << "4.-Descripcion" << endl;
    cout << "5.-Precio unitario del tratamiento" << endl << "6.-Cantidad del tratamiento" << endl;
    cin >> opcion;

    switch (opcion)
    {
        case 1:
            for (int i = l; i == l; i++)
            {
                cin.ignore();
                cout << "Ingrese el nombre" << endl;
                getline(cin, nombre[i]);
            }
            break;

        case 2:
            for (int i = l; i == l; i++)
            {
                cout << "Ingrese la hora" << endl;
                cin >> hora[i];
            }
            break;
        
        case 3:
            for (int i = l; i == l; i++)
            {
                cin.ignore();
                cout << "Ingrese el tratamiento" << endl;
                getline(cin,tratamiento[i]);
            }
            break;

        case 4:
            for (int i = l; i == l; i++)
            {
                cin.ignore();
                cout << "Ingrese la descripcion" << endl;
                getline(cin, descripcion[i]);
            }
            break;

        case 5:
            for (int i = l; i == l; i++)
            {
                cout << "Ingrese el precio unitario del tratamiento" << endl;
                cin>> preciou[i];
            }
            break;

        case 6:
            for (int i = l; i == l; i++)
            {
                cout << "Ingrese la cantidad del trtamiento" << endl;
                cin >> cantidad[i];
            }
    }
}
void eliminar()
{
    int j;
    cout << "Ingresa la cita a eliminar";
    cin >> j;
    j = j - 1;
    nombre[j] = ("");
}