#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <iostream>

void AdjustDown(int arr[],int root, int size)
{
	int parent = root;
	int child = root*2+1;
	while (child<size)
	{
		if(child+1<size && arr[child]>arr[child+1])
		{
			child +=1;
		}
		if(arr[parent]>arr[child])
		{
			std::swap(arr[parent],arr[child]);
			parent = child;
			child = parent*2+1;
		}
		else
			break;
	}
}


void HeapSort(int arr[], int size)
{
	while(size>0)
	{
		for(int idx=(size-2)/2; idx>=0; --idx)
		{
			AdjustDown(arr,idx,size);
		}

		std::swap(arr[0],arr[size-1]);
		size--;
	}
}