//Nopphalit,Fumction//
#include<stdio.h>

void main(){

    system("cls");

    int num1, num2, i, choose_option;
    float base,height;

    do{
        printf("Choose Your Option\n");
        printf("1.Multtiplication\n2.Calculate Triangular area\n3.Calculate factorial\n4.Exit\n");
        scanf("%d",&choose_option);

        if(choose_option == 4)
                break;
        
        switch (choose_option)
        {
        case 1:
            printf("Enter num1: "); scanf("%d",&num1);
            for(i=1;i<13;i++)
                printf("%d x %d = %d\n",num1,i,i*num1);
            break;
        case 2:
	        printf("Enter base : ");
            scanf("%f", &base);
            printf("Enter height : ");
            scanf("%f", &height);
            printf("\nArea of a Triangle is %.2f \n\n", 0.5 * base * height);
            break;
        case 3:
            printf("Enter a num1 : ");
            scanf("%d", &num1);
            int sum = 1;
            for (i = 1; i <= num1; i++){
            sum *= i;
            }
            printf("%d! = %d\n",num1,sum);
            break;
        case 4:
            break;
        default:
            printf("Invalid Choose Option\n");
            break;
        }

    }while(choose_option != 4);
    

}