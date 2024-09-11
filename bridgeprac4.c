#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Num: ");
    scanf("%d" ,&num);
    if(num>=0){
        printf("positive");
    }
    else{
        printf("not positive");
    }
    return 0;
}