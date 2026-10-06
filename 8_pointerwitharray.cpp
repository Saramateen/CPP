#include <iostream>
using namespace std;

int main() {
    // Initialize an array of 5 integers
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Declare a pointer and point it to the first element of the array
    // Both 'arr' and '&arr[0]' represent the base address
    int *ptr = arr; 

    cout << "Accessing array elements using pointer notation:\n";
    for (int i = 0; i < 5; i++) {
        // *(ptr + i) dereferences the pointer at the shifted memory address
        cout << "Element at index " << i << ": " << *(ptr + i) << "\n";
    }

    cout << "\nModifying the third element using the pointer...\n";
    *(ptr + 2) = 99; // Changes 30 to 99

    cout << "\nUpdated array elements:\n";
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << ptr[i] << "\n"; // Pointers can also use array syntax
    }

    return 0;
}
