#include <stdio.h>
int main()
{
    int array[30] = {0};
    int userinput;
    printf("Type 2 for economy class: ");
    scanf("%d", &userinput);
    if (userinput == 2)
    {
        printf("Select seat number(31-100):    ");
        for (int i = 31; i < 100; i++)
        {
            scanf("%d", &array[i]);
            if (array[i] >= 31 && array[i] <= 100)
            {
                printf("Your seat in economy class\n");
                printf("Your seat no is: %d", array[i]);
                break;
            }
            else
            {
                printf("Error!Invalid input");
                break;
            }
        }
    }
    else
    {
        printf("Error!inavalid input\n");
    }
    return 0;
}