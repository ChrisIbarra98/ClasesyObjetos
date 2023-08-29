#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class empleado{
private:
    string Nombre,Domicilio,ReportaA;
    int ClaveEmpleado;
    float Sueldo;
public:
        empleado(string N,string D, int C){
        Nombre=N;
        Domicilio=D;
        ClaveEmpleado=C;
        Sueldo=5600;
        ReportaA="Carmen";
    }
    void Imprime()
    {
        cout<<"\nClave: "<<ClaveEmpleado<<endl;
        cout<<"Nombre: "<<Nombre<<endl;
        cout<<"Domicilio: "<<Domicilio<<endl;
        cout<<"Sueldo: "<<Sueldo;
        cout<<"\tReporta a: "<<ReportaA;

    }

    void CambiaDomic(string D)
    {
        Domicilio=D;
    }

    void CambiaReportaA(string R)
    {
        ReportaA=R;
    }

    void ActualSueldo(float P)
    {
        float res=((Sueldo/100)*P)+Sueldo;
        Sueldo=res;
    }
};


int main()
{
     int opcion,aux;
     string cambio;
     empleado JefePlanta("David Flores","Plan de San Luis 2345",1);
     empleado JefePersonal("Amanda Saavedra","Campo Duque 731",2);

    do
    {
        system("cls");
        cout<<"Menu\n"<<endl;
        cout<<"Seleccione la opcion de lo que desea hacer:"<<endl;
        cout<<"1) Cambiar domicilio de un empleado."<<endl;
        cout<<"2) Actualizar el sueldo de un empleado."<<endl;
        cout<<"3) Imprimir los datos de un empleado."<<endl;
        cout<<"4) Cambiar el nombre de la persona a quien reporta un empleado."<<endl;
        cout<<"5) Salir del programa."<<endl;
        cout<<"\nOpcion:\t";
        cin>>opcion;

        switch(opcion)
        {
            case 1:
                {
                    system("cls");
                    cout<<"Ingrese la clave del empleado: ";
                    cin>>aux;
                    if(aux==1)
                    {
                        cout<<"\nIngrese el nuevo domicilio: ";
                        cin>>cambio;
                        JefePlanta.CambiaDomic(cambio);
                        cout<<"\nCambio Realizado";
                        getch();
                    }else if(aux==2)
                    {
                        cout<<"\nIngrese el nuevo domicilio: ";
                        cin>>cambio;
                        JefePersonal.CambiaDomic(cambio);
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
                    cout<<"Ingrese la clave del empleado: ";
                    cin>>aux;
                    if(aux==1)
                    {
                        cout<<"\nIngrese el porcentaje de incremento: ";
                        cin>>aux;
                        JefePlanta.ActualSueldo(aux);
                        cout<<"\nCambio Realizado";
                        getch();
                    }else if(aux==2)
                    {
                        cout<<"\nIngrese el porcentaje de incremento: ";
                        cin>>aux;
                        JefePersonal.ActualSueldo(aux);
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
                    cout<<"Ingrese la clave del empleado: ";
                    cin>>aux;
                    if(aux==1)
                    {
                       JefePlanta.Imprime();
                        getch();
                    }else if(aux==2)
                    {
                        JefePersonal.Imprime();
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
                    system("cls");
                    cout<<"Ingrese la clave del empleado: ";
                    cin>>aux;
                    if(aux==1)
                    {
                        cout<<"\nIngrese el nombre: ";
                        cin>>cambio;
                        JefePlanta.CambiaReportaA(cambio);
                        cout<<"\nCambio Realizado";
                        getch();
                    }else if(aux==2)
                    {
                        cout<<"\nIngrese el nombre: ";
                        cin>>cambio;
                        JefePersonal.CambiaReportaA(cambio);
                        cout<<"\nCambio Realizado";
                        getch();
                    }else
                    {
                        cout<<"\n\nClave invalida";
                        getch();
                    }
                    break;
                }
            case 5:
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
    }while(opcion!=5);
}
