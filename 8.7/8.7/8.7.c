#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int* p = arr;
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
        printf("%d ", *(p+i));
        printf("%d ", *(arr + i));
        printf("%d ", p[i]);
    }
        return 0;
}
//二维数组
//void print1(int arr[3][5], int x, int y)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < x; i++)
//    {
//        for (j = 0; j < y; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//void print2(int(*p)[5], int x, int y)
//{
//    int i = 0;
//        int j = 0;
//        for (i = 0; i < x; i++)
//        {
//            for (j = 0; j < y; j++)
//            {
//               /* printf("%d ", *(*(p+i)+j));*/
//                printf("%d ", (*(p + i))[j]);
//            }
//            printf("\n");
//        }
//}
//int main()
//{
//    int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6}, {3,4,5,6,7} };
//    /*print1(arr, 3, 5);*/
//    print2(arr, 3, 5);
//    return 0;
//}


//int main()
//{
//    int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//    int(*p)[10] = &arr;//数组的地址用指针来表示，数组指针
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", *(arr+i));//*p=arr
//    }
//   /* for (i = 0; i < 10; i++)
//    {
//        printf("%d ", (*p) [i]);
//    }*/
//    return 0;
//}
//int main()
//{
//    int arr1[] = {1,2,3,4,5};
//    int arr2[] = {2,3,4,5,6};
//    int arr3[] = {3,4,5,6,7 };
//    int* arr4[] = { arr1,arr2,arr3 };
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 5; j++)
//        {
//            int ret = *(arr4[i] + j);
//            printf("%d ", ret);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//int main()
//{
//    char arr1[] ="abcdef";
//    char arr2[]= "abcdef";
//    char *p1= "abcdef";
//    char* p2 = "abcdef";//这个相当于地址在同一个位置都使用它
//    //cahr*p="abcdef"----"abcdef"是一个常数字符串相当于在前面有一个const这个
//    /*if (arr1 == arr2)
//    {
//        printf("hehe");
//
//    }
//    else
//    {
//        printf("haha");
//    }*/
//    if (p1 == p2)
//    {
//        printf("hehe");
//
//    }
//    else
//    {
//        printf("haha");
//    }
//    return 0;
//}


//int main()
//{
//    int n = 9;
//  float* pa =( float*) &n;
//    printf("%d\n", n);
//    printf("%f\n", *pa);
//    *pa = 9.0;
//    printf("%d\n", n);
//    printf("%f\n", *pa);
//    return 0;
//}