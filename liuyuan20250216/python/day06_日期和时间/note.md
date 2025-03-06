# 日期和时间
Python 程序能用很多方式处理日期和时间，转换日期格式是一个常见的功能。

## 核心模块和类

Python 中处理日期和时间的主要模块是 datetime，包含以下核心类：
 - datetime：处理日期和时间（年、月、日、时、分、秒、微秒）。
 - date：仅处理日期（年、月、日）。
 - time：仅处理时间（时、分、秒、微秒）。
 - timedelta：表示时间间隔（如天、秒等）。

## 获取当前日期和时间

1. 获取当前日期和时间
```py
from datetime import datetime

now = datetime.now()  # 获取当前日期和时间
print("当前时间:", now)  # 输出: 2023-10-23 14:30:45.123456
```
2. 获取当前日期
```py
from datetime import date

today = date.today()  # 获取当前日期
print("当前日期:", today)  # 输出: 2023-10-23
```

## 格式化日期和时间
使用 strftime(format) 将日期对象格式化为字符串。
 - 常用格式代码

|  代码  |  含义  |  示例  |
|:--------|:--------:|--------:|
|  %Y  |  四位年份  |	2023  |
|  %m  |  两位月份  |  10  |
|  %d  |  两位日期  |  23  |
|  %H  |  24小时制小时  |  14  |
|  %M  |  分钟  |  30  |
|  %S  |  秒  |  45  |
|  %A  |  星期全名  |  Monday  |
|  %B  |  月份全名  |  October  |

 - 示例代码
```py
formatted = now.strftime("%Y-%m-%d %H:%M:%S")
print("格式化时间:", formatted)  # 输出: 2023-10-23 14:30:45

weekday = now.strftime("%A")
print("今天是:", weekday)  # 输出: Monday
```

## 字符串解析为日期对象
使用 strptime(date_string, format) 将字符串解析为 datetime 对象。
```py
date_str = "2023-10-23 14:30:45"
parsed_date = datetime.strptime(date_str, "%Y-%m-%d %H:%M:%S")
print("解析后的日期:", parsed_date)  # 输出: 2023-10-23 14:30:45
```

## 时间差计算（timedelta）
timedelta 表示时间间隔，支持与 datetime 对象进行加减运算。
 - 计算未来或过去的日期
```py
from datetime import timedelta

# 当前时间
now = datetime.now()

# 加 7 天
future_date = now + timedelta(days=7)
print("7 天后的日期:", future_date)

# 减 3 小时
past_time = now - timedelta(hours=3)
print("3 小时前的时间:", past_time)
```

 - 计算两个日期的差值
```py
date1 = datetime(2023, 10, 1)
date2 = datetime(2023, 10, 23)
delta = date2 - date1
print("间隔天数:", delta.days)  # 输出: 22
```

## time 模块的基础操作
time 模块提供与系统时间相关的功能（如时间戳）。
 - 获取当前时间戳
```py
import time

timestamp = time.time()  # 自 1970-01-01 00:00:00 UTC 的秒数
print("当前时间戳:", timestamp)  # 输出: 1698067845.123456

```
 - 时间戳与日期对象的转换
```py
# 时间戳转日期对象
timestamp = 1698067845
date_from_timestamp = datetime.fromtimestamp(timestamp)
print("时间戳对应日期:", date_from_timestamp)  # 输出: 2023-10-23 14:30:45

# 日期对象转时间戳
timestamp = datetime.now().timestamp()
print("当前时间戳:", timestamp)

```
