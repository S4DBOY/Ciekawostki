#include <iostream>

int main()
{
  int r;
  char random;
    for(int i=1;i<=500;i++)
    {
        std::cout<<"haslo nr "<<i<<"\n"; //numerowanie hasel
        r=rand()%24+4; //zakres od 4 do 24 znakow
        for(int j=0;j<=r;j++)
            {
                random=rand()%25+65;
                std::cout<<random;
            }
            std::cout<<"\n";

        }
return 0;
}
