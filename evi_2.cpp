#include <iostream>
using namespace std;

int main()
{
    int referencia_zapatos;
    char descripcion_zapatos[30];
    int talla;
    float costo;
    char continuar;
  
    cout<<"ADMINISTRADOR VENTA DE ZAPATOS"<<endl;
    cout<<"Desea registrar un Zapato S/N: ";
    cin>> continuar;
    
    while(continuar != 'N')
        {
        cout<<"Digite la referencia del zapato: ";
        cin>>referencia_zapatos;
        cin.ignore(256, '\n');
        cout<<"Digite una descripcion del zapato: ";
        cin.getline(descripcion_zapatos,30);
        cout<<"Digite la talla del zapato: ";
        cin>>talla;
        cout<<"Digite el costo del zapato: ";
        cin>>costo;   
        cout<<endl;  
        cout<<"Desea registrar otro Zapato S/N: ";
        cin>>continuar;  
        }
    cout<<"fin de la aplicacion"<<endl;
    system("pause");
    return EXIT_SUCCESS;
}