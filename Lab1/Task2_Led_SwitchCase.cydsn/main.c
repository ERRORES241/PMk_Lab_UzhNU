#include "project.h"

int main(void)
{
    CyGlobalIntEnable; 

    uint8 color_state = 0;
    uint8 last_button_state = 1;

    for(;;)
    {
        uint8 current_button_state = Button_Read();

        if (last_button_state == 1 && current_button_state == 0)
        {
            color_state++;
            if (color_state > 6) color_state = 0;

            LED_Red_Write(1);
            LED_Green_Write(1);
            LED_Blue_Write(1);

            switch(color_state)
            {
                case 1:
                    LED_Red_Write(0);
                    break;
                case 2:
                    LED_Green_Write(0);
                    break;
                case 3:
                    LED_Blue_Write(0);
                    break;
                case 4:
                    LED_Red_Write(0);
                    LED_Blue_Write(0);
                    break;
                case 5:
                    LED_Red_Write(0);
                    LED_Green_Write(0);
                    break;
                case 6:
                    LED_Red_Write(0);
                    LED_Green_Write(0);
                    LED_Blue_Write(0);
                    break;
                case 0:
                default:
                    break;
            }
            
            CyDelay(50);
        }

        last_button_state = current_button_state;
    }
}