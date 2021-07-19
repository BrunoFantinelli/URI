#include <math.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){

    int i,num,count=0,j,n,root=0;
        cin >> num;
        for(j = 0;j < num;j++){
                cin >> n;
                if(n==0 || n==1)
                printf("Not Prime\n");

                else{
                 count=1;
                root = sqrt(n);
                  for(i=2;i<=root;i++){
                              if(n%i==0){
                              count=0;
                              break;
                              }
                  }
                  if(count==1)
                  cout << "Prime" << endl;
                  else
                  cout << "Not Prime" << endl;
            }
        }
    return 0;
}

