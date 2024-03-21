#include <iostream>

int mult(int a, int b){
    if(a == 0 || b == 0) return 0;
    if(a==1) return b;

    return mult(a-1, b)+b;
}

int main(){
    int a = 10;
    int b = 5;

    std::cout << mult(a,b) << " \n";

}