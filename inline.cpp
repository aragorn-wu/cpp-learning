#includes <iostream>

inline double square(double x){return x*x;}

int main(){
	using namespace std;
	double a,b;
	double c=13.0;
	a=square(5);
	b=square(5.5+8.5);
	cout<<"a="<<a<<",b="<<b<<endl;
	cout<<"c="<<c<<endl;
	cout<<"c squared="<<square(c++)<<endl;
	cout<<"now c="<<c<<endl;
	return 0;
}
