#include<stdio.h>
int  main()
{
	int age;
	double phonenumber;
	char name[10];
printf("Enter you name:");
scanf("%s",&name);
printf("enter your age:");
scanf ("%d",&age);
printf("enter your phone number");
scanf("%lf",&phonenumber);
printf("name is %s",name);
printf("\nnumber  is %lf",phonenumber);
printf("\nage is %d",age);
return 0;
}
