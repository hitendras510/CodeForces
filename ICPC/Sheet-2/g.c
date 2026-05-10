#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main() {
    int a;
    scanf("%d ", &a);
    while(a--){
        int n;
        scanf("%d",&n);

        long long fact = 1;

        for(int i=1;i<=n;i++){
            fact *= i;
        }
        printf("%lld\n",fact);
    }
    return 0;
}