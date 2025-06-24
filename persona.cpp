#include <iostream>
using namespace std;

struct persona{
    string nom;
    int fn[3];
};

int main(){
    int n, mes;
    persona lista[100];
    cout<<"Ingresa la cantidad de personas: "; cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Persona #"<<i+1<<": "<<endl;
        cout<<"Ingresa los nombres: ";
        cin.ignore();
        getline(cin, lista[i].nom);
        cout<<"Ingresa fecha de nacimiento (dd mm aaaa): ";
        cin>>lista[i].fn[0]>>lista[i].fn[1]>>lista[i].fn[2];
    }
    /*
    for(int i=0; i<n;i++){
        cout<<lista[i].nom<<endl;
        cout<<lista[i].fn[0]<<"/"<<lista[i].fn[1]<<"/"<<lista[i].fn[2]<<endl;
        cout<<"---------------"<<endl;        
    }*/

    cout<<"Ingresa un mes (mm): "; cin>>mes;
    while (mes != 0){
        for(int i=0; i<n; i++){
            if(lista[i].fn[1] == mes){
                cout<<lista[i].nom<<endl;
                cout<<lista[i].fn[0]<<"/"<<lista[i].fn[1]<<"/"<<lista[i].fn[2]<<endl;
                cout<<"---------------"<<endl;
            }
        }
        cout<<"Ingresa un mes (mm): "; cin>>mes;
    }
    return 0;
}