#include "lib/include.h"

int main(void)
{
  
    char c='5';
    //char b='a';
    Configurar_PLL();  //Confiuracion de velocidad de reloj
    Configurar_UART4();//Yo FCLK 20MHZ Baudrate 4800 a una velocidad de 10Mhz

    //Experimento 1
    //  Configurar_UART1(); //Jorge,Alberto,Navarro,Saul,Fabela -fclk 25MHZ Baud-rate 57600
    //  Configurar_UART7(); //Angel,Fernanda,Sonia,Aleidis,Monse -fclk 50MHZ Baud-rate 57600
    //  Configurar_UART4(); //Argelia,Roxana,Yesica,Vanesa,Christian,Abiu -fclk 10MHZ Baud-rate 4800
    //  Configurar_UART2(); //Brizet,Monse,Luis,Majo,Alonso -fclk 40MHZ Baud-rate 115200
    //  Configurar_UART3(); //Jesus,Yesica,Carlos,Dulce,Rodolfo,Leonardo -fclk 80MHZ Baud-rate 19200
    //  Configurar_UART2(); //Andrea,Avila,Pamela,Paulina -fclk 50MHZ Baud-rate 57600
    //  Configurar_UART5(); //Hector,Cecilia,Carolina,Jozzafat -fclk 40MHZ Baud-rate 28800
    Configurar_GPIO();
   // Homogeneidad();
    //printString("Holis Bolis");

   
   // printString(&arr[0]);
    while(1)
    {
       int i= 0;
       char string[20];
       char string2[20];
       i=readString('%', string,string2);
       printString(string2);
    }
}
