#include <iostream>
using namespace std;

int main(){
    int n=0;

    for(int i = 0;i<=15;i+=n){
        cout << i << endl;

        n+=i;
    }

    return 0;
}
