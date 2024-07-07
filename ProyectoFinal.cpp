#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	
	int opcion;
	SetConsoleOutputCP(CP_UTF8);
	
	cout<<"\n----BIENVENIDOS A URBAN MALL----\n"<<endl;
	
	while(opcion!=10){
	
	    cout<<"Seleccione el área de su interés:"<<endl<<endl;
	    cout<<"1) Entretenimiento"<<endl
	        <<"2) Supermercados"<<endl
	        <<"3) Patio de comidas"<<endl
	        <<"4) Tecnología"<<endl
	        <<"5) Juguetes"<<endl
	        <<"6) Útiles escolares"<<endl
	        <<"7) Tecnología"<<endl
	        <<"8) Vehículos"<<endl
	        <<"9) Bancos"<<endl
	        <<"10) Salir"<<endl<<endl;
	    cout<<"Opción: ";
	    cin>>opcion;
	    
	    switch(opcion){
	    	case 1:
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
	    		break;
	    	case 7:
	    		break;
	    	case 8:
	    		break;
	    	case 9:
	    		break;
	    	case 10:
	    		cout<<"Saliendo...";
	    		break;
	    	default:
	    		cout<<"ERROR: Alternativa no válida, intente de nuevo..."<<endl<<endl;
	    		break;
		}
    }
}