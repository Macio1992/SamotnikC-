#include <iomanip>
#include <iostream>
#include "funkcje.h"

using namespace std;

void rysujGorneLiczby(int n){
	
	cout <<setw(3);
	for(int i = 1; i <= n; i++){
		cout<<i<<setw(1);
	}
	cout<<endl;
}

void rysujZnak(int ilosc, char znak){
	
	for(int i = 0; i < ilosc; i++){
		cout <<znak<<setw(1);
	}
}

void narysujPlansze (int wybor) {

	switch(wybor) {
		case 1: {
			rysujGorneLiczby(WIELKOSC_PLANSZY);
			for(int i=0; i<WIELKOSC_PLANSZY; i++) {
				if(i==0 || i==1 || i==5|| i==6) {
					cout<<i+1<<setw(4);
					rysujZnak(3, 'o');
				} else if(i==2 || i==4 ) {
					cout<<i+1<<setw(2);
					rysujZnak(WIELKOSC_PLANSZY, 'o');
				} else {
					cout<<i+1<<setw(2);
					rysujZnak(3, 'o');
					rysujZnak(1, '.');
					rysujZnak(3, 'o');
				}
				cout<<endl;
			}
			cout<<endl<<endl;
			break;
		}
		case 2: {
			rysujGorneLiczby(WIELKOSC_PLANSZY);
			for(int i=0; i<WIELKOSC_PLANSZY; i++) {
				if(i==0 || i==6) {
					cout<<i+1<<setw(4)<<"."<<setw(1)<<"."<<setw(1)<<".";
					rysujZnak(3, '.');
				} else if(i==1 || i==5 ) {
					cout<<i+1<<setw(3);
					rysujZnak(5, 'o');
				} else if(i==2 || i==4) {
					cout<<i+1<<setw(2);
					rysujZnak(7, 'o');
				}
				else {
					cout<<i+1<<setw(2);
					rysujZnak(3, 'o');
					rysujZnak(1, '.');
					rysujZnak(2, 'o');
				}
				cout<<endl;
			}
			cout<<endl<<endl;
			break;
		}
		case 3: {
			rysujGorneLiczby(WIELKOSC_PLANSZY);
			for(int i=0; i<WIELKOSC_PLANSZY; i++) {
				if(i==0 || i==6) {
					cout<<i+1<<setw(2);
					rysujZnak(7, '.');
				} else if(i==1 || i==5 ) {
					cout<<i+1<<setw(2);
					rysujZnak(2, '.');
					rysujZnak(3, 'o');
					rysujZnak(2, '.');
				} else if(i==2 || i==4) {
					cout<<i+1<<setw(2);
					rysujZnak(1, '.');
					rysujZnak(5, 'o');
					rysujZnak(1, '.');
				}
				else {
					cout<<i+1<<setw(2);
					rysujZnak(1, '.');
					rysujZnak(2, 'o');
					rysujZnak(1, '.');
					rysujZnak(2, 'o');
					rysujZnak(1, '.');
				}
				cout<<endl;
			}
			break;
		}
	}
}

void stworzPlansze (int wybor, char **plansza) {

	switch(wybor){
		case 1:{
			for(int i=0; i<WIELKOSC_PLANSZY; i++) {
				for(int j=0; j<WIELKOSC_PLANSZY; j++) {
					if(i==0 || i==1 || i==5|| i==6) {
						if(j==0 || j==1 || j==5 || j==6) {
							plansza[i][j]=' ';
						} else {
							plansza[i][j]='o';
						}
					} else if(i==2 || i==4  ) {
						plansza[i][j]='o';
					} else {
						if(j != 3) {
							plansza [i][j]='o';
						} else {
							plansza[i][j]='.';
						}
					}
				}
			}
			break;
		}
		case 2:{
			for(int i=0; i<WIELKOSC_PLANSZY; i++) {
				for(int j=0; j<WIELKOSC_PLANSZY; j++) {
					if(i==0 || i==6) {
						if(j==2 || j==3 || j==4) {
							plansza[i][j]='.';
						} else {
							plansza[i][j]=' ';
						}
					} else if(i==1 || i==5  ) {
						if(j==0 || j==6) {
							plansza[i][j]=' ';
						} else {
							plansza[i][j]='o';
						}
					} else if(i==2 || i==4) {
						plansza[i][j]='o';
					} else {
						if(j != 3) {
							plansza [i][j]='o';
						} else {
							plansza[i][j]='.';
						}
					}
				}
			}
			break;
		}
		case 3:{
			for(int i=0; i<WIELKOSC_PLANSZY; i++) {
				for(int j=0; j<WIELKOSC_PLANSZY; j++) {
					if(i==0 || i==6) {
	
						plansza[i][j]='.';
	
					} else if(i==1 || i==5  ) {
						if(j==2 || j==3 || j==4) {
	
							plansza[i][j]='o';
						} else {
							plansza[i][j]='.';
						}
	
					} else if(i==2 || i==4) {
						if(j==0 || j==6) {
	
							plansza[i][j]='.';
						} else {
							plansza[i][j]='o';
						}
	
					} else {
						if(j==0 || j==3 || j==6) {
							plansza [i][j]='.';
						} else {
							plansza[i][j]='o';
						}
					}
				}
			}
			break;
		}
	}

}
void wypiszPlansze(char **plansza) {
	cout<<setw(3)<<"1"<<setw(3)<<"2"<<setw(3)<<"3"<<setw(3)<<"4"<<setw(3)<<"5"<<setw(3)<<"6"<<setw(3)<<"7"<<endl;
	for(int i=0; i<WIELKOSC_PLANSZY; i++) {
		cout<<i+1<<setw(1);
		for(int j=0; j<WIELKOSC_PLANSZY; j++) {
			cout<<setw(2)<<plansza[i][j]<<" ";
		}
		cout<<endl;
	}
}

void wykonajRuch (int x , int y, char kierunekRuchu, char **plansza) {

	switch(kierunekRuchu) {
		case 'L': {
			plansza[x][y]='.';
			plansza[x][y-1]='.';
			plansza[x][y-2]='o';

			break;
		}
		case 'P': {
			plansza[x][y]='.';
			plansza[x][y+1]='.';
			plansza[x][y+2]='o';

			break;
		}
		case 'G': {
			plansza[x][y]='.';
			plansza[x-1][y]='.';
			plansza[x-2][y]='o';

			break;
		}
		case 'D': {
			plansza[x][y]='.';
			plansza[x+1][y]='.';
			plansza[x+2][y]='o';

			break;
		}
	}
}
bool sprawdzCzyPlanszaPusta(char **plansza) {
	int licznik=0;
	
	for(int i=0; i<WIELKOSC_PLANSZY; i++)
		for(int j=0; j<WIELKOSC_PLANSZY; j++)
			if(plansza[i][j]=='o')
				licznik++;

	if(licznik==1) {
		return true;
	} else {
		return false;
	}
}
bool sprawdzCzyWygrana (char **plansza) {
	if(plansza[3][3]=='o') {
		return true;
	} else {
		return false;
	}
}
bool sprawdzPoprawnoscRuchu (int x, int y, char **plansza, char kierunekRuchu) {

	int licznik=0;
	bool warunek1=((x>=0 && x<=WIELKOSC_PLANSZY-1) && (y>=0 && y<=WIELKOSC_PLANSZY-1));
	bool warunek2= (plansza[x][y]=='o');
	bool warunek3, warunek4;

	switch(kierunekRuchu) {
		case 'L': {
			if(plansza[x][y-2]==' ' || plansza[x][y-2]=='o' || plansza[x][y-1]=='.') {
				warunek4 = false;
			} else {
				warunek4 = true;
			}
			
			if(y-2>=0) {
				warunek3 = true;
			} else {
				warunek3 = false;
			}
			
			break;
		}
		case 'P': {
			if(plansza[x][y+2]==' ' || plansza[x][y+2]=='o' || plansza[x][y+1]=='.') {
				warunek4 = false;
			} else {
				warunek4 = true;
			}

			if(y+2<7) {
			warunek3 = true;
		} else {
			warunek3 = false;
		}

			break;
		}
		case 'G': {
			if(plansza[x-2][y]==' ' || plansza[x-2][y]=='o'|| plansza[x-1][y]=='.') {
				warunek4 = false;
			} else {
				warunek4 = true;
			}
			
			if(x-2>=0) {
				warunek3 = true;
			} else {
				warunek3 = false;
			}
			
			break;
		}
		case 'D': {
			if(plansza[x+2][y]==' ' || plansza[x+2][y]=='o' || plansza[x+1][y]=='.') {
				warunek4 = false;
			} else {
				warunek4 = true;
			}
			
			if(x+2<7) {
				warunek3 = true;
			} else {
				warunek3 = false;
			}
			
			break;
		}
	}

	if(warunek1 && warunek2 && warunek3 && warunek4) licznik++;

	if(licznik==1) return true;
	else return false;
	
}

void wykonujRuchy(char **plansza) {
	
	int x,y;
	char wybor;
	while(sprawdzCzyPlanszaPusta(plansza)==false) {
		do {
			cout<<"Podaj koordynaty (X,Y): "<<endl;
			cin>>x>>y;
			x=x-1;
			y=y-1;
			do {
				cout<<"Podaj kierunek ruchu (P,L,G,D): "<<endl;
				cin>>wybor;
				if(!(wybor=='L'|| wybor=='P' || wybor=='G'|| wybor=='D' )) {
					cout<<"Nieprawidlowo wpr kierunek ruchu"<<endl;
				}

			} while(!(wybor=='L'|| wybor=='P' || wybor=='G'|| wybor=='D'));
		} while(!sprawdzPoprawnoscRuchu(x,y,plansza, wybor));

		wykonajRuch(x,y,wybor, plansza);
		system("cls");
		wypiszPlansze(plansza);
	}
	
	if(sprawdzCzyWygrana(plansza)==true) cout<<"Wygrana!"<<endl;
	else cout<<"Nie ma wygranej!"<<endl;
}
