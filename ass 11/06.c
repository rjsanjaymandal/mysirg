#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter the no ==>> ");
    int no, sum = 1;
    scanf("%d", &no);
    while (no > 0)
    {
        sum = sum * no;
        no--;
    }
    printf("%d\n", sum);
    getch();
    return 0;
}