#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include<iostream>
void BubbleSort(int arr[],int size)
{
	for(int i=0; i<size-1; ++i)//×Ü¹²Ã°ÅÝsize-1´Î
		for(int j=0; j<size-1-i; ++j)
		{
			if(arr[j]>arr[j+1])
			{
				std::swap(arr[j],arr[j+1]);
			}
		}
}