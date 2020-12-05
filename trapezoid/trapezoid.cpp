/*************************************************************************
*File Name: trapezoid.cpp
*Author: Meteor
*mail: 3394543809@qq.com
*Created Time: Sat 05 Dec 2020 10:00:41 PM CST
 ************************************************************************/
#include <iostream>
#include <math.h>
#include <time.h>
int main()
{
    using namespace std;
    
    clock_t starttime,endtime;
    starttime = clock();
    
    double up;
    double down;
    double high;
    double S;
    
    cout << "已知梯形的上底为：" << endl; 
    cin >> up;
    cout << "下底为：" << endl; 
    cin >> down;
    cout << "高为：" << endl;
    cin >> high;
    
    S = (up+down)*high/2;
    cout << "则面积为：("<< up << "+" << down  << ")*" << high << "/2 = "  << S << endl; 
    
    endtime = clock();
    cout << "程序总用时" << double(endtime - starttime)/CLOCKS_PER_SEC<< "秒" << endl;
    return 0;
}

