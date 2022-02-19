#include <iostream>
using namespace std;
class Persona{
	
	protected : string nombres, apellidos, direccion,fecha_nacimiento;
				int telefono;
	
	protected :
				Persona(){
					
				}
				Persona(string nom,string ape,string dire,string fn, int tele){
					nombres = nom;
					apellidos = ape;
					direccion = dire;
					fecha_nacimiento = fn;
					telefono = tele;
				}
				
	void mostrar();
	
};
