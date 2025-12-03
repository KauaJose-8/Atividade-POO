int main(){
    std::vector<int> numeros(6);

    std::cout << "Digite 5 numeros: " << std::endl;

    for(int i = 0; i < 5; i++) {
        std::cin >> numeros[i];
    }

    for(int i = 0; i < 5; i++) {
        std::cout << numeros[i] << "" << std::endl;
    }

    return 0;
}
