#include <stdio.h>

#define true 1
#define false 0
typedef int bool;

/*#################################################################
#   Программа считывает с стандартного потока ввода все, что ей   #
#   построчно ввели, после чего построчно удаляет повторяющиеся   #
#   пробелы.                                                      #
#################################################################*/

int main(int argc, char** argv)
{
    int c; // Символ
    bool Space = false; // Флаг на наличие пробела

    while ((c = getchar()) != EOF)
    {
        if (c != '\n')
        {
            if ((c == ' ') && (Space == false)) // Если пробел встретился впервые
            {
                Space = true; 
                putchar(' ');
            } 

            if ((c == ' ') && (Space == true)) continue; // Если пробел встретился более одного раза

            if ((c != ' ') && (Space == true)) Space = false; // Если после последнего пробела не пробел

            putchar(c);
        }

        else 
        {
            printf("\n");
            Space = false;
        }
    }

    return 0;
}