// select_sort.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



void select_sort(vector<int> &arr)
{
	int j=0;
	for (int i = 0; i < arr.size(); i++) {
		for ( j = i + 1; j < arr.size(); j++) {//将最小的元素移到最后位置
			if (arr[j] > arr[j - 1])
			{
				swap(arr[j - 1], arr[j]);
			}
	 }
		swap(arr[i], arr[j-1]);//循环最后一次执行了j++,超出数组的范围
	}
}


int main()
{

	vector<int> arr = { 2,3,6,6,7,1,1,8,4,5,9 };
	select_sort(arr);

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << ends;
	}
}
