#define _CRT_SECURE_NO_WARNINGS



#pragma once


#include<iostream>
using namespace std;

int pation(int arr[],int left,int right)
{
	int count = 0;  //统计是否交换
	int key = arr[right];
	int begin = left;
	int end = right-1;
	while (begin<end)
	{
		//begin右移找比key大的
		while(begin<end && arr[begin]<key)
		{
			begin++;
		}
		//end左移找比key小的
		while(begin<end && arr[end]>key)
		{		
			end--;
		}
		if(begin<end)
		{
			std::swap(arr[begin],arr[end]);
			begin++;
			end--;
			count++;
		}

	}
	if(begin!=right && arr[right]<arr[begin])
	{
		std::swap(arr[begin],arr[right]);
		count++;

	}
	if(begin==end && count == 0)
	{
       return begin+1;
	}
	return begin;
}


void QuickSort(int arr[],int left,int right)
{
	if(left<right)
	{
		int ret = pation(arr,left,right);
		QuickSort(arr,left,ret-1);
		QuickSort(arr,ret+1,right);
	}
}




