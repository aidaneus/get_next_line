# get_next_line

> :warning: **This program is implemented under the Mac OS system.**

## RUS
 
#### Задача:
```
 Написать функцию, которая читает файловый дескриптор и возвращает строку.
```
#### Реализовано:
```
1. Вызов функции в цикле позволяет читать текст, на который указывает файловый дескриптор,
   по одной строке за раз.
2. Функция возвращает прочитанную строку, иначе NULL.
3. Строка содержит завершающий символ переноса строки '\n', либо когда достигнут конец
   файла - символ конца строки '\0'.
4. Пока в текстовом файле есть что читать - возвращается 1, иначе 0 и при ошибки -1.
```
#### Инструкция для запуска:
1. Скомпилировать программу: `gcc main.c srcs/*.c`
2. Запустить бинарный файл: `./a.out`

## ENG
 
#### The task:
```
 Write a function that reads a file descriptor and returns a string.
```
#### Implemented:
```
1. A function call in a loop allow the text pointed to by the file descriptor to be read
   one line at a time.
2. The function return the read line, otherwise NULL.
3. The line contain the terminating newline character '\n', or when the end of the file is
   reached, the end-of-line character '\0'.
4. As long as there is something to read in the text file, 1 is returned, otherwise 0 and -1 in
   case of errors.
```
#### Run instructions:
1. Compile the program: `gcc main.c srcs/*.c`
2. Run the binary: `./a.out`
