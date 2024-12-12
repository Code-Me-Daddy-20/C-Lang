#include <stdio.h>
// arraydatatype arrayname[arraysize]={} 
int main()
{
    int a[5];
    printf("enter 5 students marks.");
    for (int i=0;i<5;++i)
    {
        scanf("%d",&a[i]);
    }

    double sum=0;
    
    for (int i=0;i<5;++i)
    {
        sum = a[i] + sum;

    }
    
    double avg=sum/5.0;
    printf("Total marks obtained= %lf\n",sum);
    printf("Avg. marks= %lf",avg);

}                                            