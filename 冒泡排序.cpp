#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ð���������
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i, j, tmp, sz;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	//ð����������
//	for (i = 0; i < sz - 1; i++)
//	{//ÿһ��ð������
//   //ȷ��ÿһ���˵��ڲ��жϽ����������Ż�����
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


//ð��������ʵ��
void bubble_sort(int arr[],int sz)
{
	int i = 0, j;
	/*int sz = sizeof(arr) / sizeof(arr[0]);*///��Ϊ���ι�ȥ����������Ԫ�ص�ַ����ַ��Ҫһ��ָ�����������
	for (i = 0; i < sz - 1; i++)          //sz���Ϊָ��������ֽڳ�����Ԫ�ش�С,sz��Ҫ���ⲿ����
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
	//��arr���ε�ʱ�򴫹�ȥ����������Ԫ�صĵ�ַ &arr[0]
	bubble_sort(arr,sz);//ð�ݺ�������szҲ����
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}