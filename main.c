/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************B.bhagyasri****************************************************/
#include <stdio.h>

void swap(int *array, int i, int j)
{
int temp = array[i];
array[i] = array[j];
array[j] = temp;
}
void seperateZero(int *array, int size)
{
   int right, left = -1;
    for(right = 0; right < size; right++)
    {
     if(array[right] != 0)
         swap(array, ++left, right);
    }
}

int main()
{
    int array[5] = {30,0,4,0,6}; 
    int i;
     
    seperateZero(array,5);

    for(i = 0; i < 5; i++)
    {
     printf("%d ", array[i]);
    }

    return 0;
}