﻿#include "tasks.h"

/*	Task 02. Palindrome Number (симметричное число или число-палиндром)
*
*	Дано четырехзначное число или меньше. Определите, является ли оно палиндромом.
*
*   Примечание
*   Отрицательное число физически не является палиндромом.
*   Не забудьте про "защиту от дурака": диапазон корректных значений должен быть от 0 до 9999
* 
*	Формат входных данных [input]
*	Функция принимает любое число в диапазоне типа int.
*
*	Формат выходных данных [output]
*	Функция возвращает соответствующее значение булевского типа.
*
*	[ input 1]: 2002
*	[output 1]: true
*
*	[ input 2]: 2008
*	[output 2]: false
*
*	[ input 3]: 2
*	[output 3]: true
*
*	[ input 4]: -8
*	[output 4]: false
*
*	[ input 5]: 55255
*	[output 5]: false
*/

int revers(int number) {
    int t = 0;

    while (number > 0) {
        t *= 10;
        t = number % 10 == 0 ? t : t + number % 10;
        number /= 10;
    }
    return t;
}

bool task02(int number) {
    if (number < 0 || number > 9999) {
        return false;
    }

    return number == revers(number);
}