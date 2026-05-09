#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main() {
    int n;
    scanf("%d", &n);

    int x;
    int max;

    scanf("%d", &max);

    for(int i=1;i < n;i++){
        scanf("%d",&x);

        if(x > max){
            max = x;
        }
    }
    printf("%d\n",max);

    return 0;
}