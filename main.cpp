#include <iostream>

using namespace std;


int main()
{
    string imie;
    cout << "Podaj swoje imie: ";
    cin>>imie;
    cout<<"Nazywasz sie: "<<imie<<endl;
    cout<<"______________"<<endl<<endl;

    float a,b,suma;
    int iloraz,c,d;
    cout<<"Podaj dwie liczby: ";
    cin>>a>>b;
    suma=a+b;
    cout<<endl<<"Suma tych liczb to: "<<suma<<endl;
    if(b!=0)
    {
        iloraz=a/b;
        cout<<"Wynik dzielenia (float)a/b: "<<(float)a/b<<endl;
        cout<<"Wynik dzielenia liczb int: "<<iloraz<<endl;
        c=a;d=b; //liczby float maja ucieta liczbe dziesietna podczas podmianki na inty
        iloraz=c%d;
        //tylk int ma reszte z dzielenia
        cout<<"Reszta z dzielenia liczb int: "<<iloraz<<endl;
    }
    else
        cout<<"Nie moge podzielic przez '0'"<<endl;
    return 0;
}
