#ifndef UART_UART_H_
#define UART_UART_H_
#include <string.h>

extern void Configurar_UART1(void);
extern char readChar(void);
extern void printChar(char c);
extern void printString(char* string);
extern int readString(char delimitador, char *string,char*string2);
extern char invertirString(char *string);


#endif /* UART_UART_H_ */