//Receber a entrada pelo teclado, valida, armazena, , exibe se tiver tudo certo

#include <iostream>
#include <string>
using namespace std; 

  int main(){
	  
    char usuarioValida = 'n';
    int id = 0;
    int x = 0, y = 0; // Usada para varrer o array
    int idade = 0;
    string usuarios[10][4];
    string nome = "";
    string email = "";
    
    do{

      do{
        // Define variável nome
        std::cout << "\ndigite seu nome: ";
        std::getline(std::cin, nome);
        
        // Define a variável idade
        std::cout << "\ndigite sua idade: "; 
        std::cin >> idade;
        std::cin.ignore();
        
        // Define variável email
        std::cout << "\ndigite seu email: ";
        std::getline(std::cin, email);

        // Exibe para confirmação
        std::cout << "\nnome: " << nome ;	
        std::cout << "\nidade: " << idade;
        std::cout << "\nemail: " << email << "\n";
        
        do{ // Valida os dados
        
          std::cout << "Os dados estão corretos? (y/n)\n Se digitado (n) os dados não serão salvos e o processo sera repetido\n :";
          std::cin >> usuarioValida;
          std::cin.ignore();
        
          if (usuarioValida != 'n' && usuarioValida != 'y'){
            std::cout << "\n !OPÇÃO INVALIDA \n";
          }  
          
      } while (usuarioValida != 'n' && usuarioValida != 'y'); //Repete até o usuário digitar uma opção valida
        
    } while (usuarioValida == 'n');
      
      id=+1;
    
      do{ // Pergunta se quer adicionar mais um usuário
          
        std::cout << "\nDeseja adicionar mais um usuário? (y/n) \n : ";
        std::cin >> usuarioValida;
        std::cin.ignore();
      
        if (usuarioValida != 'n' && usuarioValida != 'y'){
          std::cout << "\n !OPÇÃO INVALIDA \n";
        }  
        
      } while (usuarioValida != 'n' && usuarioValida != 'y'); //Repete até o usuário digitar uma opção valida
    
    } while (usuarioValida == 'y'); // Repete até o usuário digitar n
    
    // Exibe o array usuarios
    for (const auto& row : usuarios) {   // Itera sobre cada linha
        for (const std::string& element : row) { // Itera sobre cada coluna
            if(element == ""){return 0;}
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
  }
