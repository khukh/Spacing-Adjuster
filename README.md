Задача №1 (Технопарк, 1-й семестр, Углубленное программирование C/C++).
===


**Ограничение на время выполнения:** 14 сек.

**Ограничение по памяти:** 64 M

Требуется составить программу построчной обработки текста, в результате которой каждая группа повторяющихся пробелов заменяется на один пробел.
Текстовые строки подаются на стандартный ввод программы, результат программы должен подаваться на стандартный вывод. 

Процедура обработки должна быть оформлена в виде отдельной функции, которой подается на вход массив строк, выделенных в динамической памяти, и его длина.
На выход функция должна возвращать массив обработанных строк.

Программа должна уметь обрабатывать возникающие ошибки (например, ошибки выделения памяти).
В случае возникновения ошибки нужно вывести в поток стандартного вывода сообщение "[error]" и завершить выполнение программы.

---

**ВАЖНО** Программа в любом случае должна возвращать 0. Не пишите return -1, exit(1) и т.п. Даже если обнаружилась какая-то ошибка, все равно необходимо вернуть 0! (и напечатать [error] в stdout).
