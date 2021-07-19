#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    int testes;
    int k = 0;
    char entrada[100];
    string resultado;
    cin >> testes;
    cin.ignore();

    for(int i = 0; i < testes; i++){
        scanf(" %[^\n]", entrada);
        resultado = "";
        for(int z = 0; z < strlen(entrada); z++){
            if(entrada[z] == 'G' || entrada[z] == 'Q' || entrada[z] == 'a' || entrada[z] == 'k' || entrada[z] == 'u'){
                resultado += '0';
                k++;
            }else if(entrada[z] == 'I' || entrada[z] == 'S' || entrada[z] == 'b' || entrada[z] == 'l' || entrada[z] == 'v'){
                resultado += '1';
                k++;
            }else if(entrada[z] == 'E' || entrada[z] == 'O' || entrada[z] == 'Y' || entrada[z] == 'c' || entrada[z] == 'm' || entrada[z] == 'w'){
                resultado += '2';
                k++;
            }else if(entrada[z] == 'F' || entrada[z] == 'P' || entrada[z] == 'Z' || entrada[z] == 'd' || entrada[z] == 'n' || entrada[z] == 'x'){
                resultado += '3';
                k++;
            }else if(entrada[z] == 'J' || entrada[z] == 'T' || entrada[z] == 'e' || entrada[z] == 'o' || entrada[z] == 'y'){
                resultado += '4';
                k++;
            }else if(entrada[z] == 'D' || entrada[z] == 'N' || entrada[z] == 'X' || entrada[z] == 'f' || entrada[z] == 'p' || entrada[z] == 'z'){
                resultado += '5';
                k++;
            }else if(entrada[z] == 'A' || entrada[z] == 'K' || entrada[z] == 'U' || entrada[z] == 'g' || entrada[z] == 'q'){
                resultado += '6';
                k++;
            }else if(entrada[z] == 'C' || entrada[z] == 'M' || entrada[z] == 'W' || entrada[z] == 'h' || entrada[z] == 'r'){
                resultado += '7';
                k++;
            }else if(entrada[z] == 'B' || entrada[z] == 'L' || entrada[z] == 'V' || entrada[z] == 'i' || entrada[z] == 's'){
                resultado += '8';
                k++;
            }else if(entrada[z] == 'H' || entrada[z] == 'R' || entrada[z] == 'j' || entrada[z] == 't'){
                resultado += '9';
                k++;
            }
            if(k == 12){
                break;
            }
        }
        cout << resultado << endl;
        k = 0;
    }
}