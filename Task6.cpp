#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    int number = 10; 
    int result;  
    result = fibonacci(number);
    cout << "The " << number << "-th Fibonacci number is: " << result << endl;
    return 0;
}