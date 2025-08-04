#include<stdio.h>

void fuc(int x)
{
    x=30;
}
int main()
{
    int y=20;
    fuc(y);
    printf("%d",y);
    return 0;

}