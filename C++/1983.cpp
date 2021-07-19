#include <iostream>
using namespace std;

struct aluno{
    int mat;
    float nota;
};

int main(){
    aluno alunos[100];
    int qtd;
    float mat_maior = 0, not_maior = 0;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        cin >> alunos[i].mat;
        cin >> alunos[i].nota;
        if(alunos[i].nota > not_maior){
            mat_maior = alunos[i].mat;
            not_maior = alunos[i].nota;
        }
    }

    if(not_maior >= 8){
        cout << mat_maior << endl;
    }else{
        cout << "Minimum note not reached" << endl;
    }
    return 0;
}
