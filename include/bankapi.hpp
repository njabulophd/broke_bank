#include <iostream>

class account_type{
public:
	void set_account_type(std::string account_type);
	std::string get_account_type();
private:
	std::string acc_type = "";
	
};

void account_type::set_account_type(std::string account_type){
	acc_type = account_type;
}
std::string account_type::get_account_type(){
	return acc_type;
}

class client{
	private:
		std::string acc_holder;
		unsigned int account_number;
		float acc_balance = 0.0;
		public:
		account_type accountType;
		void set_balance(float balance);
		float get_balance();
		int get_account_number();
};

void client::set_balance(float balance){
	acc_balance = balance;
}
float client::get_balance(){
	return acc_balance;
}
int client::get_account_number(){
	return account_number;
}