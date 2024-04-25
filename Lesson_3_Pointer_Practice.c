#include <stdio.h>



/**
 * Function Pointer
 * Funcntion Pointer là con trỏ chứa địa chỉ của một hàm 
 * 
 *
 */

// Example Code
 // sử dụng do..while giúp cho macro hoạt động giống như một câu lệnh duy nhất 
#define CALCULATOR(name_function, value_1, value_2) \
    do {                                            \ 
        void (*ptr_calculator)(int, int);           \
        ptr_calculator = &name_function;            \
        int temp_value_1 = value_1;                \
        int temp_value_2 = value_2;                \
        ptr_calculator(temp_value_1, temp_value_2);\
    } while(0)

void sum(int a, int b)
{
      printf("Result sum %d: ",a + b);
}

void multiplication(int a, int b)
{
      printf("Result multiplication %d: ",a * b);
}

void divide(int a, int b)
{
      printf("Result devide : %f",a / b);
}

void subtraction(int a, int b)
{
      printf("Result subtraction : %d",a - b);
}



int main()
{
    CALCULATOR(sum, 5, 2);
    CALCULATOR(multiplication, 5, 2);
    CALCULATOR(divide, 5, 2);
    CALCULATOR(subtraction, 5, 2);
}