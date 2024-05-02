#include<stdio.h>
typedef int PIN;


typedef struct {
    void (*start)(int);
    void (*stop)(int);
    void (*changSpeed)(int, int SPEED);
}controlMotor;

#define INIT_MOTOR(nameMotor, PIN_NUMBER) \
    PIN PIN_##nameMotor = PIN_NUMBER;         \
    controlMotor nameMotor = {&startMotor, &stopMotor, &changeMotor}; 



void startMotor(int GPIO)
{
    printf("\nON MOTOR");
}

void stopMotor(int GPIO)
{
    printf("\nOFF MOTOR");
}

void changeMotor(int GPIO, int SPEED)
{
    printf("\nSPEED CHANGE:%dd",SPEED);
}

 

int main()
{
INIT_MOTOR(motor_A,23);
motor_A.start(1);

}