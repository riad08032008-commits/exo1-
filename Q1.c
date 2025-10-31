#include <stdio.h>
int main() {
    double a,x=1;
    int N,i;
do{
    printf("please entre a positive number: ");
    scanf("%lf",&a);
}while(a<=0);
do{
    printf("please entre an intger: ");
    scanf("%d",&N);
}while(N<0);
    for (int i = 1; i<=N; i++){
        x = x*a;
    }
    printf("%.2lf ^ %d = %.2lf ", a, N, x);


    return 0;
}