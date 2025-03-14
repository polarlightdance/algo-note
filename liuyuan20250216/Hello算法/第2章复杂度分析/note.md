# 算法效率评估
    时间效率：算法运行时间的长短。
    空间效率：算法占用内存空间的大小。
    效率评估方法主要分为两种：实际测试、理论估算。

# 迭代与递归

## 迭代
    迭代（iteration）是一种重复执行某个任务的控制结构。在迭代中，程序会在满足一定的条件下重复执行某段代码，直到这个条件不再满足。
    for 循环、while 循环是最常见的迭代形式之一，适合在预先知道迭代次数时使用。

## 递归
### 递归（recursion）是一种算法策略，通过函数调用自身来解决问题。它主要包含两个阶段。
    ###递：程序不断深入地调用自身，通常传入更小或更简化的参数，直到达到“终止条件”。
    ###归：触发“终止条件”后，程序从最深层的递归函数开始逐层返回，汇聚每一层的结果。

        而从实现的角度看，递归代码主要包含三个要素。
            终止条件：用于决定什么时候由“递”转“归”。
            递归调用：对应“递”，函数调用自身，通常输入更小或更简化的参数。
            返回结果：对应“归”，将当前递归层级的结果返回至上一层。

**ps：递归短时间还是无法理解，通过后续学习继续加深理解.**

# 时间复杂度
    确定运行平台，包括硬件配置、编程语言、系统环境等，这些因素都会影响代码的运行效率。
    评估各种计算操作所需的运行时间，例如加法操作 + 需要 1 ns ，乘法操作 * 需要 10 ns ，打印操作 print() 需要 5 ns 等。
    统计代码中所有的计算操作，并将所有操作的执行时间求和，从而得到运行时间。

### 统计时间增长趋势
    时间复杂度分析统计的不是算法运行时间，而是算法运行时间随着数据量变大时的增长趋势。
    时间复杂度能够有效评估算法效率
    时间复杂度的推算方法更简便
    时间复杂度也存在一定的局限性

# 空间复杂度
空间复杂度（space complexity）用于衡量算法占用内存空间随着数据量变大时的增长趋势。这个概念与时间复杂度非常类似,只需将“运行时间”替换为“占用内存空间”。
