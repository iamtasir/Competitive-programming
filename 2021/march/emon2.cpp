
/*Write a user defined function that receives two character parameter
from the main function and performs swapping. Now you can see
the changing result from the main function.*/
#include<stdio.h>
char swap(char* char_1 , char* char_2){
        char temp ;
        temp = *char_1; //1=1
        *char_1 = *char_2;//1=2
        *char_2 = temp ;//2=1

}
int main(){
    char first_name,last_name;
    printf("Enter two character :\n");

    scanf("%c %c",&first_name, &last_name);

     swap(&first_name , &last_name);
    printf("first_name = %c \nlast_name = %c \n",first_name , last_name);

}
