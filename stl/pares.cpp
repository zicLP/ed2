#include <iostream>
#include <vector>

using namespace std;

vector<int> pares(const vector<int>& vec){
    vector<int> aux;

    for(int e : vec){
        if (e % 2 == 0){
            //cout << e << ", ";
            aux.push_back(e);
        }
    }
    return aux;
}

int main()
{
    vector<int> v = {0,2,1,4,7};

    vector<int> par = pares(v);
    
    for(int i : par){
        cout << i << ", ";
    }
    cout << "\n";
    
}