#include <stdio.h>
#include <stdint.h>
#include <string.h>


typedef union 
{
    struct 
    {
       uint8_t id[2];
       uint8_t name[4];
       uint8_t checkSum[3];
       //uint8_t checkSum_2[2];
    } data; 

    uint8_t frame[19];
    
} data_frame;



int main()
{
      printf("size:%d",sizeof(data_frame));

     data_frame transmit_data;


      strcpy(transmit_data.data.id,"10"); 
      strcpy(transmit_data.data.name,"70"); 
      strcpy(transmit_data.data.checkSum,"100"); 

     data_frame recive_data;

      //strcpy(recive_data.frame,transmit_data.frame); 


}



