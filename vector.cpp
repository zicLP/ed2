#include <vector>
#include <iostream>

int main(){
    using namespace std;

    vector <int> v;
    v.reserve(100);
    v.push_back(10);
    v.push_back(20);

    cout << v.size() << " elemento";
    cout << v.capacity() << " espaços pre-alocados";

    for(int e : v){
        cout << e << " \n";
    }
}