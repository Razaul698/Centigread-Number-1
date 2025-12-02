#include<stdio.h>
#include<math.h>

int main()
{
    int centi;
    float f;

    printf("Enter Centigrade Number : ");
    scanf("%d", &centi);

    f = (centi * 1.8) + 32;

    printf("Now Ready : %.2f F\n", f);

    return 0;
}
