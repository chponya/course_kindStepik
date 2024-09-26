#include <stdio.h>

int main(void)
{
    /* Функция scanf() для форматированного ввода:
       - выполняет форматное чтение данных из потока stdin
       - возвращает число прочитанных элементов (набора данных для каждой переменной)
    */

    // char byte;
    // scanf("%c", &byte);    // читает один байт из буфера входного потока stdin 
    // printf("byte = %c\n", byte);  // вывод считанного ранее байта

    // char byte1 = '0', byte2 = '0';
    // scanf("%c", &byte1);
    // scanf("%c", &byte2);
    // printf("byte1 = %c, byte2 = %c\n", byte1, byte2);    // мы считали два символа

    // char byte1 = '0', byte2 = '0';
    // // int res = scanf("%c%c", &byte1, &byte2);  // мы считали два символа
    // // printf("res = %d: byte1 = %c, byte2 = %c\n", res, byte1, byte2);

    // int res = scanf("%c %c", &byte1, &byte2);             // считывание двух символов, разделённых пробельным символом (пробел, табуляция, перенос строки)
    // printf("byte1 = %c, byte2 = %c\n", byte1, byte2); 


    // %d - этот спецификатор приводит целые числа к типу int при считывании
    // long long var_lli = 0;
 
    // // int res = scanf("%d", &var_lli);
    // // printf("res = %d: var_lli = %lld\n", res, var_lli);

    // // 1234567890  >>  res = 1: var_lli = 1234567890
    // // 12345678901234 >>  res = 1: var_lli = 2147483647 -- тк введённое число больше типа int

    // int res = scanf("%lld", &var_lli);    // так верно считае переменную типа long long
    // printf("res = %d: var_lli = %lld\n", res, var_lli);  // 12345678901234  >>  res = 1: var_lli = 12345678901234


    // модификатор *, который позволяет пропускать вводимые данные (при этом их тип всё равно должен соответствовать!!)

    // unsigned int price = 0;
    // double weight = 0.0;
    // int res = scanf("%*llu; %u; %lf", &price, &weight);     // << 10; 1000; 54.65
    // printf("res = %d: price = %d, weight = %.2f\n", res, price, weight);    // >> res = 2: price = 1000, weight = 54.65  / Первое значение 10 было прочитано, но проигнорировано

    // int a;
    // short b;
    // float c;
    // double d;
    // scanf("%d %hd %f %lf", &a, &b, &c, &d);  // << 65000 32000 0.5 -78.5
    // printf("%d %d %.2f %.2f", a, b, c, d);   // >> 65000 32000 0.50 -78.50

    // int a = 0;
    // int b = 0;
    // scanf("%d %d", &a, &b);
    // int c = a;
    // a = b; b = c;
    // printf("%d %d", a, b);

    return 0;    
}