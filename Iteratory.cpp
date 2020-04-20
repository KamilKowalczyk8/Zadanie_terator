#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
 
struct uczen
{
        string imie, nazwisko, pesel, adres;
        int numer;
};
 
class garaz
{
                vector <struct uczen> spis;
       
        public:
            //    void wprowadz();
                void wypisz();
                void zapiszDoPliku(const char *);
                void wczytajZPliku(const char *);                
};
 /*
void garaz::wprowadz()
{
        int iloscUczniow;
        struct uczen wprowadzany;
        cout << "Ilosc aut: ";
        cin  >> iloscUczniow;
        for (int i=0; i<iloscUczniow; i++)
        {
                cout << "Marka,Model,Rok,Pojemnosc: ";
                cin >> wprowadzany.numer
                        >> wprowadzany.marka
                        >> wprowadzany.model
                        >> wprowadzany.rok
                        >> wprowadzany.pojemnosc;
                spis.push_back(wprowadzany); //TU WSTAW do tablicy nowy rekord
        }
}
 */
 
 
 
void garaz::wypisz()
{
string a;
ifstream plik2;
    plik2.open("1a.txt");  
    if(plik2.good())
     while(!plik2.eof())  
           
                         {
                             
                         plik2>>a;  
                         cout<<a;
                         cout<<endl; //  na ekranie
                         }
    plik2.close();
}
 void garaz::wczytajZPliku(const char *nazwa)
{
ifstream plik;
plik.open(nazwa);  //otwarcie pliku
   
   if(plik.good())  //sprawdzenie czy plik istnieje
            while(!plik.eof())  //petla wykonuje sie az program dojedzie do konca pliku
                  {
                 for (vector<struct uczen>::iterator it = spis.begin(); it != spis.end(); ++it)
                 {
                plik    << it->numer << " "
                        << it->imie << " "
                        << it->nazwisko << " "
                        << it->pesel << " "
                        << it->adres << "\n";
				 }
                   
                   }
                   plik.close();  //zamkniecie pliku tekstowego

cout<<endl;
}
 
 
 
void garaz::zapiszDoPliku(const char *nazwa)
{
        ofstream plik1;
        plik1.open(nazwa);
        for (vector<struct uczen>::iterator it = spis.begin(); it != spis.end(); ++it)
        {
                plik1 << it->cout<<"["<<endl<<"{"<<numer<<":"<<imie<<":"<<nazwisko<<":"<<pesel<<":"<<adres<<"}"<<"}"<< "\n";
        }
        plik1.close();  
}
void menu()
    {
    cout<<"1.Wczytaj z Pliku \n";
    cout<<"2.Wypisz \n";
    cout<<"3.Zapisz\n";
     cout<<"4.Koniec\n";
}
 
 
int main(int argc, char** argv) {
   
    {
    garaz ti;
    int wybor;
    do{
    menu();
    cin >> wybor;
    switch (wybor)
    {
         
        case 1:  
            ti.wczytajZPliku("1a.txt");
        break;
        case 2:
            ti.wypisz();
        break;
        case 3:
            ti.zapiszDoPliku("1b.txt");
        break;        
    }
      
     
 }while(wybor!=4);
 }
}
