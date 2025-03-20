# Python CGI编程
 - CGI（通用网关接口）是 Web 服务器与外部程序（如 Python 脚本）交互的标准协议。通过 CGI，服务器可以执行 Python 脚本并返回动态生成的网页内容。以下是 Python3 CGI 编程的详细讲解，包含示例与注释。
 - CGI 目前由 NCSA 维护，NCSA 定义 CGI 如下：
    - CGI(Common Gateway Interface)，通用网关接口，它是一段程序，运行在服务器上如：HTTP 服务器，提供同客户端 HTML 页面的接口。
 - 网页浏览,为了更好的了解 CGI 是如何工作的，我们可以从在网页上点击一个链接或 URL 的流程：
    - 使用你的浏览器访问 URL 并连接到 HTTP web 服务器。
    - Web 服务器接收到请求信息后会解析 URL，并查找访问的文件在服务器上是否存在，如果存在返回文件的内容，否则返回错误信息。
    - 浏览器从服务器上接收信息，并显示接收的文件或者错误信息。
*** CGI 程序可以是 Python 脚本，PERL 脚本，SHELL 脚本，C 或者 C++ 程序等。**

## 前置条件
 1. Web 服务器支持 CGI（如 Apache、Nginx 配置 CGI 模块）。
 2. Python 脚本权限：确保脚本有执行权限（chmod +x script.py）。
 3. 文件路径：脚本需放在服务器的 CGI 目录（如 Apache 的 /var/www/cgi-bin/）。

## Web服务器支持及配置
在你进行 CGI 编程前，确保您的 Web 服务器支持 CGI 及已经配置了 CGI 的处理程序。

Apache 支持 CGI 配置：

设置好CGI目录：
```py
ScriptAlias /cgi-bin/ /var/www/cgi-bin/
```
所有的HTTP服务器执行 CGI 程序都保存在一个预先配置的目录。这个目录被称为 CGI 目录，并按照惯例，它被命名为 /var/www/cgi-bin 目录。

CGI 文件的扩展名为 .cgi，python 也可以使用 .py 扩展名。

默认情况下，Linux 服务器配置运行的 cgi-bin 目录中为 /var/www。

如果你想指定其他运行 CGI 脚本的目录，可以修改 httpd.conf 配置文件，如下所示：
```py
<Directory "/var/www/cgi-bin">
   AllowOverride None
   Options +ExecCGI
   Order allow,deny
   Allow from all
</Directory>
```
在 AddHandler 中添加 .py 后缀，这样我们就可以访问 .py 结尾的 python 脚本文件：
```py
AddHandler cgi-script .cgi .pl .py
```

## 基本 CGI 脚本结构
```py
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

'''
注释：
print("Content-Type: text/html")：定义 HTTP 响应头，告诉浏览器返回的是 HTML。
空行：HTTP 头与内容之间必须有一个空行。
'''
```