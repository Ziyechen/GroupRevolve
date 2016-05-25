#pragma once

//把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
//输入一个递增排序的数组的一个旋转，输出旋转数组的最小元素。
//例如:数组{3, 4, 5, 1, 2}是数组{1, 2, 3, 4, 5}的一个旋转，该数组的最小元素为1

#include <assert.h>

int MinInOrder(int *a, int left, int right)
{
	assert(a);

	int ret = a[left];
	for (int i = left; i <= right; i++)
	{
		if (ret > a[i])
			ret = a[i];
	}

	return ret;
}

int Min(int *a, int size)
{
	assert(a);
	assert(size > 0);

	int left = 0;
	int right = size - 1;

	//数组由两个递增数组组成
	//a[left]在第一个递增数组中向右走，a[right]在第二个递增数组中向左走
	while (a[left] >= a[right])
	{
		int mid = left + (right - left) / 2;

		//如果右边与左边相邻为1，那么a[right]为最小值
		if (right - left == 1)
			break;
		
		//如果a[left]、a[mid]和a[right]三个值都相等的话，只能顺序查找
		if (a[left] == a[mid] && a[right] == a[mid])
			return MinInOrder(a, left, right);

		if (a[mid] >= a[left])
		{
			left = mid;
		}
		else if (a[mid] <= a[right])
		{
			right = mid;
		}
	}

	return a[right];
}
