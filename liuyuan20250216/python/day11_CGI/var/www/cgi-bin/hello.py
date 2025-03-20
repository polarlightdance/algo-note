#!/usr/bin/env python3
# 指定 Python3 解释器路径

# 导入 CGI 模块
import cgi

# 设置 HTTP 响应头（必须第一行输出）
print("Content-Type: text/html")  # 指定内容类型为 HTML
print()                          # 空行分隔头部和内容

# 输出 HTML 内容
print("<html>")
print("<head><title>Python CGI 示例</title></head>")
print("<body>")
print("<h1>Hello, CGI World!</h1>")
print("</body>")
print("</html>")


print ("Content-type:text/html")
print ()                              # 空行，告诉服务器结束头部
print ('<html>')
print ('<head>')
print ('<meta charset="utf-8">')
print ('<title>Hello World - 我的第一个 CGI 程序！</title>')
print ('</head>')
print ('<body>')
print ('<h2>Hello World! 我是来自菜鸟教程的第一CGI程序</h2>')
print ('</body>')
print ('</html>')