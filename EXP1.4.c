/*Write a program to enter the temperature in degree Celsius and display it in Fahrenheit 
and vice-versa.*/
#include<stdio.h>
#include<math.h>
#include<conio.h>

void main(){
    float celsius, farnite, f,c;
    printf("enter celsius:");
    scanf("%f",&celsius);
    farnite=1.8*celsius +32;
    printf("farinte is: %f",farnite);

    printf("\nenter farinte:");
    scanf("%f",&f);
    c =(5.0/9.0)*(f - 32);
    printf("celsius is :%f",c);
    getch();
}