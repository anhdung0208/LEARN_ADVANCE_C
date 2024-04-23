#include<stdio.h>
#include "fucntion.h"

#define MAX 20
#define sum(a,b) a+b

// Để tránh việc xảy ra lỗi khi định nghĩa 2 lần macro sẽ khai báo 2 hàm có cùng tên nên xảy ra lỗi nên cần làm cách 2 (Test bằng gcc -E Lesson_1_Macro.c -o Lesson_1_Macro.i) 

// Cách 1
#define DISPLAY(cmd) \
void print_messege() \
{                     \
 printf("cmd");\
}

// Cách 2

#define DISPLAY(nameFunc,cmd) \
void nameFunc() \
{                     \
 printf("cmd");\
}

// Cách 3
#define DISPLAY(nameFunc,cmd) \
void nameFunc() \
{                     \
 printf("#cmd");\ // với dấu thăng khi ta khởi tạo macro thì ta k cần dấu ngoặc kép để thể hiện là 1 chuỗi bởi vì # là format của chuỗi 
}

// Cách 4
//Tạo biến với macro chú ý khi viết macro trên 2 dòng thêm dấu "\""
#define CREATE_VARIABLE(name)\
int int##_name;\
double double##_name;

/**
 * Cách 5
 * 
 */




DISPLAY(test1,"This is the ");
DISPLAY(test2,"This is the 1 ");

int main()
{
     test1();
     test2();

     //int ARR[MAX];
     //int result = sum(1,2);
      
     //printf( "%d",result); 
     //print_test();
}