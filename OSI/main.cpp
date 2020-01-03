#include <iostream>
#include "Aplicacion.h"
#include "Presentacion.h"
#include "Sesion.h"
#include "Transporte.h"
#include "Red.h"
#include "Enlace.h"
#include "Fisica.h"

using namespace std;

int main(){
	
	Aplicacion capa7 = new Aplicacion();
	Presentacion capa6 = new Presentacion();
	Sesion capa5 = new Sesion();
	Transporte capa4 = new Transporte();
	Red capa3 = new Red();
	Enlace capa2 = new Enlace();
	Fisica capa1 = new Fisica();
	
	string mensaje = "Hola mundo";
	
	capa7.setMensaje(mensaje);
	capa7.doProcess();
	
	cout << "Capa de Aplicacion: \n" <<  capa7.getMensaje() << endl;
	
	capa6.setMensaje(capa7.getMensaje());
	capa6.doProcess(capa7);
	
	
	cout << "Capa de Presentacion: \n" <<  capa6.getMensaje() << endl;
	
	capa5.setMensaje(capa6.getMensaje());
	capa5.doProcess(capa6);
	
	cout << "Capa de Sesion: \n" <<  capa5.getMensaje() << endl;
	
	capa4.setMensaje(capa5.getMensaje());
	capa4.doProcess(capa5);
	
	cout << "Capa de Transporte: \n" <<  capa4.getMensaje() << endl;
	
	capa3.setMensaje(capa4.getMensaje());
	capa3.doProcess(capa4);
	
	cout << "Capa de Red: \n" <<  capa3.getMensaje() << endl;
	
	capa2.setMensaje(capa3.getMensaje());
	capa2.doProcess(capa3);
	
	cout << "Capa de Enlace: \n" <<  capa2.getMensaje() << endl;
	
	capa1.setMensaje(capa2.getMensaje());
	capa1.doProcess(capa2);
	
	cout << "Capa de Fisica: \n" <<  capa1.getMensaje() << endl;
	
	cout << "=========== Aquí va de regreso ===========" << endl;
	
	capa1.setMensaje(/*Aqui va la cadena del archivo de texto*/);
	capa1.doProcess();
	
	cout << "Capa de Fisica: \n" <<  capa1.getMensaje() << endl;
	
	capa2.setMensaje(capa1.getMensaje());
	capa2.doProcess(capa1);	
	
	cout << "Capa de Enlace: \n" <<  capa2.getMensaje() << endl;
	
	capa3.setMensaje(capa2.getMensaje());
	capa3.doProcess(capa2);	
	
	cout << "Capa de Red: \n" <<  capa3.getMensaje() << endl;
	capa4.setMensaje(capa3.getMensaje());
	capa4.doProcess(capa3);	
	cout << "Capa de Transporte: \n" <<  capa4.getMensaje() << endl;
	capa5.setMensaje(capa4.getMensaje());
	capa5.doProcess(capa4);	
	cout << "Capa de Sesion: \n" <<  capa5.getMensaje() << endl;
	capa6.setMensaje(capa5.getMensaje());
	capa6.doProcess(capa5);	
	cout << "Capa de Presentacion: \n" <<  capa6.getMensaje() << endl;
	capa7.setMensaje(capa6.getMensaje());
	capa7.doProcess(capa6);
	cout << "Capa de Aplicacion: \n" <<  capa7.getMensaje() << endl;
	cout << "El mensaje enviado fue: " << mensaje << endl;
	
	
	
	
	system("PAUSE");
	return 0;
}

