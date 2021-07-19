#include <iostream>
using namespace std;

int main(){
    long long int i,n,n1;
	long long int f1,f2;
	f1=f2=1;
	while(cin >> n >> n1){
        for(i=1; i<=n; i++){
			f1=f1 * i;
		}
		for(i=1; i<=n1; i++){
			f2=f2 * i;
		}
        long long int soma = f1+f2;
        cout << soma << endl;
		f1=f2=1;
	}
 
    return 0;
}