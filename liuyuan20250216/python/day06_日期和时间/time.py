#!/usr/bin/env python3

import time

# 获取当前日期和时间
from datetime import datetime

now1 = datetime.now()
print("当前时间为: ", now1)

# 获取当前日期
from datetime import date
now2 = date.today()
print("当前时间为: ", now2)

fromdate = now1.strftime("%Y-%m-%d %H:%M:%S")
print(fromdate)
weekday = now1.strftime("%A")
print(weekday)

date_str = "2023-10-23 14:30:45"
parsed_date = datetime.strptime(date_str, "%Y-%m-%d %H:%M:%S")
print("解析后的日期:", parsed_date)  # 输出: 2023-10-23 14:30:45


from datetime import timedelta
now3 = datetime.now()

future_day = now3 + timedelta(days = 7)
print("7 天后的日期:", future_day)

future_hour = now3 + timedelta(hours = 7)
print("7 hours 后的日期:", future_hour)


date1 = datetime(1998, 7, 12)
date2 = datetime(2025, 3, 6)
delta = date2 - date1
print("间隔天数:", delta.days)  # 输出: 22
print(delta.days / 365)


timestamp = time.time()
print("当前时间戳为： ", timestamp)

stamp_time = 1741257927
from_stamp_time = datetime.fromtimestamp(stamp_time)
print("时间戳对应日期:", from_stamp_time) 

# 日期对象转时间戳
timestamp = datetime.now().timestamp()
print("当前时间戳:", timestamp)

