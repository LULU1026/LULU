//
// Created by 86176 on 2025/7/26.
//
#include<iostream>
using namespace std;
int main(){
    int a[10] = {8, 6, 4 ,2, 9, 7, 5, 3, 1};
    cout << "排序前的数组为：" << endl;
    for(int i = 0; i < 10; i++){
        cout << a[i] << " ";
    }
    cout << endl << "排序后的数组为：" << endl;
    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        cout << a[i] << " ";
    }
    //return 0;
}