#include <stdio.h>
int main()
{
    int arr[5] = {[0]=1, [1]=44, [4]=55};
    for (int i=0; i<5; i++){
        printf("arr[i]%d\n", arr[i]);
    }
    return 0;

}