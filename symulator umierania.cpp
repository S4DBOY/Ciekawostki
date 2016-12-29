//Zalozenie :
///Stworzyc program ktory losuje nam liczby tyle razy ile chcemy i nam to wyswietli przy uwzględnieniu warunku
#include <random>
#include <iostream>
#include <cstdlib>
using namespace std;

main()
{

	const string white  ="\033[0m"; //kolory tekstu
	const string red  ="\033[91m";  //kolory tekstu

  random_device rd;   // generator liczb losowych (przynajmniej tak zrozumiałem z tłumaczenia) ;)
  mt19937 gen(rd());  // to seed mersenne twister. - do zasiania mersenne twister
  uniform_int_distribution<> dist(1,2); // zakres losowania wyłącznie pomiędzy 1 a 2.
 menu:
 int count,num;
 char odp;
 int live=0; //zmienna do ktorej zostanie wpisana liczba tych ktorzy przezyli eksperyment
 int dead=0; //a tu tych ktorzy nie ;(

    system("clear");
    num=0;
	cout << "Wyobraz sobie,ze wskrzesiles ludzi po tym jak oni popelnili samobojstwo czyli dales/as im druga szanse.\n"
	<<"A teraz odpowiedz sobie ilu z tych ludzi postanowilo zmienic swe nudne zycie?\n"
	<<"Nie wiesz? W porzadku od tego masz ten program.\n\n"
   	<< "A wiec na ilu ludziach chcesz przeprowadzic test? ";
   cin >> count; ///wypisanie przez uzytkownika ile razy ma sie losowac i wyswietlic na ekranie

while(num < count )
{



    num++;

        switch (dist(gen)) {
        case 1:
            cout << "Dead ;(" << endl;
            dead++;
            break;
        case 2:
            cout << red << "Live!" << white << endl;
            live++;
            break;
        default:
            cerr << "Jakis nieokreslony przypadek\n";
        }

}

cout<<"\nZmarlo: "<<dead<<endl;
cout<<"Przezylo: "<<live<<endl;

cout<<"\nCzy chcesz kontynuowac ? ";
cin>>odp;
if(odp == 't' || odp == 'T')
{
	goto menu;
}

return 0;
}
