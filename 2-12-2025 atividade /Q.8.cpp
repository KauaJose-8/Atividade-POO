#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> nomes(6);

    std::cout << "Digita 6 nomes:\n";
    for (int i = 0; i < 6; i++) {
        std::cin >> nomes[i];
    }

    std::string busca;
    std::cout << "\nDigite um nome pra buscar ai: ";
    std::cin >> busca;

    bool existe = false;

    for (int i = 0; i < 6; i++) {
        if (nomes[i] == busca) {
            existe = true;
            break;
        }
    }

    if (existe) {
        std::cout << "\nO nome existe no vetor! mano!";
    } else {
        std::cout << "\nO nome NAO existe no vetor! mano!";
    }

    return 0;
}
