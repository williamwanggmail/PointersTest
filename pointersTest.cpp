
#include <stdio.h>
#define SIZE 5
void bubleSort(int  *);
void PrintArray(int *);
int main() {
	//指標
	int a = 5;       // a 是整數變數，值為 5
	int* b = &a;     // b 是指向整數的指針，指向變數 a 的地址
	int c = (int)b;  // c 是整數，儲存指針 b 的地址，必須進行類型轉換
	int d = *b;      // d 是整數，儲存指針 b 所指向的變數 a 的值，即 5

	// 正確的格式化輸出指針地址
	printf("a=%d\nb=%p\nc=%d\nd=%d\n", a, b, c, d);
	// 請注意：%p 用於輸出指針地址


	int arr[SIZE] = { 3,2,5,4,1};
	bubleSort(arr);
	PrintArray(arr);
}

void bubleSort(int  *arr) {//排序
	void swap(int*, int*);
	int i, j;
	for (i = 0; i < SIZE - 1; i++) {
		for (j = 0; j < SIZE - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

void swap(int *a,int *b) {//交換位置
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void PrintArray(int *arr) {//印出陣列
	int i;
	for (i = 0; i < SIZE; i++) {
		printf("%d", arr[i]);
	}
}