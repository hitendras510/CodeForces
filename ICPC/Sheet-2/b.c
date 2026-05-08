#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main() {
    int a;

    scanf("%d", &a);

    if(a<2){
        printf("-1\n");
        return 0;
    }

    for(int i=2;i <= a;i+=2){
        printf("%d\n",i);
    }
    return 0;
}