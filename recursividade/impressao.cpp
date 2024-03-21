#include <iostream>

using namespace std;

void impressao(int x){
    if (x == 1 || x == 0)  cout << x;

    else {
        impressao(x/2);
        cout << x%2;
    }
}

int main() {
    impressao(8);
    cout << "\n";
}