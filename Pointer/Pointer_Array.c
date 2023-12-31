#include <string.h>

int array[5] = {0x1, 0x2, 0x3, 0x4, 0x5};

int twoDimensional[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

int main(void)
{
    
    double *pnt_array = array;
    printf("array[5] : ");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", pnt_array[i]);
    }
    printf("\n\n");
    printf("pnt_array : ");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", array[i]);
    }

    int a = sizeof(pnt_array);
    int b = sizeof(array);
    printf("\n\n");
    printf(" 배열의 포인터 값은 배열의 요소 값이다\n");
    if (*(array + 1) == array[1])
    {
        printf("*(array+1) == array[1] ,  *(array+1) : %d", *(array + 1));
    }

    printf("\n\n 배열의 이름은 배열의 시작 주소값을 나타내는 포인터이다 \n");
    if (pnt_array + 1 == array + 1)
    {
        printf("pnt_array +1 == array +1 ,  array +1 : %#x\n", array + 1);
    }
    printf("\n\n\n");




    int(*pnt_array_2)[3] =twoDimensional; // 포인터에 배열의 주소를 할당  열의 개수로 포인터 크기 설정 

    int pnt_value = pnt_array_2[0][3]; // (*pnt_array_2)를 사용하여 요소에 접근
    int value = twoDimensional[0][1];

    printf("pnt_array_2[0][1] : %d\n", pnt_array_2[0][1]);
    printf("pnt_array_2[2][3] : %d\n", pnt_array_2[2][3]);
    printf("twoDimensional[0][1] : %d\n", twoDimensional[0][1]);
    printf("twoDimensional[2][3] : %d\n", twoDimensional[2][3]);


 
    int num = 10;         	// 변수 선언

void* ptr_num = &num;          // void 포인터 선언

*(int*)ptr_num = 20;	// 명시적 타입 변환  후 포인터를 통한 메모리 접근 
 
printf("ptr_num에저장된 값은 %d입니다.\n", *(int*)ptr_num); 
printf("%d\n", ptr_num);  
printf("%d\n", num); 
   return 0;
}
