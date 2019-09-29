#include<stdio.h>
#include<math.h>
float c,f;
int choice;
int main()

{

    printf("enter 1 for converting celsius to fahrenheit and 2 for farenheit to celsius ");
    scanf("%i",&choice);

    if (choice==1)
    {

        printf("enter celsius ");
        scanf("%f",&c);
        }
    if (choice==2)
    {  
        printf("enter fahrenheit ");
        scanf("%f",&f);
    }
    switch(choice)
        {
        case 1:f=((9.0/5.0) * c) + 32.0;
                printf("the temprature in fahrenheit is %f: ",f);
                break;
        case 2:c=((f-32)*5)/9;
                printf("the temperature in celsius id %f: ",c);
                break;
        default:
                printf("invalid number");
        }
return 0;
}

