#include <stdio.h>
#include <stdbool.h> // En C23 'bool', 'true' y 'false' son palabras clave, pero se recomienda incluirlo por compatibilidad

int main() {
    // 1. Literales binarios (Característica de C23)
    int binario = 0b101010; 

    // 2. nullptr (C23 por fin introduce nullptr como en C++)
    int* puntero = nullptr;

    // 3. Atributos (como [[maybe_unused]])
    [[maybe_unused]] int variable_sin_uso = 10;

    printf("¡Hola desde C23!\n");
    printf("El valor binario es: %d\n", binario);

    if (puntero == nullptr) {
        printf("El puntero es nulo usando 'nullptr'.\n");
    }

    return 0;
}
