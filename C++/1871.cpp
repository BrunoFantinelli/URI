#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	int v1, v2;
	int resultado;
	string fim;
    while(true){
	cin >> v1 >> v2;
    if(v1 == 0 && v2 == 0){
        break;
    }
	resultado = v1 + v2;

	std::stringstream resp;
	resp << resultado;

	fim = resp.str();
	for(int i = 0; i < fim.length(); i++){
        if(fim[i] != '0'){
            cout << fim[i];
        }
	}
    cout << endl;
    }
}
