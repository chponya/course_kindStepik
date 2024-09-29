#include <stdio.h>

int main(void)
{
    // short x, y;
    // if(scanf("%hd, %hd", &x, &y) != 2) {
    //     printf("Input error.");
    //     return 0;
    // }
    // int min = 0;
    // if (x < y) (min = x);
    // else min = y;
    
    // printf("%d", min);

     // Тернарное выражение: 
     // (условие) ? (выражение1) : (выражение2)
     // приоритет тернарной условной операции ниже операций сравнения и арифметических операций

     // Пример
     int age = 20;
     int votingAge = 18;
     char message = (age >= votingAge) ? "Вы можете голосовать!" : "Вы не можете голосовать.";
     printf("Ваш возраст: %d\n", age);
     printf("%s\n", message); // Вывод: Вы можете голосовать!

     // Вложенная тернарная операция
    int a = 2, b = 3, c = -4;
    int max = (a > b) ? ((a > c) ? a : c) : (b > c) ? b : c;
 
    printf("max = %d\n", max);

    return 0;

}