#include <stdio.h>

int main()
{
    int nums[9] = {13, 11, 15, 9, 7, 5, 8, 3, 1};
    int n;

    printf("== Zibril Yuan A - 02 - GTA-09 ==\n");
    n = mys(nums, 9);
    printf("%d\n", n);
    //cout << n << endl; 
    return 0;
}

int mys(int array[], int len)
{
    int n = 1;
    for (int i = 1; i < len; i++)
    if (array[i] < array[i - 1])
    n++;
    else
    n = 1;
    return n;
}