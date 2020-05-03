#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
/* Realice un programa que genere la venta de de compra de un terreno/casa/departamento. Este programa debe realizar cálculos de acuerdo con la 
siguiente información:
Categoria 		Zona	Tipo		Precio x mt2 en $
				A. 		Terreno		2200
						Casa		2500
Comercial				Depto.		2100
				B. 		Terreno		1300
						Casa		1500
						Depto.		1200
----------------------------------------						
				A. 		Terreno		2200
						Casa		2500
						Depto.		2100
Residencial		B. 		Terreno		1300
						Casa		1500
						Depto.		1200
						Depto.		2100
				C. 		Terreno		1300
						Casa		1500
						Depto.		1200
															
*/
void menu();
void ingresar();
void reporte();
void menu_comercialA();
void menu_comercialB();
void menu_residencialA();
void menu_residencialB();
void menu_residencialC();
void ing_datos();
void ing_zona_com();
void ing_zona_res();
int main(){
	menu(); 	
}
void menu(){
	int op=0;
	do{
		system("CLS");
		cout<<"-------MENU-------"<<endl;
		cout<<"1. Ingresar datos"<<endl;
		cout<<"2. Generar reporte de ventas"<<endl;
		cout<<"3. Salir"<<endl;
		cin>>op;
		if(op==1)
			ingresar();
		else if(op==2)
			reporte();
		else if(op==3)
			break;
		else
			break;
	}while(op!=3);
}
void ingresar(){
	int cat=0;
	do{
		system("CLS");
		cout<<"Seleccione el tipo de categoría a ingresar"<<endl;
		cout<<"1. Comercial"<<endl;
		cout<<"2. Residencial"<<endl;
		cout<<"3. Regresar"<<endl;
		cin>>cat;	
			if(cat==1){
				ing_zona_com();
			}
			else if(cat==2){
				ing_zona_res();
			}
			else if(cat==3)
				break;
			else
				break;
	}while(cat!=3);
	
}
void ing_zona_com(){
	fstream archivo;
	archivo.open("HT5_EJERCICIO_01.txt",ios::app);
	if(archivo.fail()){
		cout<<"No se pudo abrir el arhivo"<<endl;
		exit(1);
	}
	char zonac;
	int m;
	do{
		system("CLS");
		cout<<"Seleccione la zona Comercial:"<<endl;
		cout<<"A. Zona A "<<endl;
		cout<<"B. Zona B "<<endl;
		cout<<"S. Salir "<<endl;
		cin>>zonac;
		zonac=toupper(zonac);
		if(zonac=='A'){
			system("CLS");
			//archivo<<zonac<<"\t"<<endl;
			menu_comercialA();
			}
		else if(zonac=='B'){
			system("CLS");
			//archivo<<zonac<<"\t"<<endl;
			menu_comercialB();
		}
		else if(zonac=='S')
			break;
		else
			break;
		}while(zonac!='S');
		archivo.close();
}
void ing_zona_res(){
	fstream archivo;
	archivo.open("HT5_EJERCICIO_01.txt",ios::app);
	if(archivo.fail()){
		cout<<"No se pudo abrir el arhivo"<<endl;
		exit(1);
	}
	char zonar;
	int m;
	do{
		system("CLS");
		cout<<"Seleccione la zona residencial:"<<endl;
		cout<<"A. Zona A "<<endl;
		cout<<"B. Zona B "<<endl;
		cout<<"C. Zona C "<<endl;
		cout<<"S. Salir "<<endl;
		cin>>zonar;
		zonar=toupper(zonar);
		if(zonar=='A'){
			system("CLS");
			//archivo<<zonar<<"\t"<<endl;
			menu_residencialA();
			}
		else if(zonar=='B'){
			system("CLS");
			//archivo<<zonar<<"\t"<<endl;
			menu_residencialB();
		}
		else if(zonar=='C'){
			system("CLS");
			//archivo<<zonar<<"\t"<<endl;
			menu_residencialC();
		}
		else if(zonar=='S')
			break;
		else
			break;
		}while(zonar!='S');
		archivo.close();
}
void menu_comercialA(){
	char id[]="Com_A";
	ofstream archivo;
	archivo.open("HT5_EJERCICIO_01.txt",ios::app);
	if(archivo.fail()){
		cout<<"No se puede abrir el archivo"<<endl;
		exit(1);
	}
	
	int optionc=0;
	int mts;
	float costo;
	float Com_A_Terr=0;
	float Com_A_Cas=0;
	float Com_A_Dep=0;
	do{
		system("CLS");
		cout<<"Ingrese el tipo de venta"<<endl;
		cout<<"1. Terreno"<<endl;
		cout<<"2. Casa"<<endl;
		cout<<"3. Departamento"<<endl;
		cout<<"4. Regresar"<<endl;
		cin>>optionc;
		if(optionc==1){
			system("CLS");
			cout<<"Ingrese la cantidad de metros cuadrados del inmueble: "<<endl;
			cin>>mts;
			costo=mts*2200;
			Com_A_Terr+=costo;
		}
		else if(optionc==2){
			system("CLS");
			cout<<"Ingrese la cantidad de metros cuadrados del inmueble: "<<endl;
			cin>>mts;
			costo=mts*2500;
			Com_A_Cas+=costo;
		}
		else if(optionc==3){
			system("CLS");
			cout<<"Ingrese la cantidad de metros cuadrados del inmueble: "<<endl;
			cin>>mts;
			costo=mts*2100;
			Com_A_Dep+=costo;
		}
		else if(optionc==4)
			break;
		else
			break;
		archivo<<id<<"\t"<<Com_A_Terr<<"\t"<<Com_A_Cas<<"\t"<<Com_A_Dep<<endl;
		system("PAUSE");
	}while(optionc!=4);
	archivo.close();

}
void menu_comercialB(){
	float Com_B_Terr=0;
	float Com_B_Cas=0;
	float Com_B_Dep=0;
	char id[]="Com_B";
	ofstream archivo;
	archivo.open("HT5_EJERCICIO_01.txt",ios::app);
	if(archivo.fail()){
		cout<<"No se puede abrir el archivo"<<endl;
		exit(1);
	}
	
	int optionc=0;
	int mts;
	float costo;
	do{
		system("CLS");
		cout<<"Ingrese el tipo de venta"<<endl;
		cout<<"1. Terreno"<<endl;
		cout<<"2. Casa"<<endl;
		cout<<"3. Departamento"<<endl;
		cout<<"4. Regresar"<<endl;
		cin>>optionc;
		if(optionc==1){
			system("CLS");
			cout<<"Ingrese la cantidad de metros cuadrados del inmueble: "<<endl;
			cin>>mts;
			costo=mts*1300;
			Com_B_Terr+=costo;
		}
		else if(optionc==2){
			system("CLS");
			cout<<"Ingrese la cantidad de metros cuadrados del inmueble: "<<endl;
			cin>>mts;
			costo=mts*1500;
			Com_B_Cas+=costo;
		}
		else if(optionc==3){
			system("CLS");
			cout<<"Ingrese la cantidad de metros cuadrados del inmueble: "<<endl;
			cin>>mts;
			costo=mts*1200;
			Com_B_Dep+=costo;
		}
		else if(optionc==4)
			break;
		else
			break;
		archivo<<id<<"\t"<<Com_B_Terr<<"\t"<<Com_B_Cas<<"\t"<<Com_B_Dep<<"\t"<<endl;
		system("PAUSE");
	}while(optionc!=4);
	archivo.close();

}
void menu_residencialA(){
	char id[]="Res_A";
	ofstream archivo;
	archivo.open("HT5_EJERCICIO_01.txt",ios::app);
	if(archivo.fail()){
		cout<<"No se puede abrir el archivo"<<endl;
		exit(1);
	}
	float Res_A_Terr=0;
	float Res_A_Cas=0;
	float Res_A_Dep=0;
	int optionr=0;
	int mts;
	float costo;
	do{
		system("CLS");
		cout<<"Ingrese el tipo de venta"<<endl;
		cout<<"1. Terreno"<<endl;
		cout<<"2. Casa"<<endl;
		cout<<"3. Departamento"<<endl;
		cout<<"4. Regresar"<<endl;
		cin>>optionr;
		if(optionr==1){
			system("CLS");
			cout<<"Ingrese la cantidad de metros cuadrados del inmueble: "<<endl;
			cin>>mts;
			costo=mts*2100;
			Res_A_Terr+=costo;
		}
		else if(optionr==2){
			system("CLS");
			cout<<"Ingrese la cantidad de metros cuadrados del inmueble: "<<endl;
			cin>>mts;
			costo=mts*2500;
			Res_A_Cas+=costo;
		}
		else if(optionr==3){
			system("CLS");
			cout<<"Ingrese la cantidad de metros cuadrados del inmueble: "<<endl;
			cin>>mts;
			costo=mts*2100;
			Res_A_Dep+=costo;
		}
		else if(optionr==4)
			break;
		else
			break;
		archivo<<id<<"\t"<<Res_A_Terr<<"\t"<<Res_A_Cas<<"\t"<<Res_A_Dep<<endl;
		system("PAUSE");
	}while(optionr!=4);
	archivo.close();
}
void menu_residencialB(){
	char id[]="Res_B";
	ofstream archivo;
	archivo.open("HT5_EJERCICIO_01.txt",ios::app);
	if(archivo.fail()){
		cout<<"No se puede abrir el archivo"<<endl;
		exit(1);
	}
	float Res_B_Terr=0;
	float Res_B_Cas=0;
	float Res_B_Dep=0;
	int optionr=0;
	int mts;
	float costo;
	do{
		system("CLS");
		cout<<"Ingrese el tipo de venta"<<endl;
		cout<<"1. Terreno"<<endl;
		cout<<"2. Casa"<<endl;
		cout<<"3. Departamento"<<endl;
		cout<<"4. Regresar"<<endl;
		cin>>optionr;
		if(optionr==1){
			system("CLS");
			cout<<"Ingrese la cantidad de metros cuadrados del inmueble: "<<endl;
			cin>>mts;
			costo=mts*1500;
			Res_B_Terr+=costo;
		}
		else if(optionr==2){
			system("CLS");
			cout<<"Ingrese la cantidad de metros cuadrados del inmueble: "<<endl;
			cin>>mts;
			costo=mts*1600;
			Res_B_Cas+=costo;
		}
		else if(optionr==3){
			system("CLS");
			cout<<"Ingrese la cantidad de metros cuadrados del inmueble: "<<endl;
			cin>>mts;
			costo=mts*1300;
			Res_B_Dep+=costo;
		}
		else if(optionr==4)
			break;
		else
			break;
		archivo<<id<<"\t"<<Res_B_Terr<<"\t"<<Res_B_Cas<<"\t"<<Res_B_Dep<<endl;
		system("PAUSE");
	}while(optionr!=4);
	archivo.close();
}
void menu_residencialC(){
	float Res_C_Terr=0;
	float Res_C_Cas=0;
	float Res_C_Dep=0;
	fstream archivo;
	archivo.open("HT5_EJERCICIO_01.txt",ios::app);
	if(archivo.fail()){
		cout<<"No se puede abrir el archivo"<<endl;
		exit(1);
	}
	
	int optionr=0;
	int mts;
	float costo;
	do{
		char id[]="Res_C";
		system("CLS");
		cout<<"Ingrese el tipo de venta"<<endl;
		cout<<"1. Terreno"<<endl;
		cout<<"2. Casa"<<endl;
		cout<<"3. Departamento"<<endl;
		cout<<"4. Regresar"<<endl;
		cin>>optionr;
		if(optionr==1){
			system("CLS");
			cout<<"Ingrese la cantidad de metros cuadrados del inmueble: "<<endl;
			cin>>mts;
			costo=mts*1100;
			Res_C_Terr+=costo;
		}
		else if(optionr==2){
			system("CLS");
			cout<<"Ingrese la cantidad de metros cuadrados del inmueble: "<<endl;
			cin>>mts;
			costo=mts*1300;
			Res_C_Cas+=costo;
		}
		else if(optionr==3){
			system("CLS");
			cout<<"Ingrese la cantidad de metros cuadrados del inmueble: "<<endl;
			cin>>mts;
			costo=mts*1000;
			Res_C_Dep+=costo;
		}
		else if(optionr==4)
			break;
		else
			break;
		archivo<<id<<"\t"<<Res_C_Terr<<"\t"<<Res_C_Cas<<"\t"<<Res_C_Dep<<endl;
		system("PAUSE");
	}while(optionr!=4);
	archivo.close();
}


void reporte(){
	system("CLS");
	char cat[5];
	float CAD, CAT, CAC;
	float CBT, CBC, CBD;
	float RAT, RAC, RAD;
	float RBT, RBC, RBD;
	float RCT, RCC, RCD;
	ifstream archivo;
	try{
		archivo.open("HT5_EJERCICIO_01.txt",ios::in);
		while(archivo>>cat[5]>>CAT>>CAC>>CAD){
			if(cat[5]=='Com_A'){
				cout<<"Categoria Comercial Zona A:\tTerreno\t"<<CAT<<"\tCasa"<<CAC<<"\tDepto\t"<<CAD<<endl;	
			}
			else if(cat[5]=='Com_B'){
				cout<<"Categoria Comercial Zona B:\tTerreno\t"<<CBT<<"\tCasa"<<CBC<<"\tDepto\t"<<CBD<<endl;	
			}
			else if(cat[5]=='Res_A'){
				cout<<"Categoria Residencial Zona A:\tTerreno\t"<<RAT<<"\tCasa"<<RAC<<"\tDepto\t"<<RAD<<endl;	
			}
			else if(cat[5]=='Res_B'){
				cout<<"Categoria Residencial Zona B:\tTerreno\t"<<RBT<<"\tCasa"<<RBC<<"\tDepto\t"<<RBD<<endl;	
			}
			else if(cat[5]=='Res_C'){
				cout<<"Categoria Residencial Zona C:\tTerreno\t"<<RCT<<"\tCasa"<<RCC<<"\tDepto\t"<<RCD<<endl;	

			}
		}
	system("PAUSE");
	}
	catch(exception X){
		system("CLS");
		cout<<"Error en la manipulación del archivo"<<endl;
		exit(1);
	}
	archivo.close();
}
