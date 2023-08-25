/**
 * @brief Al ejemplo de ARM https://github.com/armBookCodeExamples/example_1-1 
 * se le suma una función de printf para comunicarme por la terminal desde la placa
 * 
 * @arg none
 * @param gasDetector El pin al que se conecta el sensor de gas (ahora un switch a 3v3)
 * @param alarmLed El LED el cual se usa como alarma.
 * 
 * @note Asegúrese de que esté el button/switch conectado a 3v3 y al pin D2
 * @note Se utiliza un pull down por ende se debe conectar a 3v3. 
 * Si se pone Pull up, conectar a GND
 * 
 * @retval none.
 */
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%55
#include "mbed.h"
#include "arm_book_lib.h"

int main()
{
    DigitalIn gasDetector(D2);

    DigitalOut alarmLed(LED1);

    gasDetector.mode(PullDown);

    alarmLed = OFF;
    printf("%s \n","Hola Mundo");
    while (true) {
        if ( gasDetector == ON ) {
            alarmLed = ON;
        }
        
        if ( gasDetector == OFF ) {
            alarmLed = OFF;
        }
    }
}