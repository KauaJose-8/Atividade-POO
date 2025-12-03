#include <iostream>
#include <vector>

int main() {
    std::vector<int> valor_x(10);

    std::cout << "Digite 10 numeros: " << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cin >> valor_x[i];
    }

    int x;
    std::cout << "\nDigite o numero X que deseja procurar: ";
    std::cin >> x;

    bool procura = false;
    int pos = -1;

    for (int i = 0; i < 10; i++) {
        if (valor_x[i] == x) {
            procura = true;
            pos = i;
            break;
        }
    }

    if (procura) {
        std::cout << "\nX existe no vetor, posicao: " << pos;
    } else {
        std::cout << "\nX NAO existe no vetor, mano!.";
    }

    return 0;
}
