#include <iostream>
using namespace std;
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";  
    }
    cout << endl; 
}
int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]); 
    printArray(numbers, arraySize);
    return 0;
}