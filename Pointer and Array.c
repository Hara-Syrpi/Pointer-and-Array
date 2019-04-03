/* LAB #2 - Example #2 */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Greek");

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int *ptr;
    int i;
    int len;

    ptr = arr; /* Assign the address of the first element of the array to the pointer */
    len = sizeof(arr)/sizeof(int); /* Υπολογίζω το μήκος, δηλαδή τη χωρητικότητα του πίνακα */

    for(i = 0; i<len; i++)
    {
        if(arr[i]%2 == 0) /* Check if the element is even */
            {
            printf("arr[%d] = %d \t", i, arr[i]);
            printf("ptr + %d = %p \t", i, ptr + i);
            printf("*(ptr + %d) = %d \n", i, *(ptr + i) );
            }
    }
    return 0;
}
