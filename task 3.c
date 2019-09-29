#include<stdio.h>
#include<conio.h>
    int main()
    {
        int math,phy,chem,sum;
        float avg;
        printf("\n Enter math Marks : ");
        scanf("%d",&math);
        printf("\n Enter phy Marks : ");
        scanf("%d",&phy);
        printf("\n Enter chem Marks : ");
        scanf("%d",&chem);
        sum = math+phy+chem;
        printf("\n\n sum of three subjects %d ",sum);
        avg = sum/3;
        printf("\n\n average of three subjects %2.f",avg);
        getch();
    }
