#include "Menu1.h"
#include<string.h>

void Menu1::getMenu(){
	cout<<"		[------------------------ Menu ------------------------]"<<endl;
	cout<<"	1) Enchiladas-pollo   	$75.00"<<endl;
	cout<<"	2) Tacos-pollo 		 	$75.00"<<endl;
	cout<<"	3) Tacos-queso 			$60.00"<<endl;
	cout<<"	4) Hamburgesa 			$85.00"<<endl;
	cout<<"	5) Pizza 	 			$50.00"<<endl;
}
void Menu1::preparar(int opcion){
	if(opcion == 1){
		cout<<"Prepara tus enchiladas: "<<endl;
		cout<<"1) Si	2) No";
		cout<<"Crema: ";
	}
}