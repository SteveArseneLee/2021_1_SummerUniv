#include <stdio.h>
int isequalarray(int a[], int b[], int n);

int main(){
    int a[] = {1,2,3,4,5};
    int b[] = {1,2,3,4,5};

    int result = isequalarray(a,b,sizeof(a)/sizeof(a[1]));
    if(result) printf("두 배열은 같다.\n");
    else printf("두 배열은 다르다\n");
    return 0;
}

int isequalarray(int a[], int b[], int n)
{
    for(int i = 0;i<n;i++)
        if(a[i] != b[i])
            return 0;
    return 1;
}
