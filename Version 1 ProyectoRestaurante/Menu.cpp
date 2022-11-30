#include "Menu.h"
//constructor
Menu::Menu(){
	nombre = " ";
	opcion = 0;
	
}
void Menu::buscardisponibilidad(){
cout<<"ingresa nombre de platillo"<<endl;
cin>>nombre;

}
void Menu::buscarprecio(){
cout<<"ingresa nombre de platillo"<<endl;
}
void Menu::imprimirdatos(int opcion){
	cout<<"Su nombre de platillo es : "<<endl;
	if(opcion == 1){
		cout<<"Enchiladas de pollo :)"<<endl;
	}
	else if(opcion == 2){
		cout<<"Pozole"<<endl;
	}
	else if(opcion == 3){
		cout<<"Enfrijoladas"<<endl;
	}
	
}
int Menu::desplegarMenu(){
	cout<<"Bienvenido a la fonda BrisaMar"<<endl;
	cout<< "1) Enchiladas rojas de pollo"<<endl;
	cout<< "2) Pozole"<<endl;
	cout<< "3) Enfrijoldas"<<endl;
	cout<<"Seleccione una opcion: "<<endl;
	cin>>opcion;
	if(opcion == 1){
		return 1;
	}
	
}
