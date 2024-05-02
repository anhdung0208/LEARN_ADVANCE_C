// #include<stdio.h>
// #include<stdint.h>
// #include "fucntion.h"

// #define MAX 20
// #define sum(a,b) a+b

// /**
//  * Macro chỉ được định nghĩa 1 lần
//  * 
//  */



// // Để tránh việc xảy ra lỗi khi định nghĩa 2 lần macro sẽ khai báo 2 hàm có cùng tên nên xảy ra lỗi nên cần làm cách 2 (Test bằng gcc -E Lesson_1_Macro.c -o Lesson_1_Macro.i) 

// // Cách 1
// // #define DISPLAY(cmd) \
// // void print_messege() \
// // {                     \
// //  printf("cmd");\
// // }

// // Cách 2

// // #define DISPLAY(nameFunc,cmd) \
// // void nameFunc() \
// // {                     \
// //  printf("cmd");\
// // }

// // Cách 3
// // #define DISPLAY(nameFunc,cmd) \
// // void nameFunc() \
// // {                     \
// //  printf("#cmd");\ // với dấu thăng khi ta khởi tạo macro thì ta k cần dấu ngoặc kép để thể hiện là 1 chuỗi bởi vì # là format của chuỗi 
// // }

// // Cách 4
// //Tạo biến với macro chú ý khi viết macro trên 2 dòng thêm dấu "\""
// // #define CREATE_VARIABLE(name)\
// // int int##_name;\
// // double double##_name;

// /**
//  * Cách 5: IF ELSE với Macro
//  * 
//  * 
//  */

// //DISPLAY(test1,"This is the ");
// //DISPLAY(test2,"This is the 1 ");
// //================================================================================//
// #define STM32F103 0
// #define STM32F104 1 


// /** VA_ARGS trong macro giúp việc sử dụng và thực thi các hàm hay tính năng có các tham số truyền vào linh hoạt
//  * và không có kichs thước đingj nghĩa sẵn
//  * Var_list với macro dùng để khai báo và sử dụng tạo ra một hàm với các tham số truyền vào linh hoạt
//  * 
//  */

// // #define SUM(...) \
// // void sumArr()\
// // {\
// //    int arr[] = {__VA_ARGS__}; \
// //    int sum = 0;   \
// //    for (int  i = 0; i < 5; i++) \
// //    { \
// //      sum+= arr[i]; \
// //    } \
// //   printf("%d",sum); \ 
// // }
// //================================================================================//

// /**
//  * Pratice with VAR_ARGS (MENU)
//  * 
//  */
// #define PRINT_MENU_ITEM(number, item) printf("%d. %s\n", number, item)
// #define PRINT_MENU(...) \
// do \
// { \
//      const char* items[] = {__VA_ARGS__}; \
//      int sizeArr = sizeof(items)/sizeof(items[0]); \
//      for (int i = 0; i < sizeArr; i++) \
//      { \
//           PRINT_MENU_ITEM( i + 1,items[i]);\
//      } \   
// } while (0);

// #define CASE_OPTION(number_case,name_function) case number_case : name_function() ; break;
// #define HANDLE_OPTION(option, ...) \
//     switch (option) { \
//         __VA_ARGS__ \
//         default: printf("Invalid option!\n"); \
//     }



// void feature1() { printf("Feature 1 selected\n"); }
// void feature2() { printf("Feature 2 selected\n"); }
// void feature3() { printf("Feature 3 selected\n"); }
// void feature4() { printf("Feature 4 selected\n"); }


// int main(int argc ,char const *argv[])
// {
//      //test1();
//      //test2();

//      //int ARR[MAX];
//      //int result = sum(1,2);
      
//      //printf( "%d",A3); 
//      //print_test();

//      //SUM(1,2,1,1,1);
//      //sumArr();


//      PRINT_MENU("Option 1", "Option 2", "Option 3","Option4", "Exit")
//      int option ;
//      scanf("%d", &option);
//      HANDLE_OPTION(option,CASE_OPTION(1,feature1))

//  return 0;
// }