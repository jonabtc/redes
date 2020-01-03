#include "Enlace.h"

		Enlace::Enlace(){
			setMensaje("");
			}
		void Enlace::setMensaje(string s){
			mensaje = s;
			}
		string Enlace::getMensaje(){
			return mensaje;
			}
		void Enlace::doProcess(Red red){
			
			}
		void Enlace::doProcess(Fisica fisica){
			
			}
