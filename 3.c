/*****************************************
    Content： 
    給你一連串的正整數，請你找出比某個數大和小的數各有幾個。
    Input：
    一開始有一個正整數 N (1<=N<=10)，代表後面會出現幾個數字，接下來即是這 N 個整數。最後有一個正整數 M，代表要比較的數。
    Output：
    請輸出兩個整數，第一個數字為比 M 大的數的個數，第二個數字為比 M 小的數的個數，中間請空一格。

    註：出現的數字中，可能會有重覆或是等於 M 的值。

    Sample Input：help

    輸入1:
    3 1 4 3 2

    輸入2:
    5 5 4 3 2 1 4
    Sample Output ：

    輸出1:
    2 1

    輸出2:
    1 3
*****************************************/
#include<stdio.h>
int main(){
    int a[10] = {1,4,3,2};
    int i,n = 3,maxm = 0,mini = 0;
    /*for(i = 0; i <= n; i++){
        scanf("%d",&a[i]);
    }*/
    for(i = 0; i < n; i++){
        if(a[n] < a[i]) maxm++;
        if(a[n] > a[i]) mini++;
    }
    printf("%d %d",maxm,mini);
}
