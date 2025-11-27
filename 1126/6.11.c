#include <stdio.h>

void bubbleSort(int array[], int size);
void printArray(int array[], int size);
int SIZE,counter=0;

int main() 
{
	printf("你的陣列有幾筆數值?\n"); 
	scanf("%d",&SIZE);
	int data[SIZE];
	printf("輸入%d個整數的陣列，各個數值間以空格隔開:\n",SIZE);
	
	for(int h= 0;h<SIZE;h++)
	{ 
	scanf("%d",&data[h]);
	} 
    
	printf("\n陣列:\n");
    printArray(data, SIZE);
    bubbleSort(data, SIZE);
    printf("\n\n最終結果:");
    printArray(data, SIZE);

    return 0;
}

void bubbleSort(int array[], int size) 
{
    int pass,i,temp;

    for (pass = 0; pass < size - 1; pass++) 
	{
        for (i = 0; i < size - 1 - pass; i++) 
		{
            if (array[i] > array[i+1])
			{
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                counter++;
                printf("第%d次交換\n",counter);
                for (int i = 0; i < SIZE; i++) 
				{
        		printf("%d ", array[i]);
    			}
    			printf("\n");
            }
        }
    }
}

void printArray(int array[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
