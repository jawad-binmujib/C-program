#include<stdio.h>
int main(){
    int n2;
    scanf("%d", &n2);
    for (int i = 1; i <= n2; i ++){
        for (int j = i; j >= 1; j-- ){
            printf("%d",j);
        }
        printf("\n");
    }
}