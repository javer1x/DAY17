#include<iostream>
using namespace std;
void greet(string msg= "Guest"){
    cout<< msg <<endl;
}
int main() {
    greet();
    greet("Hello,Javeria!");
    return 0;
    }