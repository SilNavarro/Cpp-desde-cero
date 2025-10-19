#include <iostream>

int main() {
    
    // 1. Declaramos tres variables de tipo 'int' (número entero)
    int numeroA;
    int numeroB;
    int resultado;

    // 2. Pedimos el primer número
    std::cout << "--- Mini Calculadora (Suma) ---" << std::endl;
    std::cout << "Escribe el primer numero: ";
    
    // 3. Guardamos el primer número en la variable 'numeroA'
    std::cin >> numeroA;

    // 4. Pedimos el segundo número
    std::cout << "Escribe el segundo numero: ";

    // 5. Guardamos el segundo número en la variable 'numeroB'
    std::cin >> numeroB;

    // 6. ¡La magia! Calculamos la suma y la guardamos en 'resultado'
    resultado = numeroA + numeroB;

    // 7. Mostramos el resultado final
    std::cout << "Perfecto! El resultado de " << numeroA << " + " << numeroB << " es: " << resultado;
    
    return 0;
}