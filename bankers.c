#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct details{
    int acc_no;
    char name[20];
    char dob[20];
    int age;
    float number;
    int balance;
    char password[20];
};
void add(struct details acc[],int num)
{
    acc[num].acc_no=231423+num;
    printf("Enter your Name\n");
    scanf("%s",acc[num].name);
    printf("Enter date of birth(dd/mm/yyyy)\n");
    scanf("%s",acc[num].dob);
    printf("Enter your age\n");
    scanf("%d",&acc[num].age);
    printf("Enter your phone number\n");
    scanf("%lf",&acc[num].number);
    printf("Enter a password which would help you to provide security to your account\n");
    scanf("%s",&acc[num].password);
    acc[num].balance=0;

}
void update(struct details acc[],int num)
{
    int check,no,h,i;
    char pass[20];
   printf("enter your account number\n");
   scanf("%d",&check);
   hellll:
   for( i=0;i<num+1;i++)
   {
       if(check==acc[i].acc_no)
       {
           retry:
           printf("enter the password\n");
           scanf("%s",pass);
           if(strcmp(pass,acc[i].password)==0)
           {
               printf("Enter the option you want to update\n1.name\n2.number\n3.date of birth\n4.age\n");
               scanf("%d",&no);
               if(no==1)
               {
                   printf("Enter the name to updated\n");
                   scanf("%s",acc[i].name);
               }
               if (no==2)
               {
                   printf("Enter the phone number to be updated\n");
                   scanf("%f",&acc[i].number);
               }
               if(no==3)
               {
                   printf("Enter the date of birth(dd/mm/yyyy)\n");
                   scanf("%s",acc[i].dob);
               }
               if(no==4)
               {
                   printf("Enter the age to be updated\n");
                   scanf("%d",&acc[i].age);
               }
               printf("Account has been updated thank You\n");
               break;
           }
           else
           {
               printf("the password typed in is incorrect.\npls tryagain\n");
               goto retry;
           }
       }
       else
       {
           printf("the account number enetered doesnt exist \npls try Again\n");
           printf("the account number enetered doesnt exist \npls try Again\n");
           printf("enter 1 if you want to try again or 0 to go to main menu");
           scanf("%d",h);
           if(h=1)
           {
               goto hellll;
           }
           else {
               break;
           }
       }
   }

}
int dep(struct details acc[],int num)
{
    int check,amnt=0,ho,i;
    char pass[20];
     printf("enter the account number\n");
     scanf("%d",&check);
     he:
     for (i=0;i<num+1;i++)
     {
         if(check==acc[i].acc_no)
         {
             retrry:
             printf("Please enter the password\n");
             scanf("%s",&pass);
             if(strcmp(pass,acc[i].password)==0)
             {
                printf("Enter the amount to be Deposited\n");
                    scanf("%d",&amnt);
                    acc[i].balance+=amnt;
                    printf("Amount deposited in account\n Balance:%d\n",acc[i].balance);
                    break;
             }

         else
         {
             printf("Entered password is wrong\nPls try Again\n");
             goto retrry;
         }
         }
         else
       {
           printf("the account number enetered doesnt exist \npls try Again\n");
           printf("the account number enetered doesnt exist \npls try Again\n");
           printf("enter 1 if you want to try again or 0 to go to main menu");
           scanf("%d",ho);
           if(ho=1)
           {
               goto he;
           }
           else {
               break;
           }
       }

     }
     return 0;
}
int with(struct details acc[],int num)
{
int check,amnt,hoo,i;
    char pass[20];
     printf("enter the account number\n");
     scanf("%d",&check);
      hel:
     for ( i=0;i<num+1;i++)
     {
         if(check==acc[i].acc_no)
         {
             retrry:
             printf("Please enter the password\n");
             scanf("%s",&pass);
             if(strcmp(pass,acc[i].password)==0)
             {
                printf("Enter the amount to be withdrawn\n");
                    scanf("%d",&amnt);
                    if(amnt<=acc[i].balance)
                    {
                    acc[i].balance-=amnt;
                    printf("Amount withdrawn from account\n Balance:%d\n",acc[i].balance);
                    }
                    else if(amnt>acc[i].balance)
                    {
                        printf("insufficient funds\n\n");
                    }
                    break;
             }

         else
         {
             printf("Entered password is wrong\nPls try Again\n");
             goto retrry;
         }
         }
         else
       {
           printf("the account number enetered doesnt exist \npls try Again\n");
           printf("enter 1 if you want to try again or 0 to go to main menu");
           scanf("%d",hoo);
           if(hoo=1)
           {
               goto hel;
           }
           else {
               break;
           }
       }

     }
     return 0;
}
void clean(struct details acc[],int i)
{
    strcpy(acc[i].name,"");
    strcpy(acc[i].dob,"");
    acc[i].balance=0;
    acc[i].number=0;
    acc[i].age=0;
    acc[i].acc_no=0;
    strcpy(acc[i].password,"");
}
void delete(struct details acc[],int num)
{
   int check,hooo,i;
    char pass[20];
     printf("enter the account number\n");
     scanf("%d",&check);
     helll:
     for ( i=0;i<=num;i++)
     {
         if(check==acc[i].acc_no)
         {
             retrrry:
             printf("Please enter the password\n");
             scanf("%s",pass);
             if(strcmp(pass,acc[i].password)==0)
             {
                 if(i==num)
                 {
                     clean(acc,i);
                     --num;
                 }
                 else
                 {int loop=i;
                     for(;loop<num;loop++)
                     acc[loop]=acc[loop+1];
                     clean(acc,num);
                     --num;
                 }
                 printf("account has been deleted\n");
                 break;
             }
             else
         {
             printf("the account number enetered doesnt exist \npls try Again\n");
           printf("enter 1 if you want to try again or 0 to go to main menu");
           scanf("%d",hooo);
           if(hooo=1)
           {
               goto helll;
           }
           else {
               break;
           }
         }

         }
     }
}

void view(struct details acc[],int num)
{
int check,hoooo,i;
    char pass[20];
     printf("enter the account number\n");
     scanf("%d",&check);
     hell:
     for (i=0;i<=num;i++)
     {
         if(check==acc[i].acc_no)
         {
             rety:
             printf("Please enter the password\n");
             scanf("%s",pass);
             if(strcmp(pass,acc[i].password)==0)
             {
                 printf("%d",acc[i].acc_no);
                 printf("%s",acc[i].name);
                 printf("%s",acc[i].dob);
                 printf("%d",acc[i].age);
                 printf("%d",acc[i].balance);
                 printf("%f",acc[i].number);
             }
             else
         {
             printf("Entered password is wrong\nPls try Again\n");
             goto rety;
         }
         }
         else
       {
           printf("the account number enetered doesnt exist \npls try Again\n");
           printf("enter 1 if you want to try again or 0 to go to main menu");
           scanf("%d",&hoooo);
           if(hoooo=1)
           {
               goto hell;
           }
           else {
               break;
           }
       }

     }
}


int main()
{int n,num,noo,goo;
num=0;
struct details acc[num];
hello:

    printf("Choose the opertion\n1.add new acc\n2.update acc\n3.transactions\n4.delete acc\n5.view acc\n");
    scanf("%d",&n);
    system("clear");

    if(n==1)
    {
        add(acc,num);
        printf("\n\nyour account number is %d it will be useful for further processess\n\n",231423+num);
        num++;
        printf("\nif you want to go back to main menu pls press 1 to exit press 0\n");
         scanf("%d",&goo);
         if(goo=1)
         {
             system("clear");
         goto hello;
         }
    }
    else if(n==2)
    {
        update(acc,num);
        printf("\nif you want to go back to main menu pls press 1 to exit press 0\n");
         scanf("%d",&goo);
         if(goo=1)
         {
             system("clear");
             goto hello;

         }
    }
    else if(n==3)
    {
       printf("1.Deposit \n2.Withdraw\n");
       scanf("%d",&noo);
       if(noo==1)
       {
         dep(acc,num);
         printf("\nif you want to go back to main menu pls press 1 to exit press 0\n");
         scanf("%d",&goo);
         if(goo=1)
         {
             system("clear");
         goto hello;
         }
       }
       else if(noo==2)
       {
           with(acc,num);
           printf("\nif you want to go back to main menu pls press 1 to exit press 0\n");
         scanf("%d",&goo);
         if(goo=1)
         {
             system("clear");
             goto hello;

         }
       }
    }
    else if(n==4)
    {
        delete(acc,num);
        printf("\nif you want to go back to main menu pls press 1 to exit press 0\n");
         scanf("%d",&goo);
         if(goo=1)
         {
             system("clear");
             goto hello;

         }
    }
    else if(n==5)
    {
        view(acc,num);
        printf("\nif you want to go back to main menu pls press 1 to exit press 0\n");
         scanf("%d",&goo);
         if(goo=1)
         {
             system("clear");
            goto hello;

         }
    }

}
