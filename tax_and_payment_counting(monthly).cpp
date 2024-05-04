#include <iostream>
using namespace std;
int rooms{0};
class taxes
{
public:
	void counter() {
		if(rooms>0){
		cout << "\ntax percent : 6%"; 
		cout << "\ncost per room : $" << tax_to_pay_for;
		cout << "\ntotal payment for rooms : $" << tax_to_pay_for;
		cout << "\ntaxes : $" << tax;
		cout<<"\n=========================================================="
		cout << "\nyou have to pay in total : $" << total;
		cout << "IMPORTANT:valid for 30 days";}
		else{
			cout<<"no payment required, have a totally nice day!";
			return 0;
		}
	}

private:
	double tax_percent{ 0.06 }; //to do math with percents
	double paymentperRoom{ 30 }; 
	double tax_to_pay_for{ paymentperRoom * rooms }; //counting what tax comes from
	double tax{ (tax_to_pay_for * tax_percent) };//tax itself
	double total{ (rooms * paymentperRoom) + tax };//just total for everything i mean c'mon who would've guessed lol .!.
};

int main()
{
	cout << "Welcome to our tax counting app to make your life easier! ";
	cout << "\nHow many rooms you need to pay for?\n";
	cout << "Rooms : "; 
	cin >> rooms;
	taxes objecttouse{};
	objecttouse.counter();
}
