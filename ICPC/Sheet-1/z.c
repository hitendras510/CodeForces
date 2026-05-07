#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,d;
    scanf("%lf %lf %lf %lf", &a , &b , &c , &d);
 
    double x = b * log(a);
    double y = d * log(c);

    if( x > y){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;

}