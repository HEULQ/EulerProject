/*************************************************************************
	> File Name: day1test2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年11月17日 星期六 14时24分59秒
 ************************************************************************/
//1000以内3和5的倍数的总和（优化版）
#include<iostream>
using namespace std;
int main(){
    int sum3 =(3 + 999) * 333 / 2;
    int sum5 = (5 + 995) * 199 / 2;
    int sum15 = (15 + 999 / 15 * 15) * (999 / 15) / 2;
    printf("%d", sum3 + sum5 - sum15);
}