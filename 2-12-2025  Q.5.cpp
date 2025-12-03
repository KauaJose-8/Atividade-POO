#include <iostream>
#include <vector>

int main(){
    std::vector<int> numeros(6);
    int soma = 0;

    std::cout << "Digite 5 numeros: " << std::endl;

    for(int i = 0; i < 5; i++) {
        std::cin >> numeros[i];
        soma += numeros[i];
    }

    
    for(int i = 0; i < 5; i++) {
        std::cout << numeros[i] << "" << std::endl;
    }


    float media = soma / 5.0;

    std::cout << "Soma Total: " << soma << std::endl;
    std::cout << "Media Aritmetica: " << media << std::endl;

    return 0;
}
