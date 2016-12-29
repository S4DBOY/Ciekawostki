//Zalozenie :
///Stworzyc program ktory losuje nam liczbe do momentu aż nie zgadniemy…
#include <random>
#include <iostream>
#include <cstdlib>
using namespace std;

main()
{


  random_device rd;   // generator liczb losowych (przynajmniej tak zrozumiałem z tłumaczenia) ;)
  mt19937 gen(rd());  // to seed mersenne twister. - do zasiania mersenne twister
  uniform_int_distribution<> dist(1,10); // zakres losowania wyłącznie pomiędzy 1 a 100.
menu:
char choose;
int num;
 int odp;
 int zgadl=0; //a tu tych ktorzy nie ;(

    system("clear");


do
{
 num=dist(gen);
cout<<"Podaj liczbe z zakresu od 1 do 10: ";
cin>>odp;

          if(num==odp)
          {
            zgadl++;
          }

}while(num==odp);
cout<<"Poprawna liczba to: "<<num<<endl;
cout<<"Ile razy zgadles: "<<zgadl<<endl;

cout<<"\nCzy chcesz kontynuowac ? (t/n) ";
cin>>choose;
if(choose == 't' || odp == 'T')
{
goto menu;
}


return 0;
}
