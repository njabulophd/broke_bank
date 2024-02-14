#include "api.cpp"


void personalAccount(std::string type_acc);
void businessAccount(std::string type_acc);

int main(){
	std::string typeOfAccount;
	std::cout << "\t\tWelcome to The app\n";
	std::cout << "please enter account type [personal/business]\n";
	std::cin >> typeOfAccount;
	while(typeOfAccount != "personal" && typeOfAccount != "business"){
		std::cout << "error\n";
		std::cout << "please enter account type [personal/business]\n";
		std::cin >> typeOfAccount;
	}
	if(typeOfAccount == "personal"){
//		valid_acc_type = true
		personalAccount(typeOfAccount);
	}
	else if(typeOfAccount == "business"){
//		valid_acc_type = true
		businessAccount(typeOfAccount);
	}
	return 0;
}

void personalAccount(std::string type_acc){
	std::cout << "Posting "<< type_acc  <<  " API call....\n";
	}
void businessAccount(std::string type_acc){
	std::cout << "Posting " << type_acc << " API call...\n";
}
