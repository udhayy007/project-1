#include <iostream>
#include <cstdlib>
class New{
	private:
		std::string note,pin;
		int age;
	public:
		void Create(std::string&user,int&id,std::string&pin){
			std::cout<<"Enter Your Name: ";
			std::cin>>user;
			std::cout<<"Enter Your Age: ";
			std::cin>>age;
			if(age>=18){
			std::cout<<"	* Note: You Have to Deposit an Initial Amount of $1000 *"<<std::endl;
			std::cout<<"\nDo You Want to Continue? (Y/N): ";
			std::cin>>note;
			if(note=="Y"||note=="y"){
				id=abs(rand()*(11012006*age));
			
			std::cout<<"\nPlease Enter a PIN for your account: ";
			std::cin>>pin;
			std::cout<<"\n-------------------------------------------\n";
			std::cout<<"\nYour Account Has Been Successfully Created!. "<<std::endl;
			std::cout<<"Account Details: "<<std::endl;
			std::cout<<"Name   : "<<user<<std::endl;
			std::cout<<"Age    : "<<age<<std::endl;
			std::cout<<"Acc.No : "<<id<<std::endl;
			std::cout<<"PIN    : "<<pin<<std::endl;
			std::cout<<"Please Remember Your account Number and PIN for Further Banking!";
			std::cout<<"\n___________________________________________\n";}
			else{
				std::cout<<"\n-------------------------------------------\n";
				std::cout<<"Account Creation Terminated!";
				std::cout<<"\n___________________________________________\n";
			}
		}
		else{
			std::cout<<"\n-------------------------------------------\n";
			std::cout<<"You're Not a Valid User!";
			std::cout<<"\n___________________________________________\n";
		}}
};

class Check{
	public:
		void acc(int& user){
			std::cout<<"Enter Your Account Number: ";
	    	std::cin>>user;
		}
	    void pass(std::string& id){
	    std::cout<<"Enter Your Personal Identification Number: ";
	    std::cin>>id;
		}
};

int main()
{
    New obj;
	Check check;
    double withdraw,deposit;
    double cash;
    double limit=100,balance;
    std::string action;
    std::string user,id;
    int op,tr,tr2;
    int acc;
    
    std::string user1="User",user2="";
	int acc1=7641833,acc2=0;
	std::string pin1="1234",pin2="";
    double balance1=10000,balance2=1000;
	
    while(balance>=0){
    std::cout<<"\n___Welcome To CIT Bank___"<<std::endl;
    std::cout<<"\n-------------------------------------------\n";
    std::cout<<"Press-:\n1--> Exisiting User.\n2--> New User\n3--> Exit Banking.";
    std::cout<<"\n-------------------------------------------\n";
    std::cout<<"Enter Your User Status: ";
    std::cin>>op;
    std::cout<<"-------------------------------------------\n";
    if(op==3){
    	std::cout<<"Thanks for Banking With Us";
    	break;
	}
    if(op!=1&&op!=2&&op!=3){
		std::cout<<"\n Please Enter a Valid Operation";
		tr+=1;
        std::cout<<"\nYour Try: "<<tr<<std::endl;
       	
		}
	if(tr>=3){
        break;
        tr=0;
		}
    while(op==2){
        if(op==2){
        obj.Create(user2,acc2,pin2);
        break;
    }
    }
    
    if(op==1){
        check.acc(acc);
        if(acc==acc1||acc==acc2){
            check.pass(id);
            if(id==pin1||id==pin2){
            }
            else{
                std::cout<<"You've Entered a Wrong PIN!"<<std::endl;
                tr+=1;
				continue;
            }
        }
        else{
            std::cout<<"Please Enter a Valid Account Number!"<<std::endl;
            continue;
        }
        
        
    }
    if(acc==acc1&&id==pin1){
        user=user1;
        balance=balance1;
    }
    else if(acc==acc2&&id==pin2){
        user=user2;
        balance=balance2;
    }



    if(op==1){
        std::cout<<"\n";
        std::cout<<"Hello! "<<user<<std::endl;
        std::cout<<"\n1--> Press '1' To Withdraw \n2--> Press '2' To Deposit Money\n3--> Press '3' To Balance Enquiry\n4--> Exit"<<std::endl;
        std::cout<<"Your Balance is: $"<<balance;
    }

   
    while(op==1){
        std::cout<<"\n Enter The Operation You Want To Perform: ";
        std::cin>>action;
        if (action=="1"){  
            std::cout<<"\nEnter The Amount You Want To Withdraw: $";
            std::cin>>withdraw;
            cash=balance-withdraw;
            if(limit>cash){
                std::cout<<"___You Have Exceeded Banking Limit!___";
                 break;}
            balance-=withdraw;
            std::cout<<"\n-------------------------------------------\n";
            std::cout<<"You have withdrawed $"<<withdraw<<"\nAnd your balance is: $"<<balance;
            std::cout<<"\n___________________________________________\n";
            }
        else if (action=="2"){  
            std::cout<<"\nEnter The Amount You Want To Deposit: $";
            std::cin>>deposit;
            balance+=deposit;
            std::cout<<"\n-------------------------------------------\n";
            std::cout<<"You have Deposited $"<<deposit<<"\nAnd Your Balance is: $"<<balance;
            std::cout<<"\n___________________________________________\n";}
        else if (action=="3"){  
            std::cout<<"\n-------------------------------------------\n";
            std::cout<<"Your Balance is: $"<<balance;
            std::cout<<"\n___________________________________________\n";}

        else if (action == "4"){   
            std::cout<<"\n-------------------------------------------\n";
            std::cout<<"\nThanks For Banking with Us!"<<std::endl;
            std::cout<<"Done By udhaya nithi gm";
            std::cout<<"\n___________________________________________\n";
            if(acc==acc1&&id==pin1){
                balance1=balance;
            }
            else if(acc==acc2&&id==pin2){
                balance2=balance;
            }
            break;}
        if (balance==limit){
        std::cout<<"Your Balance Is $"<<balance<<" Please Deposit Before Withdrawing";
        std::cout<<"\n-------------------------------------------\n";}
        if (action!="1"&&action!="2"&&action!="3"&&action!="4"){
            std::cout<<"\n Please Enter a Valid Operation";
            tr2+=1;
            std::cout<<"\nYour Try: "<<tr2<<std::endl;
            }
        if(tr2==3){
        	break;
        	tr2=0;
			}
        
        }
        
	}
}
