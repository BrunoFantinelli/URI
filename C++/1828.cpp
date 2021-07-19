#include <iostream>
using namespace std;

int main(){
    int testes;
    string shel,raj;
    cin >> testes;
    for(int i = 1; i <= testes; i++){
        cin >> shel >> raj;
        if(shel == raj){
        cout << "Caso #" << i << ": De novo!" << endl;
        }
        else if(shel == "tesoura" && raj == "papel"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }else if(raj == "tesoura" && shel == "papel"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }else if(shel == "papel" && raj == "pedra"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }else if(raj == "papel" && shel == "pedra"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }else if(shel == "pedra" && raj == "lagarto"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }else if(raj == "pedra" && shel == "lagarto"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }else if(shel == "lagarto" && raj == "Spock"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }else if(raj == "lagarto" && shel == "Spock"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }else if(shel == "Spock" && raj == "tesoura"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }else if(raj == "Spock" && shel == "tesoura"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }else if(shel == "tesoura" && raj == "lagarto"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }else if(raj == "tesoura" && shel == "lagarto"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }else if(shel == "lagarto" && raj == "papel"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }else if(raj == "lagarto" && shel == "papel"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }else if(shel == "papel" && raj == "Spock"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }else if(raj == "papel" && shel == "Spock"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }else if(shel == "Spock" && raj == "pedra"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }else if(raj == "Spock" && shel == "pedra"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }else if(shel == "pedra" && raj == "tesoura"){
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }else if(raj == "pedra" && shel == "tesoura"){
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }

    }
    return 0;
}