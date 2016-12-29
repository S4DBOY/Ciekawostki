#include <iostream>

using namespace std;

main()
{
int liczba;

cout<<"Do ktorej liczby chcesz wylosowac? ";
cin>>liczba;

for(int i=0;i<liczba;i+=2)
{
cout<<i<<endl;
}
return 0;
}
