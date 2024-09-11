#include<stdio.h>
int main(){
    int Marks;
    printf("Enter Student's marks: ");
    scanf("%d", &Marks);
    if(Marks>=40){
        printf("Congrates you passed the exam");
    }
    else{
        printf("Ow oho you are fail!!");
    }
    return 0;
}