#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1,d2,m1,m2,y1,y2;

    for(int i=0;i<40;i++)
    {
        printf("--");
    }
    printf("\n\t\t\t\xB3\xB2=\xB2=\xB2-\xB3 AGE CALCULATOR \xB3\xB2=\xB2=\xB2-\xB3\n\n");
      for(int i=0;i<40;i++)
    {
        printf("--");
    }
    printf("\n\n");

    printf("\t:::::BIRTH DATE:::::\n");
    printf("\n");
    printf("ENTER YOUR BIRTH DATE = ");
    scanf("%d",&d1);
    printf("_____________________________\n");
    printf("\n");
    printf("ENTER YOUR BIRTH MONTH = ");
    scanf("%d",&m1);
    printf("_____________________________\n");
    printf("\n");
    printf("ENTER YOUR BIRTH YEAR = ");
    scanf("%d",&y1);
    printf("\n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\n");

    printf("\t:::::CURRENT DATE:::::\n");
    printf("\n");
    printf("ENTER CURRENT DATE = ");
    scanf("%d",&d2);
    printf("_____________________________\n");
    printf("\n");
    printf("ENTER CURRENT MONTH = ");
    scanf("%d",&m2);
    printf("_____________________________\n");
    printf("\n");
    printf("ENTER CURRENT YEAR = ");
    scanf("%d",&y2);
    printf("\n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

    if(d1==d2 && m1==m2)
    {
        printf("TODAY IS YOUR BIRTHDAY..!\n");
    }
    printf("\n");
    if(d2>=d1)
    {
        d2=d2-d1;
    }
    else
    {
        m2--;
        d2+=30;
        d2=d2-d1;
    }

    if(m2>=m1)
    {
        m2=m2-m1;
    }
    else
    {
        y2--;
        m2+=12;
        m2=m2-m1;
    }
    y2-=y1;
    printf("CALCULATED AGE.....\n");
    printf("\n");
    printf("YOUR PRESENT AGE IS:\n");
    printf("YOUR AGE IS  %d YEARS | %d MONTHS | %d DAYS\n",y2,m2,d2);
    printf("\n");

    m2=11-m2;
    d2=30-d2;
    printf("YOUR NEXT BIRTHDAY IN  %d MONTHS | %d DAYS",m2,y2);
    return 0;
}
