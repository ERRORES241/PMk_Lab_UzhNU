#include "project.h"

int main(void)

{

    CyGlobalIntEnable;

    for(;;)

    {

        if(Button_Read() == 1)

        {

            LED_Write(0);

        }
        else
        {
            LED_Write(1);
        }
    }
}