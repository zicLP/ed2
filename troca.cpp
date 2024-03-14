#include <iostream>


template<typename T>
void troca(T& a, T& b){
    T aux = a;
    a = b;
    b = aux;
}


int main(){
    int a = 2;
    int b = 5;

    std::cout << a << " " << b << "\n";
    troca(a,b);
    std::cout << a << " " << b << "\n";

    float f1 = 2;
    float f2 = 5;

    std::cout << f1 << " " << f2 << "\n";
    troca(f1,f2);
    std::cout << f1 << " " << f2 << "\n";



}