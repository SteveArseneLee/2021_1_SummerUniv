#include <stdio.h>
int main(){
    int i,max;
    int nums[5] = {2,19,1,27,16};
    for(i=0;i<=4;i++)
        printf("nums[%d] is %2d\n", i,nums[i]);
    max = nums[0];
    for(i=1;i<5;i++)
    {
        if(max<nums[i])
            max = nums[i];
    }
    printf("최대값은 %d",max);
}