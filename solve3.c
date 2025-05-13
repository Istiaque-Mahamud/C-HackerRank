#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    float c,d;
    scanf("%f%f",&c,&d);
    int sum = a+b;
    int sub = a-b;
    float fsum=c+d;
    float fsub=c-d;

    printf("%d %d\n",sum,sub);
    printf("%.1f %.1f",fsum,fsub);

    return 0;
}