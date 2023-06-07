/*Exercise Practice Questions : 2 \\ Question No. 5 */
#include <iostream>
#include <string>
using namespace std;

struct sterling{
	int pence;
	int shilling;
	int pounds;
};
sterling calculation(double new_currency){
	sterling old_curr;
	int total_point = new_currency*240;

	int x=total_point/12;

	old_curr.pence=total_point % 12;

	int z=x/20;

	old_curr.pounds=z;

	old_curr.shilling = x % 20;
	
	return old_curr;
	/* Return as The Object OF Structure */
}
void dispaly(sterling str){
	cout<<"The Currency is : " <<str.pounds<<"."<<str.shilling<<"."<<str.pence;
}
int main(){
	double new_currency;
	sterling old_currency;
	
	cout<<"Please Enter The New Currency : "<<endl;
	cin>>new_currency;
	
	old_currency=calculation(new_currency);

	dispaly(old_currency);
	return 0;
}
