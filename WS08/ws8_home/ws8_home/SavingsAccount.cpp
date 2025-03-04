//student name: Chen Zhao
//student number:120122189
//section:SAA
#include <iostream>
#include "SavingsAccount.h"
namespace sict {

	SavingsAccount::SavingsAccount(double balance_, double interestRate_) : Account::Account(balance_){
		this->InterestRate = (interestRate_ > 0) ? interestRate_ : 0.0;
	}

	void SavingsAccount::monthEnd() {
		double interest = (Balance * InterestRate);
		Account::credit(interest);
	}

	void SavingsAccount::display(std::ostream & out) const {
		out << "Account type: Savings\n"
			<< "Balance: $";
		out.setf(out.fixed);
		out.precision(2);
		out << Balance << '\n'
		    << "Interest Rate (%): " << 100 * InterestRate << '\n';

	}
} 

 