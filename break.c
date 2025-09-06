// how break is used in c language
#include <stdio.h>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break; // breaks the loop when i equals 5
        }
        printf("Value of i: %d\n", i);
    }
    return 0;
}