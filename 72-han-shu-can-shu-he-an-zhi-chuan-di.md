对于函数：

```cpp
double volume =cube(sile);
```

其中，sile是一个变量，假如它为5。当函数被调用时，该函数将创建一个新的名为x的double变量，并将其初始化为5。

这样子cube\(\)执行的操作将不会影响main\(\)中的数据，因为cube函数内使用的是side的副本。

