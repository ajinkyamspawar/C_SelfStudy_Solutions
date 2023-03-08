#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
main()
{
int a,b;
system("cls");
printf("Enter any two numbers to get its sum and then press enter");
scanf("%d%d",&a,&b);
gotoxy(25,8);
printf("sum of %d and %d is %d",a,b,a+b);
getch();
}
