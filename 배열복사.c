#include <stdio.h>
void copyarray(int from[], int to[], int n);

int main(){
    int a[] = {1,2,3,4,5,6};
    int b[] = {10,20,30,40,50,60};
    copyarray(a,b,sizeof(a)/sizeof(a[1]));
    printf("b[] = ");
    for(int i =0;i<6;i++)
        printf("%d ", b[i]);
    printf("\n");
    return 0;
}
void copyarray(int from[], int to[], int n)
{
    for(int i=0;i<n;i++)
        to[i] = from[i];
}

