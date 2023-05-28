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
		cout<<"建筑物名称:";
		getline(cin,name);
		cout<<"层数:";
		cin>>floor;
		cout<<"房间数:";
		cin>>room;
		cout<<"面积:";
		cin>>area;}

	void Teach_Building::input(){
		Building::input();
		cout<<"建筑物功能:";
		cin.ignore();
		cin.getline(function,MAX_SIZE);}

	void Teach_Building::show(){
		cout<<"建筑物名称:"<<name<<endl;
		cout<<"层数:"<<floor<<endl;
		cout<<"房间数:"<<room<<endl;
		cout<<"房间数:"<<area<<endl;
		cout<<"建筑物功能:"<<function<<endl;
		cout<<endl;
		}

	void Dorm_Building::input(){
		Building::input();
		cout<<"容纳人数:";
		cin>>people;}


	void Dorm_Building::show(){
		cout<<"建筑物名称:"<<name<<endl;
		cout<<"层数:"<<floor<<endl;
		cout<<"房间数:"<<room<<endl;
		cout<<"房间数:"<<area<<endl;
		cout<<"容纳人数:"<<people<<endl;
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
	//Linux 系统中需换成 system("clear");
	building_t1.show();
	building_d1.show();
	return 0;}

