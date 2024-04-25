#include<stdio.h>
#include<stdint.h>
#include<stdarg.h>

typedef enum  
{
    LIGHT,
    AIR_CONDITION,
    FINGERPRINT_LOCK,
    MUSIC_PLAYER
}typeDevice ;

typedef enum 
{
   ON,
   OFF,
   SET_TEMPERATURE,
   SET_MODE,
   UNLOCK,
   LOCK,
   INCREASE_VOLUME,
   DECREASE_VOLUME,
   CHANGE_TRACK
}typeCommand;

void controlDevice(typeDevice type, typeCommand command,...)
{
            va_list args;
            va_start(args,command);
          
          switch (type)
          {
          case LIGHT:          
                switch (command)
                {
                        case ON:
                        {
                            printf("Turn on the light");
                            break;
                        }        

                        case OFF:
                        {
                        printf("Turn off the light");
                        break;
                        }

                        default:
                        {
                        printf("Command invalid");
                        }
                break;
           }
           case AIR_CONDITION :
                switch (command)
                {
                case ON:
                typeCommand more_command = va_arg(args,typeCommand);
                      switch (more_command)
                      {
                            case SET_TEMPERATURE:
                            {
                                int temperature = va_arg(args, int);
                                printf("Turn on the AIR_CONDITION and Set temprature %d",temperature);
                                break;
                            }
                            case SET_MODE:
                            {
                            const char* modeFan = va_arg(args,char*);
                            printf("Turn on the AIR_CONDITION and set fan %s",modeFan);
                            break;
                            }                     
                      }
                      break;
            }
            case FINGERPRINT_LOCK:          
                switch (command)
                {
                        case LOCK:
                        {
                            printf("The door is locked");
                            break;
                        }        

                        case UNLOCK:
                        {
                        printf("The door is unlocked");
                        break;
                        }

                        default:
                        {
                        printf("Command invalid");
                        }
                break;
               }    
         }           
        va_end(args);  
}
 






int main()
{
    //controlDevice(LIGHT,OFF);
    //controlDevice(AIR_CONDITION,ON,SET_TEMPERATURE,12);
    //controlDevice(AIR_CONDITION,ON,SET_MODE,"On Fan");
    controlDevice(FINGERPRINT_LOCK,LOCK);





}
