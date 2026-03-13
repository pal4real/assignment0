#include <iostream>

int main(int argc, char ** argv) {
    
    std::string nama = "";
    
    std::cout << "Silakan input nama Anda: ";
    std::cin >> nama;

    std:: cout << "Hello " << nama;

    std::cin.get();
    std::cin.get();
    return 0;
}