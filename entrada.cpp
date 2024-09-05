//Receber a entrada pelo teclado e armazenar

#include <iostream>
#include <string>
using namespace std; 

int main(){
	
	int idade;
	string nome;

	std::cout << "Digite sua idade: "; 
	std::cin >> idade;
	std::cin.ignore();
	std::cout << "\nDigte seu nome: ";
	std::getline(std::cin, nome);

	std::cout << "\nmeu nome é " << nome ;	
	std::cout << "\nTenho " << idade << " anos\n";



	return 0;
}