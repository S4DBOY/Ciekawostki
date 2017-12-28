#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>

int main()
{
    std::string req_word, word;
    std::vector<std::string> vec_req_word;
    std::vector<char> letters;

    int req_size = 0; // rozmiar naszego słowa
    int vec_word_size = 0; //rozmiar wektora
    char letter; // literki jakie mozemy wykorzystac
    int word_size = 0;
    std::cout << "Podaj litery wystepujace : ";

    while (std::cin >> letter) {
        letters.push_back(letter);
    }

    int letters_size = letters.size();

    std::cout << "\nPodaj dlugość słowa: ";
    std::cin >> req_size;
    std::cout << "\n";

    fstream file;
    file.open("slowa.txt", ios::in | ios::out);

    while (!file.eof()) {
        std::getline(file, word);
        word_size = word.size();

        if (req_size == word_size) //sprawdza czy rozmiar słowa się zgadza z tym potrzebnym
        {
            for (int x = 0; x < letters_size; x++) {
                letter = word.find(letters.[x]); //sprawdza czy literki zgadzają się z wzorcem
                vec_req_word.push_back(word);
            }
        }
    }
    file.close();
    return 0;
}
