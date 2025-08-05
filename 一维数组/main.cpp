//
// Created by 86176 on 2025/7/26.
//
#include<iostream>
using namespace std;
int main(){
    int a[10] = {8, 6, 4 ,2, 9, 7, 5, 3, 1,0};
    printf("排序前的数组为：");
    for(int i = 0; i <= 9; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    for(int i = 0; i < 10-1; i++){
        for(int j = 0; j <= 9 - i - 1 ; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("排序后的数组为：");
    for(int i = 0; i <= 9; i++){
        printf("%d ", a[i]);
    }
    //return 0;
}