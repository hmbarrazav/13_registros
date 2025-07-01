#include<iostream>
using namespace std;

struct correo{
    string user;
    string domain;
};

struct contactoEmail{
    string nom;
    char sex;
    int edad;
    correo email;
};

void leerCorreo(correo &, string, string);
void leerContacto(contactoEmail &, string, char, int, correo);
void imprimeContacto(contactoEmail &);

int main(){
    int n, op;
    string nom, user, domain;
    char sex, SN;
    int edad;
    correo email;
    contactoEmail cont, lista[100];
    n = 0;
    do{
        cout << "\033[2J\033[1;1H";
        cout<<"Menu de opciones ::::::::::::::::::::::"<<endl;
        cout<<"1. Agregar contacto"<<endl;
        cout<<"2. Mostrar contactos"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Elige una opcion: "; cin>>op;
        cout<<endl;
        switch(op){
            case 1:
                cin.ignore();
                cout<<"Ingrese el nombre del contacto: "; getline(cin,nom);
                cout<<"Ingrese el sexo (M/F): "; cin>>sex;
                cout<<"Ingrese la edad: "; cin>>edad;
                cout<<"Ingrese el correo electronico (usuario@dominio): "<<endl;
                cout<<"\tIngrese el usuario: "; cin>>user;
                cout<<"\tIngrese el dominio: "; cin>>domain;
                
                leerCorreo(email,user,domain);
                leerContacto(cont,nom,sex,edad,email);

                cout<<"\nHa ingresado la siguiente informacion: "<<endl;
                imprimeContacto(cont);
                cout<<"\nEsta informacion es correcta? (S/N): ";
                cin>>SN;
                if(SN == 'S'){
                    lista[n] = cont;
                    n++;
                    cout<<"Registro exitoso!"<<endl;
                }
                else{
                    cout<<"Se cancelo la operacion"<<endl;
                }
                break;
            case 2:
                for(int i = 0; i < n; i++){
                    cout<<"Contacto #"<<i<<endl;
                    imprimeContacto(lista[i]);
                    cout<<endl;
                }
                break;
            case 0:
                cout<<"Esta seguro de salir? (S/N): ";
                cin>>SN;
                if(SN != 'S'){
                    op = -1;
                    cout<<"Se cancelo la operacion"<<endl;
                }
                else
                    cout<<"Hasta la proxima!"<<endl;
                break;
            default:
            cout<<"Opcion no valida!"<<endl;
                break;
        }
        cout<<"\nPresione una tecla para continuar...";
        cin.ignore();
        cin.get();
    } while(op != 0);
    return 0;
}

void leerContacto(contactoEmail &c, string n, char s, int e, correo em){
    c.nom = n;
    c.sex = s;
    c.edad = e;
    c.email = em;
}

void leerCorreo(correo &c, string u, string d){
    c.user = u;
    c.domain = d;
}

void imprimeContacto(contactoEmail &c){
    cout<<"Nombre: "<<c.nom<<endl;
    cout<<"Sexo: "<<c.sex<<endl;
    cout<<"Edad: "<<c.edad<<endl;
    cout<<"Email: "<<c.email.user<<"@"<<c.email.domain<<endl;
}
