// является ли максимальный элемент последовательности чётным

#include <iostream>
using namespace std;
int main()
{
    int n,x,max;
    max = INT_MIN;
    printf("vvedite dlinnu posledovatel'nosti\n");
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &x);
        if (max < x)
        {
            max = x;
        }
        printf("%d\n", max);
    }
    if (max%2==0)
    {
        printf("yavlyaetsa");
    }
    else
    {
        printf("ne yavlyaetsa");
    }
    return 0;
}

