#include <iostream>
int main()
{
    using namespace std;
    p1(1,2);
}
void add(int a,int b){
    using namespace std;
    cout<<a+b<<endl;
}
void (*p1)(int a,int b)=add;
