#include <iostream>

using namespace std;

int main()
{
    int D,n,nowa,dziesiatki,jednosci,wynik=1,licznik=1;
    cin>>D;
    for(int i=0; i<D; i++)
    {
        cin>>n;
        if(n<=9)
        {

            while(licznik<=n)
            {
                wynik=wynik*licznik;
                licznik++;
            }

            nowa=wynik%100;
            dziesiatki=nowa/10;
            jednosci=nowa%10;

            cout<<dziesiatki<<" "<<jednosci<<endl;
            wynik=1,licznik=1; //musi byc ta linia bo inaczej SPOJ nie przyjmuje
        }
        else
        {
            cout<<0<<" "<<0<<endl;
        }
    }

    return 0;
}
