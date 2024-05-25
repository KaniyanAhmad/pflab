#include<iostream>
using namespace std;

float BMICalculator(float h, int w){
    return h/(w*w);

}

int main (){

    string name[5];
    int age[5];
    float height[5];
    int weight[5];

    for(int i =0; i < 5; i ++){
        cout << "Enter Name Friend - " << i;
        getline(cin, name[i]);
        cout << "Enter age of " << name[i];
        cin << age[i];
        cout << "Enter Height of " << name[i];
        cin << height[i];
        cout << "Enter Weight of " << name[i];
        cin << weight[i];
    }

    for(int j = 0; j < 5; j++){
        cout << "Name\tAge\tBMI" << endl;
        cout << name[j] << age[j] << BMICalculator(height[j], weight[j]) << endl;
    }

    
    return 0;
}

