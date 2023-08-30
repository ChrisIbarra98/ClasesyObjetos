#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class materia{
private:
    string Nombre,Profesor,LibroTexto;
public:
        int Clave;
        materia(string N,string P, string L, int C){
        Nombre=N;
        Profesor=P;
        Clave=C;
        LibroTexto=L;
    }
    void Imprime()
    {
        cout<<"\nClave: "<<Clave<<endl;
        cout<<"Nombre: "<<Nombre<<endl;
        cout<<"Profesor: "<<Profesor<<endl;
        cout<<"Libro: "<<LibroTexto;
    }

    void CambiaClave(int C)
    {
        Clave=C;
    }

    void CambiaProfe(string P)
    {
        Profesor=P;
    }
};


int main()
{
     int opcion,aux;
     string cambio;
     materia Programacion("Programacion","Juan Esquivel","Introduccion a la Programacion",1);
     materia BasesDatos("Bases de Datos","Hector Gonzales","Bases de datos para principiantes",2);

    do
    {
        system("cls");
        cout<<"Menu\n"<<endl;
        cout<<"Seleccione la opcion de lo que desea hacer:"<<endl;
        cout<<"1) Cambiar la clave de una materia."<<endl;
        cout<<"2) Cambiar el maestro de una materia."<<endl;
        cout<<"3) Imprimir los datos de la materia."<<endl;
        cout<<"4) Salir del programa."<<endl;
        cout<<"\nOpcion:\t";
        cin>>opcion;

        switch(opcion)
        {
            case 1:
                {
                    system("cls");
                    cout<<"Ingrese la clave de la materia: ";
                    cin>>aux;
                    if(aux==Programacion.Clave)
                    {
                        cout<<"\nIngrese la nueva clave: ";
                        cin>>aux;
                        Programacion.CambiaClave(aux);
                        cout<<"\nCambio Realizado";
                        getch();
                    }else if(aux==BasesDatos.Clave)
                    {
                        cout<<"\nIngrese la nueva clave: ";
                        cin>>aux;
                        BasesDatos.CambiaClave(aux);
                        cout<<"\nCambio Realizado";
                        getch();
                    }else
                    {
                        cout<<"\n\nClave invalida";
                        getch();
                    }
                    break;
                }
            case 2:
                {
                    system("cls");
                    cout<<"Ingrese la clave de la materia: ";
                    cin>>aux;
                    if(aux==Programacion.Clave)
                    {
                        cout<<"\nIngrese el nombre del nuevo maestro: ";
                        cin.ignore();
                        getline(cin,cambio);
                        Programacion.CambiaProfe(cambio);
                        cout<<"\nCambio Realizado";
                        getch();
                    }else if(aux==BasesDatos.Clave)
                    {
                        cout<<"\nIngrese el nombre del nuevo maestro: ";
                        cin.ignore();
                        getline(cin,cambio);
                        BasesDatos.CambiaProfe(cambio);
                        cout<<"\nCambio Realizado";
                        getch();
                    }else
                    {
                        cout<<"\n\nClave invalida";
                        getch();
                    }
                    break;
                }
            case 3:
                {
                    system("cls");
                    cout<<"Ingrese la clave de la materia: ";
                    cin>>aux;
                    if(aux==Programacion.Clave)
                    {
                        Programacion.Imprime();
                        getch();
                    }else if(aux==BasesDatos.Clave)
                    {
                        BasesDatos.Imprime();
                        getch();
                    }else
                    {
                        cout<<"\n\nClave invalida";
                        getch();
                    }
                    break;
                }
            case 4:
                {
                    cout<<"\n\nFin del programa";
                    break;
                }
            default:
                {
                    cout<<"Opcion no valida";
                    getch();
                    break;
                }
        }
    }while(opcion!=4);
}
