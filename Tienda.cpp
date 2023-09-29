#include <iostream>
using namespace std;

int menuP();
int menuA(int cuenta);
int menuB(int cuenta);
int menuPo(int cuenta);

int main(){
    int opc, cuenta=0;
    do{
        opc = menuP();
        switch (opc)
        {
        case 1:
            cuenta = menuA(cuenta);
            break;

        default:
            break;
        }

        switch (opc)
        {
        case 2:
            cuenta = menuB(cuenta);
            break;
        
        default:
            break;
        }

        switch (opc)
        {
        case 3:
            cuenta = menuPo(cuenta);
            break;

        default:
            break;
        }
        
}while(opc!=4);
    return 0;
}

int menuP(){
    int opc=7;
    cout<<"El siguiente programa calcula el costo de comer en un restaurante"<<endl;
    cout<<"--- Menu de servicio ---\n";
    cout<<"1. Alimentos"<<endl;
    cout<<"2. Bebidas"<<endl;
    cout<<"3. Postres"<<endl;
    cout<<"4. Salir - Cuenta"<<endl;
    cout<<"Ingresa la opcion deseada: ";
    cin>>opc;
    return opc;
}

int menuA(int cuenta){
    int opcAl= 7;
    int cant;
    do
    {
        cout<<"--- Menu de Alimentos ---\n";
        cout<<"1. Sopa \t $30.00"<<endl;
        cout<<"2. Pasta\t $40.00"<<endl;
        cout<<"3. Filete\t $50.00"<<endl;
        cout<<"4. Salir - Cuenta"<<endl;
        cout<<"Ingresa la opcion deseada: ";
        cin>>opcAl;
        switch (opcAl)
        {
        case 1:
            cout<<"Ingresa las porciones de Sopa que quieres:";
            cin>>cant;
            cuenta = cuenta + cant*30;
            break;
        case 2:
            cout<<"Ingresa las porciones de Pasta que quieres:";
            cin>>cant;
            cuenta = cuenta + cant*40;
            break;
        case 3:
            cout<<"Ingresa las porciones de Filetes que quieres:";
            cin>>cant;
            cuenta = cuenta + cant*50;
            break;
        case 4:
            cout<<"Has gastado: "<<cuenta<<endl;
            break;
        default:
            break;
        }
    } while (opcAl!=4);
    return cuenta;
}

int menuB(int cuenta){
    int opcAl= 7;
    int cant;
    do
    {
        cout<<"--- Menu de Alimentos ---\n";
        cout<<"1. Agua \t $40.00"<<endl;
        cout<<"2. Miche\t $60.00"<<endl;
        cout<<"3. CocaCola\t $70.00"<<endl;
        cout<<"4. Salir - Cuenta"<<endl;
        cout<<"Ingresa la opcion deseada: ";
        cin>>opcAl;
        switch (opcAl)
        {
        case 1:
            cout<<"Ingresa las botellas de agua que deseas:";
            cin>>cant;
            cuenta = cuenta + cant*40;
            break;
        case 2:
            cout<<"Ingresa las Miches que deseas:";
            cin>>cant;
            cuenta = cuenta + cant*60;
            break;
        case 3:
            cout<<"Ingresa las Cocacolas que deseas:";
            cin>>cant;
            cuenta = cuenta + cant*70;
            break;
        case 4:
            cout<<"Has gastado: "<<cuenta<<endl;
            break;
        default:
            break;
        }
    } while (opcAl!=4);
    return cuenta;
}

int menuPo(int cuenta){
    int opcAl= 7;
    int cant;
    do
    {
        cout<<"--- Menu de Alimentos ---\n";
        cout<<"1. Pay \t $60.00"<<endl;
        cout<<"2. Flan\t $30.00"<<endl;
        cout<<"3. Pastel\t $20.00"<<endl;
        cout<<"4. Salir - Cuenta"<<endl;
        cout<<"Ingresa la opcion deseada: ";
        cin>>opcAl;
        switch (opcAl)
        {
        case 1:
            cout<<"Ingresa las rebanadas de pay que deseas:";
            cin>>cant;
            cuenta = cuenta + cant*60;
            break;
        case 2:
            cout<<"Ingresa las rebanadas de flan que deseas:";
            cin>>cant;
            cuenta = cuenta + cant*30;
            break;
        case 3:
            cout<<"Ingresa las rebanadas de pastel que deseas:";
            cin>>cant;
            cuenta = cuenta + cant*20;
            break;
        case 4:
            cout<<"Has gastado: "<<cuenta<<endl;
            break;
        default:
            break;
        }
    } while (opcAl!=4);
    return cuenta;
}