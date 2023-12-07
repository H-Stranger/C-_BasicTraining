//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//    /*********Begin*********/
//    int area;
//    float weight, price = 0;
//    scanf("%d,%f", &area, &weight);
//    weight = ceil(weight);
//    switch (area)
//    {
//    case 0:
//        price = 10.0 + 3 * (weight - 1);
//        break;
//    case 1:
//        price = 10.0 + 4 * (weight - 1);
//        break;
//    case 2:
//        price = 15.0 + 5 * (weight - 1);
//        break;
//    case 3:
//        price = 15.0 + 6.5 * (weight - 1);
//        break;
//    case 4:
//        price = 15.0 + 10 * (weight - 1);
//        break;
//    default:
//        printf("Error in Area\n");
//        printf("Price: 0.00\n");
//        return;
//    }
//    printf("Price: %.2f\n", price);
//
//
//
//    /*********End**********/
//    return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int area;
//    float weight, price = 0;
//    scanf("%d,%f", &area, &weight);
//    if (area < 0 || area > 4)
//    {
//        printf("Error in Area\n");
//    }
//    else if (area == 0)
//    {
//        if (weight < 1)
//        {
//            price = 10;
//        }
//        else
//        {
//            weight = ceil(weight);
//            price = 10 + (weight - 1) * 3;
//        }
//    }
//    else if (area == 1)
//    {
//        if (weight < 1)
//        {
//            price = 10;
//        }
//        else
//        {
//            weight = ceil(weight);
//            price = 10 + (weight - 1) * 4;
//        }
//    }
//    else
//    {
//        if (weight < 1)
//        {
//            price = 15;
//        }
//        else
//        {
//            if (area == 2)
//            {
//                weight = ceil(weight);
//                price = 15 + (weight - 1) * 5;
//            }
//            else if (area == 3)
//            {
//                weight = ceil(weight);
//                price = 15 + (weight - 1) * 6.5;
//            }
//            else
//            {
//                weight = ceil(weight);
//                price = 15 + (weight - 1) * 10;
//            }
//        }
//    }
//    printf("Price: %.2f\n", price);
//    return 0;
//}