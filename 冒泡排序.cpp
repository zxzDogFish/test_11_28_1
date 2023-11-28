#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//冒泡排序代码
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i, j, tmp, sz;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	//冒泡排序趟数
//	for (i = 0; i < sz - 1; i++)
//	{//每一趟冒泡排序
//   //确定每一大趟的内部判断交换次数，优化代码
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j+1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//冒泡排序函数实现
void bubble_sort(int arr[],int sz)
{
	int i = 0, j;
	/*int sz = sizeof(arr) / sizeof(arr[0]);*///因为传参过去的是数组首元素地址，地址需要一个指针变量来接收
	for (i = 0; i < sz - 1; i++)          //sz结果为指针变量的字节除以首元素大小,sz需要从外部接受
	{                                     //
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
		    }
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i, j, sz, tmp;
	sz = sizeof(arr) / sizeof(arr[0]);
	//对arr传参的时候传过去的是数组首元素的地址 &arr[0]，,为了节省空间，不在函数中另外开辟存放数组的空间
	bubble_sort(arr,sz);//冒泡函数，将sz也传参
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
