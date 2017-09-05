#include <iostream>
int main(){
    using namespace std;
    int updates=6;
    int* p_updates;
    p_updates=&updates;
    cout<<"valus: update= "<<updates<<",*p_updates= "<<*p_updates<<endl;

    cout<<"address:&updates= "<<&updates<<", p_updates= "<<p_updates<<endl;
    
    *p_updates=*p_updates+1;
    cout<<"now updates="<<updates<<endl;
    return 0;
}
