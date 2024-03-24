#include <iostream>

int main() {
    int n;
    
    // Solicitar al usuario el tamaño del arreglo
    std::cout << "Ingrese el tamaño del arreglo: ";
    std::cin >> n;
    
   
    int *arr = new int[n];
    
    
    std::cout << "Ingrese los elementos del arreglo:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    
   
    std::cout << "Los elementos del arreglo son:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    
    delete[] arr;
    
    return 0;
}

