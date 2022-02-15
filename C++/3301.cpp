#include <iostream>

using namespace std;

int main() {
    int h,z,l;
    cin >> h >> z >> l;
    if((h > l && h < z) || (h < l && h > z)){
        cout << "huguinho" << endl;
    }else if ((l > h && l < z) || (l < h && l > z)){
        cout << "luisinho" << endl;
    }else{
        cout << "zezinho" << endl;
    }

    return 0;
}
