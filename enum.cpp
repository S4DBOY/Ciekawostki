#include <iostream>
using namespace std;
enum wlasny_enum
{
    przyklad0 = 0, //zamiast średników stosuje się przecinki
    przyklad1 = 1,
    przyklad2 = 2,
    //...
    przykladktorystam //przy "wartości" ostatniej przecinka nie stosuje się
};
int main()
{
    wlasny_enum nowy;
    nowy = przyklad0; //przypisanie wartosci
    cout << nowy << endl; //strumień
    getchar();
}
