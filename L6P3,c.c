main()
{
    int x,y,max;
    system("cls");
    printf("Enter two number");
    scanf("%d %d",&x,&y);
    max=x>y ? x : y;
    printf("Greater Number is %d", max);
    getch();
}
