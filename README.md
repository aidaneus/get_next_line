# get_next_line

> :warning: **This program is implemented under the Mac OS system.**

## RUS
 
#### Цель:
```
 Написать функцию, которая читает файловый дескриптор и возвращает строку.
```
#### Задача:
```
1. Вызов функции в цикле должен позволять читать текст, на который указывает файловый дескриптор,
   по одной строке за раз.
2. Функция должна возвращать прочитанную строку, иначе NULL.
3. Строка должна содержать завершающий символ переноса строки '\n', либо когда достигнут конец
   файла - сивол конца строки '\0'.
4. Пока в текстовом файле есть что читать - возвращается 1, иначе 0 и при ошибки -1.
```

## ENG
 
#### The goal:
```
 Write a function that reads a file descriptor and returns a string.
```
#### The task:
```
1. A function call in a loop should allow the text pointed to by the file descriptor to be read
   one line at a time.
2. The function must return the read line, otherwise NULL.
3. The line must contain the terminating newline character '\n', or when the end of the file is
   reached, the end-of-line character '\0'.
4. As long as there is something to read in the text file, 1 is returned, otherwise 0 and -1 in
   case of errors.
```
