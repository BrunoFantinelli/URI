#include <iostream>
using namespace std;


int josephus(int n,int k){
      if(n==1){
        return 1;
      }
      else{
        return (josephus(n-1,k)+k-1)%n+1;
      }
}

int main(){
    int testes,n,k,i;
    cin >> testes;
        for(i=1;i <= testes;i++){
            cin >> n >> k;
            int res = josephus(n,k);
            cout << "Case " << i << ": " << res << endl;
        }
    return 0;
}

