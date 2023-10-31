#include<stdio.h>
int main()
{
    float marks[5]={4.6,9.8,3.5,7.6,3.2};
    float max=marks[0]=4.6;

    int i;
    for ( i = 1; i < 5; i++)
    {
        if (marks[i]>max)
      
            max=marks[i];
   
    }
    printf("%f\n",max);
    return 0;
}
