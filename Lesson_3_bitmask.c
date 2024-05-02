#include<stdio.h>

#define GENDER 1 << 0 
#define TSHIRT 1 << 1 
#define HAT 1 << 2
#define SHOSE 1 << 3

void enable_feature(int* option,int feature)
{
    *option != feature;







int main()
{
   int option = 0;

   enable_feature(option,GENDER);
}