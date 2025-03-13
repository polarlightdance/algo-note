# Python 文件I/O
文件 I/O（输入/输出）是 Python 中处理文件读写操作的核心功能。Python 提供了简单而强大的文件操作接口，可以轻松地读取和写入文件。

## 文件操作的基本步骤
 - 打开文件：使用 open() 函数打开文件。
 - 读取或写入文件：使用文件对象的方法（如 read()、write()）进行读写操作。
 - 关闭文件：使用 close() 方法关闭文件，释放资源。

## 打开文件
使用 open() 函数打开文件，语法如下：
```py
file = open(filename, mode)
```
 - filename：文件名（包括路径）。
 - mode：文件打开模式（如 'r' 表示只读，'w' 表示写入等）。

常见的文件模式

|  模式  |  描述  |
|:--------|:--------:|
|  'r'  |  只读模式（默认）。如果文件不存在，会抛出 FileNotFoundError。  |
|  'w'  |  写入模式。如果文件存在，会覆盖文件内容；如果文件不存在，会创建新文件。  |
|  'a'  |  追加模式。如果文件存在，在文件末尾追加内容；如果文件不存在，会创建新文件。  |
|  'x'  |  独占创建模式。如果文件已存在，会抛出 FileExistsError。  |
|  'b'  |  二进制模式（如 'rb' 或 'wb'）。  |
|  't'  |  文本模式（默认）。  |
|  '+'  |  读写模式（如 'r+' 或 'w+'）。  |

## 读取文件

 - 示例 1：读取整个文件内容

```py
# 打开文件
file = open("example.txt", "r")

# 读取文件内容
content = file.read()
print(content)

# 关闭文件
file.close()
```

 - 示例 2：逐行读取文件

```py
# 打开文件
file = open("example.txt", "r")

# 逐行读取文件
for line in file:
    print(line.strip())  # 使用 strip() 去除行尾的换行符

# 关闭文件
file.close()
```

 - 示例 3：读取所有行并存储为列表

```py
# 打开文件
file = open("example.txt", "r")

# 读取所有行
lines = file.readlines()
print(lines)  # 输出: ['line1\n', 'line2\n', 'line3\n']

# 关闭文件
file.close()
```

 - 读取包含汉字的文件
    - 示例 1：读取整个文件内容
```py
# 打开文件并指定编码为 UTF-8
with open("chinese.txt", "r", encoding="utf-8") as file:
    content = file.read()
    print(content)
```

## 写入文件

 - 示例 1：写入文件

```py
# 打开文件（如果文件不存在，会创建新文件）
file = open("output.txt", "w")

# 写入内容
file.write("Hello, World!\n")
file.write("This is a new line.")

# 关闭文件
file.close()
```

 - 示例 2：追加内容到文件

 ```py
 # 打开文件（追加模式）
file = open("output.txt", "a")

# 追加内容
file.write("\nThis is an appended line.")

# 关闭文件
file.close()
 ```

 - 写入包含汉字的文件
    - 示例：写入汉字到文件
```py
# 打开文件并指定编码为 UTF-8
with open("output_chinese.txt", "w", encoding="utf-8") as file:
    file.write("你好，世界！\n")
    file.write("这是一个包含汉字的文件。")
```

## 使用 with 语句管理文件
 with 语句可以自动管理文件的打开和关闭，即使发生异常也能确保文件被正确关闭。

 - 示例 1：读取文件
 
```py
with open("example.txt", "r") as file:
    content = file.read()
    print(content)
```

 - 示例 2：写入文件

```py
with open("output.txt", "w") as file:
    file.write("Hello, World!\n")
    file.write("This is a new line.")
```

## 二进制文件操作
 对于二进制文件（如图片、视频等），需要使用二进制模式（'rb' 或 'wb'）。

 - 示例：复制二进制文件

 ```py
 # 读取二进制文件
with open("input.jpg", "rb") as input_file:
    data = input_file.read()

# 写入二进制文件
with open("output.jpg", "wb") as output_file:
    output_file.write(data)
 ```

## 文件指针操作
 文件指针表示当前文件读取或写入的位置。可以使用 seek() 和 tell() 方法操作文件指针。
 - seek(offset, whence)：移动文件指针到指定位置。
    - offset：偏移量。
    - whence：参考位置（0 表示文件开头，1 表示当前位置，2 表示文件末尾）。
 - tell()：返回当前文件指针的位置。

 示例：操作文件指针

 ```py
 with open("example.txt", "r") as file:
    # 读取前 5 个字符
    print(file.read(5))  # 输出: Hello

    # 获取当前文件指针位置
    print(file.tell())  # 输出: 5

    # 移动文件指针到文件开头
    file.seek(0)

    # 再次读取前 5 个字符
    print(file.read(5))  # 输出: Hello
 ```

## 文件 I/O 的异常处理
 文件操作可能会抛出异常（如文件不存在、权限不足等），可以使用 try-except 块捕获异常。

 - 示例：捕获文件操作异常
```py
'''
try:
    正常的操作
   ......................
except:
    发生异常，执行这块代码
   ......................
else:
    如果没有异常执行这块代码
'''
try:
    with open("nonexistent.txt", "r") as file:
        content = file.read()
        print(content)
except FileNotFoundError:
    print("文件不存在！")
except IOError:
    print("文件读取失败！")
```

## 重命名和删除文件
Python的os模块提供了帮你执行文件处理操作的方法，比如重命名和删除文件。

要使用这个模块，你必须先导入它，然后才可以调用相关的各种功能。import os

 - rename() 方法
   - rename() 方法需要两个参数，当前的文件名和新文件名。
   - 语法：
```py
   os.rename(current_file_name, new_file_name)
```
 - remove()方法
   - 你可以用remove()方法删除文件，需要提供要删除的文件名作为参数。
   - 语法：
```py
os.remove(file_name)
```

## Python里的目录
所有文件都包含在各个不同的目录下，不过Python也能轻松处理。os模块有许多方法能帮你创建，删除和更改目录。
 - mkdir()方法
   - 可以使用os模块的mkdir()方法在当前目录下创建新的目录们。你需要提供一个包含了要创建的目录名称的参数。
   - 语法：
```py
os.mkdir("newdir")
```
 - chdir()方法
   - 可以用chdir()方法来改变当前的目录。chdir()方法需要的一个参数是你想设成当前目录的目录名称。
   - 语法：
```py
os.chdir("newdir")
```

 - getcwd() 方法
   - getcwd()方法显示当前的工作目录。
   - 语法：
```py
os.getcwd()
```
 - rmdir()方法
   - rmdir()方法删除目录，目录名称以参数传递。
   - 在删除这个目录之前，它的所有内容应该先被清除。
   - 语法：
```py
os.rmdir('dirname')
```

## file 对象
 file 对象使用 open 函数来创建，下表列出了 file 对象常用的函数：

|  序号  |  方法及描述  |
|:--------|:--------:|
|  1  |  file.close(),关闭文件。关闭后文件不能再进行读写操作。  |
|  2  |  file.flush(),刷新文件内部缓冲，直接把内部缓冲区的数据立刻写入文件, 而不是被动的等待输出缓冲区写入。  |
|  3  |  file.fileno(),返回一个整型的文件描述符(file descriptor FD 整型), 可以用在如os模块的read方法等一些底层操作上。  |
|  4  |  file.isatty(),如果文件连接到一个终端设备返回 True，否则返回 False。  |
|  5  |  file.next(),返回文件下一行。  |
|  6  |  file.read([size]),从文件读取指定的字节数，如果未给定或为负则读取所有。  |
|  7  |	 file.readline([size]),读取整行，包括 "\n" 字符。  |
|  8  |  file.readlines([sizeint]),读取所有行并返回列表，若给定sizeint>0，则是设置一次读多少字节，这是为了减轻读取压力。  |
|  9  |  file.seek(offset[, whence]),设置文件当前位置  |
|  10  |  file.tell(),返回文件当前位置。  |
|  11  |  file.truncate([size]),截取文件，截取的字节通过size指定，默认为当前文件位置。  |
|  12  |  file.write(str),将字符串写入文件，返回的是写入的字符长度。  |
|  13  |  file.writelines(sequence),向文件写入一个序列字符串列表，如果需要换行则要自己加入每行的换行符。  |