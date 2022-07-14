## Chapter-1 开始

### exercise1.1

- 查阅编译器文档，确定文件命名约定。编译并运行简单的main程序；

ans：略

> 我使用的Ubantu-20.04.1，为gcc-9.4.0；具体文档见[GCC-online-manul](https://www.gnu.org/manual/manual.html)
>
> 另外还有一点，GCC全称是GNU Compiler Collection)，即GNU编译器套件。
>
> 其内包含了gcc和g++两种'driver'，他们的作用都是调用组件来处理.c或者.cpp文件
>
> 但调用的编译器不一样：ccl或者cclplus
>
> 且传递的参数也不一样。更多见[gcc&g++](https://www.cnblogs.com/xiedan/archive/2009/10/25/1589462.html)
>
> 对GCC的更多解释见[zhihu-GCC架构](https://zhuanlan.zhihu.com/p/372526494)



### exercise 1.2

- 改写程序，返回-1，查看情况。

ans：没有任何反应。。。

> 在我的虚拟机上没有报错，但是在我校OJ上，main函数返回0以外的值会导致RE。



### exercise 1.3 

- 打印hello，world

ans：略



### exercise 1.4

### exercise 1.5

### exercise 1.6

- 解释程序片段是否合法：

```cpp
std::cout << "The sum of " << v1;
			<< " and " << v2 ;
...
```

ans：不合法，第二行`<<`缺少左对象。



### exercise 1.7

- 编译一个错误注释，观察返回信息

ans：如下：

> ex1-7.cpp:3:4: warning: "/*" within comment [-Wcomment]
>     3 | // /*
>       |     
> ex1-7.cpp:5:2: error: expected unqualified-id before ‘/’ token
>     5 | */
>       |  ^

甚至贴心指出位置。



### exercise 1.8

- 指出下列合法语句，并分析。

```cpp
std::cout << "/*";
std::cout << "*/";
std::cout << /* "*/" */;
std::cout << /* "*/" /* "/*" */;
```

语句1，2无问题，`<<`的右对象可以为空；

语句3注释掉了一个引号，导致后一个引号与下一行的引号配对，

语句4恰好注释掉一对引号，无大碍。



### exercise 1.9

- 用while见50加到100

ans：见程序



### exercise 1.10

- 利用--输出10到0

ans：见程序



### exercise 1.11

- 打印两整数之间的所有整数

ans：见程序，不包括输入检测。



### exercise 1.12

- 简述下列for循环，完成了什么功能：

```cpp
	int sum = 0;
	for( int i = -100; i <= 100; ++i)
        sum += i;
```

ans：从-100加到100，结果为0.



### exercise 1.13

- 用for循环重写ex1-9到ex1-11

ans：见程序，只写ex1-11



### exercise 1.14 

- 对比for和while

ans： 两者可以互相替换，for更适合固定边界作遍历，while更适合某种条件。



### exercise 1.15



### exercise 1.16

- 从`cin`读入一组数，输出。

ans： 书上程序已给出。



### exercise 1.17

全部相等则第一次回车后，还需结束程序才会得到输出；没有重复值，则输出除最后一个数字的记录。



### exercise 1.18

见程序



### exercies 1.19

已支持



### exercise 1.20 

### exercise 1.21

### exercise 1.22

只写1.22， 见程序



### exercise 1.23-1.25

就是利用一个新类把之前的程序重写一遍，略。
