/*************************************************************************
*File Name: cubic.cpp
*Author: Meteor
*mail: 3394543809@qq.com
*Created Time: Sat 12 Dec 2020 08:34:02 PM CST
 ************************************************************************/
#include <iostream>
#include <math.h>
int main()
{
    using namespace std;
    long long a,b,c0,c1,c2,c3;
    cout << "三次公式有：" << endl;
    cout << "   (A+B)³=A³+3A²B+3AB²+B³" << endl;
    cout << "   (A-B)³=A³-3A²B+3AB²-B³" << endl;
    cout << "   A³+B³=(A+B)(A²-AB+B²)" << endl;
    cout << "   A³-B³=(A-B)(A²+AB+B²)" << endl;
    cout << "===========================================" << endl;
    cout << "验证如下：" << endl;
    cout << "   请输入A的值：" ;
    cin >> a;
    cout << "   请输入B的值：" ;
    cin >> b;
    cout << "===========================================" << endl;
    cout << "已知A = " << a << " , B = " << b << "。" << endl;
    cout << "则：" << endl;
    c0 = pow((a+b),3);
    cout << "   (" << a << "+" << b << ")³=" << a << "³+3*" << a << "²*" << b << "+3*" << a << "*" << b << "²+" << b << "³=" << c0 << endl;
    c1 = pow((a-b),3);
    cout << "   (" << a << "-" << b << ")³=" << a << "³-3*" << a << "²*" << b << "+3*" << a << "*" << b << "²-" << b << "³=" << c1 << endl;
    c2 = pow(a,3) + pow(b,3);
    cout << "   " << a << "³+" << b << "³=(" << a << "+" << b << ")(" << a << "²-" << a << "*" << b << "+" << b <<"²)=" << c2 << endl;
    c3 = pow(a,3) - pow(b,3);
    cout << "   " << a << "³-" << b << "³=(" << a << "-" << b << ")(" << a << "²+" << a << "*" << b << "+" << b << "²)=" << c3 << endl;
    cin.get();
    return 0;
}

