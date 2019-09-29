#include<stdio.h>
#include<string.h>
#define SIZE 20
 
struct bookdetail
{
          char name[20];
          char author[20];
          int pages;
          float price;
 
};
 
void output(struct bookdetail v[],int n);
 int main()
{
          struct bookdetail b[SIZE];
 
          int num,i;
          printf("Enter the Numbers of Books:");
          scanf("%d",&num);
          printf("\n");
          for(i=0;i<num;i++)
 
          {
 
                   printf("\t=:Book %d Detail:=\n",i+1);
 
                   printf("\nEnter the title:\n");
                   scanf("%s",b[i].name);
 
                   printf("Enter the Author of Book:\n");
                   scanf("%s",b[i].author);
 
                   printf("Enter the genere of book:\n");
                   scanf("%d",&b[i].pages);
          }
 
          output(b,num);
}
void output(struct bookdetail v[],int n) 
{

          int i,t=1;
          for(i=0;i<n;i++,t++)
          {
                    printf("\n");
                   printf("Book No.%d\n",t);
                   printf("\t\tBook %d title is=%s \n",t,v[i].name);
                   printf("\t\tBook %d Author is=%s \n",t,v[i].author);
                   printf("\t\tBook %d genere is=%d \n",t,v[i].pages);
 
                   printf("\n");
 
          }
 
}
 
