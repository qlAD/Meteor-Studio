/*************************************************************************
* File Name: carrots.cpp
* Author: meteor
* mail: 3394543809@qq.com
* Created Time: Sat 14 Nov 2020 09:44:53 PM CST
 ************************************************************************/

// 使用变量
#include <iostream>

int main()
{
    using namespace std;
    
    int carrots;
    
    carrots = 25;
    cout << "我有 " << carrots << " 个萝卜。" << endl;

    carrots = carrots - 1;
    cout << "现在我吃掉一个。" << endl;
    cout << "请问我现在还剩下多少萝卜：" << endl;
    cin >> carrots;
    
    if (carrots == 24)
        cout << "回答正确！" << endl;
    else
        cout << "在想想吧。" << endl;

    cin.get();
    return 0;
}

