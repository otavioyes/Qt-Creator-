#include <iostream>
#include <string>

int main()
{
    std::string nome;
    int idade;

    std::cout << "Digite seu nome: ";
    std::cin >> nome;

    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    std::cout << "Seu nome: " << nome << '\n';
    std::cout << "Idade: " << idade << '\n';

    return 0;
}
