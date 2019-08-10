#include <iostream>
using namespace std;

int main() {
    int x;
    float p,discount;
    //Taking Input values of price and discount rates
    cin>>x>>p;
    int sum=x;
    //Total value of percent
    p=(p/100);
    //Process of calculating Total cost it took
    while(x>0)
    {
        //Discount=Price x Discount rate
        discount=x*p;
        //The new price of the coffee for you
        x=int(x-discount);
        //The total cost until now
        sum+=x;
    }
    //Print the final sum
    cout<<sum<<endl;
	return 0;
}
