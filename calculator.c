#include<stdio.h>
float addition(float x,float y){
    return x+y;
}
float subtraction(float x,float y){
    return x-y;
}
float multiplication(float x,float y){
    return x*y;
}
float division(float x,float y){
    return x/y;
}
int main(){
printf("\nif you want to perform addition give  input 1\n");
printf("if you want to perform subtraction give  input 2\n");
printf("if you want to perform multiplication give input 3\n");
printf("if you want to perform division give input 4\n");
int a;
float x,y;
printf("\ngive your input for the selected process: ");
scanf("%d",&a);
if(a>5 || a<0){
 printf("wrong input number");
 return 0;
}
printf("\nenter your first number : "); 
scanf("%f",&x);
printf("\nenter your second number: ");
scanf("%f",&y);
switch(a){
    case 1:
         printf("your result is %.3f",addition(x,y));
         break;
    case 2:
        printf("your result is %.3f",subtraction(x,y));
        break;
    case 3:
        printf("your result is %.3f",multiplication(x,y));
        break;
    case 4:
        printf("your result is %.3f",division(x,y));
        break;
}
    return 0;
}