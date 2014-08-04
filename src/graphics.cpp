#include "graphics.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


graphics::graphics(void)
{
}


graphics::~graphics(void)
{
}

void graphics::setup(){

		char nivel[128];
	ifstream fs ("Nivel 1.txt");
	fs.getline(nivel, 128);
	string posicionX;
	string cuadradoX;
	int posCuadradoX;
	fs >> posicionX;
	fs >> cuadradoX;
	fs >> posCuadradoX;
	cout << posicionX << " " << cuadradoX << " " << posCuadradoX << endl;
	string posicionY;
	string cuadradoY;
	int posCuadradoY;
	fs >> posicionY;
	fs >> cuadradoY;
	fs >> posCuadradoY;
	cout << posicionY << " " << cuadradoY << " " << posCuadradoY << endl;

	string posicionPersonajeX;
	string personajeX;
	int posPersonajeX;
	fs >> posicionPersonajeX;
	fs >> personajeX;
	fs >> posPersonajeX;
	cout << posicionPersonajeX << " " << personajeX << " " << posPersonajeX << endl;
	string posicionPersonajeY;
	string personajeY;
	int posPersonajeY;
	fs >> posicionPersonajeY;
	fs >> personajeY;
	fs >> posPersonajeY;
	cout << posicionPersonajeY << " " << personajeY << " " << posPersonajeY << endl;

	cuadrado(posCuadradoX, posCuadradoY, posPersonajeX, posPersonajeY);

}

	void graphics::cuadrado(int x, int y, int a, int b){


		//cout << endl;
	/*	for (int i = 1; i < x; i++){
			
			for ( int j = 1; j < y; j++){
	
				if (j == b && i == a){
					//cout << "*";
					ofRect(1,1,x,y);
				}else
					ofCircle(a, b, 5);
				//cout << "0";


			}
		//cout << "0" << endl;
		}

	//	cout << endl;
	*/
	}


