/*************************************************************************
*File Name: round.cpp
*Author: Meteor
*mail: 3394543809@qq.com
*Created Time: Sat 05 Dec 2020 09:44:41 PM CST
 ************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const double Pi = 3.1415;
    double area;
    double r;
    double C;
    printf("请输入圆的面积：\n");
    scanf("%lf",&area);
    r = sqrt(area/Pi);
    C = 2*r*Pi;
    printf("圆的周长为%.2lf.\n",C); 

    return 0;
}

