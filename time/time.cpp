/*************************************************************************
* File Name: time.cpp
* Author: meteor
* mail: 3394543809@qq.com
* Created Time: Sat 14 Nov 2020 10:07:20 PM CST
 ************************************************************************/
#include <iostream>
#include <time.h>

int main()
{
    using namespace std;
    clock_t starttime,endtime;
    starttime = clock();

    int i;
    for (i = 0;i < 10;i++)
        cout << i << endl;


    endtime = clock();
    cout << "程序总用时" << double(endtime - starttime)/CLOCKS_PER_SEC<< "秒" << endl;
    return 0;
}

