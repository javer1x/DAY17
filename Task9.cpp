#include <iostream> 
using namespace std; 
int findMax(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b; 
    }
    if (c > max) {
        max = c;  
    }
    return max;
}
int main() {
    int num1 = 10;  
    int num2 = 25; 
    int num3 = 15;  
    int maximum = findMax(num1, num2, num3);
    cout << "The largest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << maximum << endl;
    return 0;
}