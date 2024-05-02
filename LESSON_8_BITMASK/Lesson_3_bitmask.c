#include<stdio.h>
#include<stdint.h>

#define GENDER 1 << 0 
#define TSHIRT 1 << 1 
#define HAT 1 << 2
#define SHOSE 1 << 3


#define PRINT_NAME_FEATURE(index, condition) \
    do {                                       \
        if (index == 0 && condition == 1) {     \
            printf("GENDER ON\n");               \
        } else if (index == 1 && condition == 1) {  \
            printf("TSHIRT ON\n");                 \
        }  else if (index == 2 && condition == 1) {  \
            printf("HAT ON\n");                 \
        }                                                              \              
       } while(0)


void enable_feature(uint8_t *option,uint8_t feature)
{
    *option |= feature;
}
void disable_feature(uint8_t *option ,uint8_t feature)
{
  *option &= ~feature;
}

void print_feature(uint8_t option)
{
    for (int i = 0; i < 8; i++)
    {
       //printf("\nStatus Feature (%s):  %d ", PRINT_NAME_FEATURE(option),((option >> i) & 1));
       PRINT_NAME_FEATURE(i,(option >> i) & 1);
    }
    
}




int main()
{
   uint8_t option = 0;

   enable_feature(&option,GENDER);
   enable_feature(&option,HAT);
   enable_feature(&option,TSHIRT);
   disable_feature(&option,GENDER);



   print_feature(option);
}