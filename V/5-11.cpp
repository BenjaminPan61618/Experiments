#include <iostream>
#include <string>
using namespace std;
class User{
	private:
	string name;
	string pass;
	public:
	int passwd_verify(string uname, string upass){
		
		if (uname==name && upass==pass){
		
		cout<<"Success login!"<<endl;
		return 0;
		}else{
		
		cout<<"Sorry, please try again."<<endl;
		return -1;}}
	void setname(string usrname){name=usrname;}
	void setpass(string usrpass){pass=usrpass;}
	};
	

	int main(){
	User wang;
	string nname,npass,name,pass;
	int status;
	nname ="Wangming";
	npass = "20170002";
	wang.setname(nname);
	wang.setpass(npass);
	do{
	cout<<"Input username:";
	getline(cin,name);
	cout<<"Input password:";
	getline(cin,pass);
	status=wang.passwd_verify(name,pass);
	}while(status!=0);
	return 0;
}