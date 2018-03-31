#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
class item{
	private:
		char name[20];
		int code[20];
		float price[20];
		int z;
	public:
	void add();	
	void delete_();
	void sell();
	void display();
	void initial(){z=0;}
};
void item::add(){
	system("cls");
	cout<<"enter item category :";
	cin>>name[z];
	cout<<"enter item code :";
	cin>>code[z];
	cout<<"enter item price :";
	cin>>price[z];
	z++;
}
void item::delete_(){
	int i,j;
	system("cls");
	cout<<"enter item code :";
	cin>>i;
	for(j=0;j<z;j++){
		if(code[j]==i){
			price[j]=0;
			cout<<"\n the item is deleted from the lists"<<endl;
			getch();
			break;
		}
	}
}
void item::sell(){
	char a;
	int i,j;
	float totalprice=0;
	system("cls");
	cout<<"enter item code :";
	cin>>i;
	for(j=0;j<z;j++){
		if(code[j]==i){
		if(price[j]==0){
			cout<<"sorry there is no item left in this category :";
			cout<<"do you want to buy another item?(y\\n)"<<endl;
			cin>>a;
			if(a=='y'){
				cout<<"enter the item code";
				cin>>i;
				j=-1;
			}
			else{
				if(totalprice!=0){
					cout<<"\nyour total price is:";
					cout<<totalprice<<"fcfa thankyou"<<endl;
				}
				cout<<"bye!"<<endl;
				break;
			}
		}
		else{
			cout<<"\nitem category is:"<<name[j];
			cout<<"\nitem price is:"<<price[j]<<"fcfa"<<endl;
			totalprice+=price[j];
			price[j]=0;
			cout<<"do you want to buy another item?(y\n):"<<endl;
			cin>>a;
				if(a=='y'){
				cout<<"enter the item code";
				cin>>i;
				j=-1;
			}
			else{
				system("cls");
				cout<<"your total price is :";
				cout<<totalprice<<"fcfa thankyou"<<endl;
				break;
			}
		}
		}
		}
		getch();
}
void item::display(){
	int i,j=1;
	system("cls");
	for(i=0;i<z;i++){
		cout<<j<<" item category is:"<<name[i]<<endl;
		cout<<" item code is:"<<code[i]<<endl;
		cout<<"item price is:"<<price[i]<<" thankyou"<<endl;
		j++;
	}
	getch();
}
int main(){
	int i;
	item shoping_mall;
	system("cls");
	shoping_mall.initial();
	while(1){
		cout<<"what do you want to do? "<<endl;
		cout<<"1:add a new item"<<endl;
		cout<<"2:delete an item "<<endl;
		cout<<"3:sale an item"<<endl;
		cout<<"4:delete all items"<<endl;
		cout<<"5: exit"<<endl;
		
		cout<<"choose a number:"<<endl;
		cin>>i;
		switch(i){
			case 1:shoping_mall.add();break;
			case 2:shoping_mall.delete_();break;
			case 3:shoping_mall.sell();break;
			case 4:shoping_mall.display();break;
			case 5:	cout<<"goodbye thankyou"<<endl;break;
		}
	if(i==5)break;
	system("cls");
	}
	getch();
	return 0;	
}
