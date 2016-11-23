
extern const int WIELKOSC_PLANSZY;

void narysujPlansze(int);
void stworzPlansze (int, char**);
void wypiszPlansze (char**);
void wykonajRuch (int, int, char, char**);
bool sprawdzCzyPlanszaPusta(char**);
void wykonujRuchy(char**);
bool sprawdzPoprawnoscRuchu (int , int, char**, char);
bool sprawdzCzyWygrana (char**);
void rysujGorneLiczby(int);
void rysujZnak(int, char);
