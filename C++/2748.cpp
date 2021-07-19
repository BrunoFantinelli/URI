#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 39; i++){
            cout << "-";
    }
    cout << endl;
    for(int i = 0; i < 39; i++){
        if(i == 0 || i == 38){
            cout << "|";
        }else if(i == 9){
            cout << "R";
        }else if(i == 10){
            cout << "o";
        }else if(i == 11){
            cout << "b";
        }else if(i == 12){
            cout << "e";
        }else if(i == 13){
            cout << "r";
        }else if(i == 14){
            cout << "t";
        }else if(i == 15){
            cout << "o";
        }else{
            cout << " ";
        }
    }
    cout << endl;
    for(int i = 0; i < 39; i++){
        if(i == 0 || i == 38){
            cout << "|";
        }else{
            cout << " ";
        }
    }
    cout << endl;
    for(int i = 0; i < 39; i++){
        if(i == 0 || i == 38){
            cout << "|";
        }else if(i == 9){
            cout << "5";
        }else if(i == 10){
            cout << "7";
        }else if(i == 11){
            cout << "8";
        }else if(i == 12){
            cout << "6";
        }else{
            cout << " ";
        }
    }
    cout << endl;
    for(int i = 0; i < 39; i++){
        if(i == 0 || i == 38){
            cout << "|";
        }else{
            cout << " ";
        }
    }
    cout << endl;
    for(int i = 0; i < 39; i++){
        if(i == 0 || i == 38){
            cout << "|";
        }else if(i == 9){
            cout << "U";
        }else if(i == 10){
            cout << "N";
        }else if(i == 11){
            cout << "I";
        }else if(i == 12){
            cout << "F";
        }else if(i == 13){
            cout << "E";
        }else if(i == 14){
            cout << "I";
        }else{
            cout << " ";
        }
    }
    cout << endl;

    for(int i = 0; i < 39; i++){
            cout << "-";
    }
    cout << endl;
    return 0;
}
