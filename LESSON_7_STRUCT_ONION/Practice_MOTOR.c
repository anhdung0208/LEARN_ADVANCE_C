#include<stdio.h>
typedef int PIN;


typedef struct {
    void (*start)(int);
    void (*stop)(int);
    void (*changSpeed)(int, int SPEED);
}controlMotor;

// #define INIT_MOTOR(nameMotor, PIN_NUMBER) \
//     PIN PIN_##nameMotor = PIN_NUMBER;         \
//     controlMotor nameMotor = {&startMotor, &stopMotor, &changeMotor}; 

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

 void init_motor_v2(controlMotor *name_motor)
{
    (*name_motor).start = &startMotor;
    (*name_motor).stop = &stopMotor;
    (*name_motor).changSpeed = &changeMotor;
}  

int main()
{
//INIT_MOTOR(motor_A,23);
controlMotor motor_A;

init_motor_v2(&motor_A);

motor_A.start(1);


}