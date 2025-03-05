# Python 循环语句
Python 提供了 for 循环和 while 循环（在 Python 中没有 do..while 循环）:

|  循环类型  |  描述  |
|:--------|:--------:|
|  while 循环  |  在给定的判断条件为 true 时执行循环体，否则退出循环体。  |
|  for 循环  |  重复执行语句  |
|  嵌套循环  |	你可以在while循环体中嵌套for循环  |

## 循环控制语句

循环控制语句可以更改语句执行的顺序。Python支持以下循环控制语句：

|  控制语句  |  描述  |
|:--------|:--------:|
|  break 语句  |  在语句块执行过程中终止循环，并且跳出整个循环  |
|  continue 语句  |  在语句块执行过程中终止当前循环，跳出该次循环，执行下一次循环  |
|  pass 语句  |  pass是空语句，是为了保持程序结构的完整性  |

## while()循环

Python 编程中 while 语句用于循环执行程序，即在某条件下，循环执行某段程序，以处理需要重复处理的相同任务。其基本形式为：
```py
while 判断条件(condition)：
    执行语句(statements)……
```
 - 执行语句可以是单个语句或语句块。判断条件可以是任何表达式，任何非零、或非空（null）的值均为true。
 - 当判断条件假 false 时，循环结束。

 ```mermaid
 graph TD
    A[condition] -->|true| B[Execute statements]
    A -->|false| C[End]
```