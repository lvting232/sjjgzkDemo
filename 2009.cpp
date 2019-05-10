#include "stdafx.h"

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//void initArray(int a[], int n, int r){
//	int k; long now;
//	srand(time(NULL)); /* 用时间初始化随机数发生函数的初态*/
//	for(k = 0; k < n; k++) 
//		/* 产生n个0..r-1以内的随机数 */
//		a[k] = rand() % r; /* 调用随机函数 */
//}

//通过随机数初始化数据
void initArray(int a[],int n,int r)
{
	srand(time(NULL));
	for(int k =0;k<n; k++)
	{
		a[k]= rand()%r;
	}
}
void writeArray(int a[], int n, int c){
	for(int k = 0; k < n; k++){
		if(k && k % c == 0)//一行输出c个整数，k是c的倍数的时候 换行
			printf("\n");
		printf("%5d", a[k]);//每个数占5列，不到5列前面空格
	}
	printf("\n");
}
void insertSort(int * e, int n){ //加星号标识E是数组、本质上是指针
	int i, j; int temp;
	for(i = 1; i < n; i++) { 
       temp=e[i];j=i-1;
       while(j>=0 && temp<e[j]){
              e[j+1]=e[j];j--;
	   }
    e[j+1]=temp;
	}
}
int x[20];
void main(){
	initArray(x, 20, 100);
	printf("排序前的序列：\n");	writeArray(x, 20, 10);
	insertSort(x,20); //调用插入排序函数
	printf("排序后的序列：\n");	writeArray(x, 20, 10);
}
