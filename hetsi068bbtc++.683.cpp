#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    char name[] = "PDEU";
    int i = 0;
    system("cls");
    while(name[i]!= '\0')
    {
        i++;
    }
    printf("Original String:%s\n",name);
    printf("Length=%d\n",i);
    getch();
}
