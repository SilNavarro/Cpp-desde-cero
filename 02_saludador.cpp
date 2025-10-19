// Incluimos <iostream> para cout y cin
// Incluimos <string> para poder usar variables de texto (string)
#include <iostream>
#include <string>

int main() {
    
    // 1. Declaramos una variable de tipo 'string' (texto)
    //    llamada 'nombre'. Ahora mismo está vacía.
    std::string nombre;

    // 2. Imprimimos una pregunta en la consola
    std::cout << "Hola! Como te llamas? ";

    // 3. Usamos 'std::cin' para capturar lo que el usuario
    //    escriba y guardarlo DENTRO de nuestra variable 'nombre'.
    std::cin >> nombre;

    // 4. Imprimimos un saludo personalizado usando el
    //    contenido de la variable 'nombre'.
    std::cout << "Un gusto conocerte, " << nombre << "!" << std::endl;
    
    return 0;
}