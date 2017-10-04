#include <project.h>

int main()
{    
    // start components
    WaveDAC8_1_Start();
    // Opamp_1_Start();
	// Opamp_1_SetPower(Opamp_1_HIGHPOWER);
    // Opamp_2_Start();
	// Opamp_2_SetPower(Opamp_1_HIGHPOWER);
    
    uint8_t enabled = 0;
    for(;;)
    {
        uint8_t rx_high = RX_CMP_IN_Read();
        
        if (!enabled && rx_high) {
            enabled = 1;
            WaveDAC8_1_Enable();
            LED_OUT_Write(1);
        }
        else if (!rx_high) {
            enabled = 0;
            WaveDAC8_1_Stop();
            LED_OUT_Write(0);
        }
        
    }
}