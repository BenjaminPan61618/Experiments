#include <iostream>
#include <string>
using namespace std;
const int MAX_SIZE=1000;
class Building{
	public:
	  void input();
	  
	 protected:
	string name;
	int floor;
	int room;
	float area;};
class Teach_Building:protected Building{
		public:
	  void input();
	    void show();
	protected:
	char function[MAX_SIZE];
	};
class Dorm_Building:protected Building{
		public:
	  void input();
	  void show();
	protected:
	int people;
	};
	
	
	void Building::input(){
		cout<<"����������:";
		getline(cin,name);
		cout<<"����:";
		cin>>floor;
		cout<<"������:";
		cin>>room;
		cout<<"���:";
		cin>>area;}

	void Teach_Building::input(){
		Building::input();
		cout<<"�����﹦��:";
		cin.ignore();
		cin.getline(function,MAX_SIZE);}

	void Teach_Building::show(){
		cout<<"����������:"<<name<<endl;
		cout<<"����:"<<floor<<endl;
		cout<<"������:"<<room<<endl;
		cout<<"������:"<<area<<endl;
		cout<<"�����﹦��:"<<function<<endl;
		cout<<endl;
		}

	void Dorm_Building::input(){
		Building::input();
		cout<<"��������:";
		cin>>people;}


	void Dorm_Building::show(){
		cout<<"����������:"<<name<<endl;
		cout<<"����:"<<floor<<endl;
		cout<<"������:"<<room<<endl;
		cout<<"������:"<<area<<endl;
		cout<<"��������:"<<people<<endl;
		cout<<endl;
		}
int main()
{
	Teach_Building building_t1;
	Dorm_Building building_d1;
	building_t1.input();
	cout<<endl;
	building_d1.input();
	cout<<endl;
	system("cls");
	//Linux ϵͳ���軻�� system("clear");
	building_t1.show();
	building_d1.show();
	return 0;}

