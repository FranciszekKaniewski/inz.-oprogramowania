#include <iostream>

int main() {
    int value;
    std::cout << "Podaj liczbę całkowitą: ";
    std::cin >> value;
    if(value > 0){
        std::cout << "Wprowadzona liczba jest dodatnia" << std::endl;
        
        return 0;
    }
    std::cout << "Wprowadzona liczba to: " << value << std::endl;
    
    return 0;
}