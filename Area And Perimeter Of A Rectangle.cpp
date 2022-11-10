#include <iostream>
using namespace std;
int main()
{
	double A , P , l , s;
	cout <<"Enter Long Edge: "<<endl;
	cin >> l;
	cout <<"Enter Short Edge: "<<endl;
	cin >> s;
	A=l*s;
	P=2*(l+s);
	cout << "Area= " << A<<endl;
	cout << "Primeter= " << P;
	return 0;
}
