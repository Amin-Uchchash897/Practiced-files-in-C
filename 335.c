/*
    Write a C program the function takes a string of characters with name as parameter.
    When the function is called, we pass along a name, which is used inside the function
    to print "Hello" and the name of each person.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

void stringReceiver(char a[], char b[])
{
    printf("Hello there! This is %s.\
    Nice to meet you\t",
           a);
    printf("\n%s is learning %s.\n", a, b);
}

int stringReceiverTwo(int x)
{
    return x;
}

int main()
{
    char userName[50], userName2[50];
    printf("Plese enter the user's name : ");
    gets(userName);
    gets(userName2);
    char status[100], status2[100];
    printf("Status : ");
    gets(status);
    gets(status2);
    int userContact, userContact2;
    printf("Please provide the user contacts here : ");
    scanf("%d %d", &userContact, &userContact2);

    stringReceiver(userName, status);
    stringReceiver(userName2, status2);
    printf("%s's contact info is : %d\n", userName, stringReceiverTwo(userContact));
    printf("%s's contact info is : %d\n", userName2, stringReceiverTwo(userContact2));

    getch();
}
