#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int sum=1;
    int n;
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        int rem=n%10;
        sum+=rem;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
} 