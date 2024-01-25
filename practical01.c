#include <stdio.h>

int main(){
	
	float celsius_value, fahrenheit_value;
	
	printf("Enter the Celsius value : ");
	scanf("%f", &celsius_value);
	
//	(0°C × 9/5) + 32 = 32°F
 
    fahrenheit_value = (celsius_value * 9/5) + 32;
    
    printf("Fahrenheit value = %f", fahrenheit_value);
    
    return 0;
    
}
