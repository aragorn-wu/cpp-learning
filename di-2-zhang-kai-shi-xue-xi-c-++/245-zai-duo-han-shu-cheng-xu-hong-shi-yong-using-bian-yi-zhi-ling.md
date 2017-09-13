让程序能够访问名称空间std的方法有多种，下面是其中的4中：

1. 将using namespace std;放在函数定义之前，让文件中所有函数都能够使用名称空间std中所有的元素。
2. 将using namespace std;放在特定的函数定义中，让该函数能够使用名称空间std中所有的元素。
3. 在特定函数中使用类似using std::cout;这样的便一直令，而不是using namespace std;，让该函数恩能够够使用指定的元素如std。
4. 完全不使用编译指令std，而在需要使用名称空间std中的元素是，使用前缀std::。



