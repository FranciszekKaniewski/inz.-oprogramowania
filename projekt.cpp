#include <iostream>

bool czy_pierwsza(int liczba) {
    if (liczba <= 1) return false;
    for (int i = 2; i * i <= liczba; ++i) {
        if (liczba % i == 0) return false;
    }
    return true;
}

int main() {
    int value;
    std::cout << "Podaj liczbę całkowitą: ";
    std::cin >> value;
    if(value > 0){
        std::cout << "Wprowadzona liczba jest dodatnia" << std::endl;
        
        return 0;
    }
    std::cout << "Wprowadzona liczba to: " << value << std::endl;

    czy_pierwsza(value) ? std::cout << "Liczba " << value << " jest liczbą pierwszą." << std::endl :
        std::cout << "Liczba " << value << " nie jest liczbą pierwszą." << std::endl;

    return 0;
}