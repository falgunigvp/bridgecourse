#include <stdio.h>
int main(){
    int len,wid,area;
    printf("Enter the len of the rectangle: ");
    scanf("%d",&len);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &wid);
    area= len*wid;
    printf("%d", area);
    return 0;
}