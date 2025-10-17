#include<stdio.h>
 struct marks
{
    int math;
    float science;
    int english;

};
void main()
{
    struct marks manu={90,10,20};
    printf("math=%d,science=%d,english=%d\n",manu.math,manu.science,manu.english);

}
