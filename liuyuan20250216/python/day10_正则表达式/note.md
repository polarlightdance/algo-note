# Python 正则表达式

## 正则表达式（Regular Expression）是什么
 正则表达式是一种字符串匹配的模式，可以快速从文本中提取、替换或验证特定规则的字符串。例如：
 - 验证邮箱格式是否合法
 - 从日志中提取电话号码
 - 批量替换文本中的错误单词

## Python 中使用正则表达式
Python 通过 re 模块支持正则表达式。需要先导入模块：
```py
import re
```

## 基础语法与常用符号

 - 基础元字符

|  符号  |  说明  |  示例  |
|:--------|:--------:|:--------:|
|  .  |  匹配任意字符（除换行符）  |  a.c → "abc"、"a@c"  |
|  \d  |  匹配数字（0-9）  |  \d\d → "12"、"99"  |
|  \w  |  匹配字母、数字、下划线  |  \w\w → "a1"、"Z_"  |
|  \s  |  匹配空白字符（空格、制表符等）  |  a\sb → "a b"  |
|  ^  |  匹配字符串开头  |  ^abc → "abc"开头  |
|  $  |  匹配字符串结尾  |  xyz$ → "xyz"结尾  |

 - 量词（控制重复次数）

|  符号  |  说明  |  示例  |
|:--------|:--------:|:--------:|
|  *  |  0次或多次  |  a* → "", "a", "aaaa"  |
|  +  |  1次或多次  |  a+ → "a", "aaa"（不能为空）  |
|  ?  |  0次或1次  |  a? → "", "a"  |
|  {n}  |  精确匹配n次  |  a{3} → "aaa"  |
|  {n,m}  |  匹配n到m次  |  a{2,4} → "aa", "aaaa"  |

 - 字符集合

|  符号  |  说明  |  示例  |
|:--------|:--------:|:--------:|
|  [abc]  |  匹配a、b、c中的任意一个  |  [aeiou] → 匹配元音字母  |
|  [^abc]  |  匹配非a、b、c的字  |  [^0-9] → 匹配非数字  |
|  [a-z]  |  匹配a到z的小写字母  |  [A-Za-z] → 匹配所有字母  |

## Python 的 re 模块常用函数

 - re.match()：从字符串开头匹配
```py
 re.match(pattern, string, flags=0)
 # pattern	匹配的正则表达式
 # string	要匹配的字符串。
 # flags	标志位，用于控制正则表达式的匹配方式，如：是否区分大小写，多行匹配等等。参见：正则表达式修饰符 - 可选标志
 # 匹配成功 re.match 方法返回一个匹配的对象，否则返回 None。
 # 可以使用 group(num) 或 groups() 匹配对象函数来获取匹配表达式
 # span() 是 re 模块中的一个函数，它用于在字符串中搜索模式并返回匹配的起始和结束位置。
   """
   group(num=0)	匹配的整个表达式的字符串，group() 可以一次输入多个组号，在这种情况下它将返回一个包含那些组所对应值的元组。
   groups()	返回一个包含所有小组字符串的元组，从 1 到 所含的小组号。
   """
```
```py
import re

text = "ankang 123 xian 456"
content = r"^ankang" # 匹配以 "ankang" 开头  ^ :匹配字符串开头
result = re.match(content, text)
if result:
    print("匹配成功:", result.group()) # group()匹配的整个表达式的字符串
else:
    print("匹配失败")
    
print(re.match('www', 'www.runoob.com').span()) # 在起始位置匹配
```

 - re.search()：在字符串中搜索第一个匹配项

```py
# re.search 扫描整个字符串并返回第一个成功的匹配
re.search(pattern, string, flags=0)
# pattern	匹配的正则表达式
# string	要匹配的字符串。
# flags	标志位，用于控制正则表达式的匹配方式，如：是否区分大小写，多行匹配等等。
# 匹配成功re.search方法返回一个匹配的对象，否则返回None
```
```py
text = "ankang 123 xian 456"
pattern = r"\d+" # 匹配数字
result2 = re.search(pattern, text)
if result2:
    print("匹配成功:", result2.group()) # group()匹配的整个表达式的字符串
```

*** re.match与re.search的区别:re.match只匹配字符串的开始，如果字符串开始不符合正则表达式，则匹配失败，函数返回None；而re.search匹配整个字符串，直到找到一个匹配。**
 
 - re.findall()：返回所有匹配项的列表
```py
# re.findall()方法可以用于从字符串中查找满足某个正则表达式的所有非重叠的匹配项
re.findall(pattern, string, flags=0)
# pattern：要匹配的正则表达式模式。
# string：要进行匹配的字符串。
# flags（可选）：用于控制正则表达式的匹配方式。
# 匹配成功返回一个列表，列表中的每个元素表示一个匹配项
```

```py
text = "apple 123 banana 456"
pattern = r"\d+"

result = re.findall(pattern, text)
print(result)  # 输出: ['123', '456']
```
 - re.sub()：替换匹配的字符串
```py
# 在字符串中搜索匹配的子串，并将它们替换为新的字符串
re.sub(pattern, repl, string, count=0, flags=0)
# pattern：正则表达式模式。
# repl：用于替换的字符串。
# string：要搜索和替换的原始字符串。
# count：最大替换次数，默认为 0，即替换所有匹配项。
# flags：正则表达式的标志，用于控制匹配行为。
```
```py
text = "apple 123 banana 456"
pattern2 = r"\d+" # 匹配数字
new_text = re.sub(pattern2, "*_*", text) # 替换匹配的字符串
print("替换后的字符串:", new_text)
```
## 分组与捕获
 - 用 () 定义分组，可以提取特定部分。
 - group()	匹配的整个表达式的字符串，group() 可以一次输入多个组号，在这种情况下它将返回一个包含那些组所对应值的元组。

```py
today = date.today()
print("今天日期为:", today)
pattern3 = r"(\d{4})-(\d{2})-(\d{2})"
result4 = re.search(pattern3, str(today)) # 匹配日期 "today.strftime("%Y-%m-%d")"
if result4:
    print("all date is :",result4.group())
    print("year is :", result4.group(1))
    print("month is :",result4.group(2))
    print("day is :", result4.group(3))
```

## 贪婪匹配 vs 非贪婪匹配
 - 贪婪匹配（默认）：尽可能匹配更长的字符串。
 - 非贪婪匹配：在量词后加 ?，匹配最短字符串。
```py
text = "<div>内容1</div><div>内容2</div>"

# 贪婪匹配
greedy_pattern = r"<div>.*</div>"  # 匹配整个字符串
result = re.search(greedy_pattern, text)
print("贪婪匹配:", result.group())  # 输出: <div>内容1</div><div>内容2</div>

# 非贪婪匹配
non_greedy_pattern = r"<div>.*?</div>"  # 匹配到第一个</div>结束
result = re.search(non_greedy_pattern, text)
print("非贪婪匹配:", result.group())    # 输出: <div>内容1</div>
```

## 常用正则表达式示例
 -  匹配邮箱
```py
email = "user@example.com"
pattern = r"^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$"
if re.match(pattern, email):
    print("邮箱合法")
else:
    print("邮箱不合法")
```
 - 匹配手机号（中国大陆）
```py
phone = "13800138000"
pattern = r"^1[3-9]\d{9}$"
if re.match(pattern, phone):
    print("手机号合法")
```

## 总结
 - 正则表达式核心：通过符号组合定义匹配规则。
 - Python 的 re 模块：
    - match() 从开头匹配
    - search() 搜索第一个
    - findall() 返回所有结果
    - sub() 替换字符串
 - 实际应用：数据清洗、表单验证、日志分析等。