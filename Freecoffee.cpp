#include <iostream>
using namespace std;

int main() {
int x;
float p;
float discount;
//Taking Input values of price and discount rates
cin>>x;
cin>>p;
int sum=x;
//Total value of percent
p=(p/100);
while(x>0)
{
    discount=x*p;
    x=int(x-discount);
    sum+=x;
}
cout<<sum<<endl;
	return 0;
}
