#include <iostream>
using namespace std;

int main (){

    string name[4] = {"Ali", "Ahmad", "Sundas"};
    int age[4] = {19, 18, 17};
    float height[4] = {1.71, 1.83, 1.55};
    int weight[4] = {58, 72, 48};
    string uni[4] = {"UOL", "UOL", "FAST"};

    cout << "Name  Age  Height  Weight  University" << endl;
    cout << name[0] << "\t" << age[0] << "\t" << height[0] << "\t" << weight[0] << "\t" << uni[0] << endl;
    cout << name[1] << "\t" << age[1] << "\t" << height[1] << "\t" << weight[1] << "\t" << uni[1] << endl;
    cout << name[2] << "\t" << age[2] << "\t" << height[2] << "\t" << weight[2] << "\t" << uni[2] << endl;
    return 0;
} 