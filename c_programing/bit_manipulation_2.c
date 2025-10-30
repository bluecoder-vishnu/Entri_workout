#include<stdio.h>
void temp(int a)
{
   int i,mask,set_bit_count=0;

   
   for(i=31;i>=0;i--){
   
        mask=1<<i;
        if((a & mask)!=0)
        {
            set_bit_count++;
        }
       printf("%d", (a>>i)&1);
   }
    printf("\nNumber of set bits: %d\n", set_bit_count);
}
int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d", &a);
    temp(a);
    return 0;
}