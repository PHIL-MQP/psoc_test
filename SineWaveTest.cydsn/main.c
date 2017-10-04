#include <project.h>

int main()
{    
    // start components
    WaveDAC8_1_Start();
    Opamp_1_Start();
	Opamp_1_SetPower(Opamp_1_HIGHPOWER);
    Opamp_2_Start();
	Opamp_2_SetPower(Opamp_1_HIGHPOWER);
    ADC_DelSig_1_Start();  
    ADC_DelSig_1_StartConvert();
    
    for(;;)
    {
    }
}