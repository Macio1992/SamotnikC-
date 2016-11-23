#include <iostream>
#include "funkcje.h"

const int WIELKOSC_PLANSZY = 7;

using namespace std;
int main() {
		
	//char plansza[WIELKOSC_PLANSZY][WIELKOSC_PLANSZY];
	
	char **plansza = new char*[WIELKOSC_PLANSZY];
	for(int i = 0; i < WIELKOSC_PLANSZY; i++)
		plansza[i] = new char[WIELKOSC_PLANSZY];
	
	//narysujPlansze(1, WIELKOSC_PLANSZY);
	//narysujPlansze(2, WIELKOSC_PLANSZY);
	//narysujPlansze(3, WIELKOSC_PLANSZY);
	//int wybor;

/*	do {
		cout<<"Wybierz typ planszy (1,2,3): "<<endl;
		cin>>wybor;
	} while(!(wybor==1 || wybor==2 || wybor==3));*/
	//system("cls");
	stworzPlansze(1, plansza);
		
	wypiszPlansze(plansza);	
	wykonujRuchy(plansza);
	
	for (int i = 0; i < WIELKOSC_PLANSZY ; i++)
		delete [] plansza[i];
	delete [] plansza;
	
	return 0;
}
