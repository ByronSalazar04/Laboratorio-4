#include <iostream>
#include <cmath>
//
float realizarOperacion(float num1, float num2, char operador);
void imprimirResultado(float resultado);

int main() {
    int cantidad_operaciones;
    std::cout << "Ingrese la cantidad de operaciones a realizar: ";
    std::cin >> cantidad_operaciones;
    
    for (int i = 0; i < cantidad_operaciones; ++i) {
        float num1, num2, resultado;
        char operador;
        
        std::cout << "Ingrese la operación en el formato (número1 operador número2): ";
        std::cin >> num1 >> operador >> num2;
        
        resultado = realizarOperacion(num1, num2, operador);
        imprimirResultado(resultado);
    }
    
    return 0;
}

float realizarOperacion(float num1, float num2, char operador) {
    switch (operador) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num1 / num2;
        case '%': return fmod(num1, num2);
        default: 
            std::cout << "Operador no válido.\n";
            return 0;
    }
}

void imprimirResultado(float resultado) {
    std::cout << "El resultado es: " << resultado << std::endl;
}


