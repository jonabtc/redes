#include "Presentacion.h"

		Presentacion::Presentacion(){
			setMensaje("");
			}
		void Presentacion::setMensaje(string s){
			mensaje = s;
			}
		string Presentacion::getMensaje(){
			return mensaje;
			}
		void Presentacion::doProcess(Aplicacion aplicacion){
			
			}
		void Presentacion::doProcess(Presentacion presentacion){
			
			}
