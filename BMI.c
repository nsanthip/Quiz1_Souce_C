//Nopphalit,BMI//
#include <stdio.h>

int main()
{
    float weight,height,calbmi;
    printf ("Enter Weight(kg) : ");
    scanf("%f",&weight);
    printf ("Enter height(cm) : ");
    scanf("%f",&height);
    height = height/100 ;
    calbmi = weight/(height*height);
    printf("BMI : %f\n",calbmi);
    
    if(calbmi >= 30) //อ้วน
        printf("You have fat");
    else if(calbmi >= 25) //เกินพิกัด
        printf("You have Overload");
    else if(calbmi >= 20) //สุขภาพดี
        printf("You have Good health");
    else //ต่ำกว่าพิกัด
        printf("You have Below the rating");
    
}