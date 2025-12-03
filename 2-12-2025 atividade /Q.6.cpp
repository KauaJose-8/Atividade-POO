#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums(8);

    std::cout << "Digite 8 numeros:\n";
    for (int i = 0; i < 8; i++) {
        std::cin >> nums[i];
    }

    int maior = nums[0], posMaior = 0;
    int menor = nums[0], posMenor = 0;

    for (int i = 1; i < 8; i++) {
        if (nums[i] > maior) {
            maior = nums[i];
            posMaior = i;
        }
        if (nums[i] < menor) {
            menor = nums[i];
            posMenor = i;
        }
    }

    std::cout << "\nMaior valor: " << maior << " na posicao " << posMaior;
    std::cout << "\nMenor valor: " << menor << " na posicao " << posMenor;

    return 0;
}
