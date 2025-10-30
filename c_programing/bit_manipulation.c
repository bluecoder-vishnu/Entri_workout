#include<stdio.h>
void temp(int a,int b)
{
   int i,mask;
   mask=1<<b;
    a=a|mask;
   for(i=31;i>=0;i--)
   {
       printf("%d", (a>>i)&1);
   }


}
void toggle_bit(int a,int c)
{
    int mask;
    mask=1<<c;
    a=a^mask;
    printf("number after toggling the bit is %d\n", a);
}

int main()
{
    int a,b,c;
    printf("enter the number");
    scanf("%d", &a);
    printf("enter the position to set the bit");
    scanf("%d", &b);
    printf("position to toggle the bit");
    scanf("%d", &c);
    temp(a,b);
    return 0;

}