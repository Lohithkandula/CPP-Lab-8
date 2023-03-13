#include<iostream>
using namespace std;
class ATM
{
private:
int amt;
string check;
public:
int bal;
string pass;
ATM()
{
bal=10000;
pass="lohith";
}
void withdraw()
{
cout<<"Enter the amount you want to withdraw : ";
cin>>amt;
if(amt>bal)
{
cout<<"Insuffecient Balance";
}
else
{
bal-=amt;
cout<<"Thank You for using My ATM, Please Collect
Money"<<endl;
cout<<"Your updated Balance is : "<<bal<<endl;
cout<<"===================================================
===================================";
}
}
void changepasw()
{
cout<<"Enter the old password : ";
cin>>check;
if(check==pass)
{
cout<<"Enter your new password : ";
cin>>pass;
cout<<"You have successfully changed your password"<<endl;
cout<<"===================================================
====================================";
}
else
{
cout<<"The password you entered is wrong ";
}
}
~ATM()
{
cout<<"Thank You ";
cout<<"===================================================
==========================================";
}
};
struct balance
{
int bal;
struct balance *next;
}*head1,*temp1;
struct password
{
string pass;
struct password *next;
}*head2,*temp2;
int main()
{
ATM a;
string check ="";
int key=0,amt;
head1=(struct balance*)malloc(sizeof(struct balance));
temp1=head1;
temp1->bal=a.bal;
temp1=temp1->next;
head2=(struct password*)malloc(sizeof(struct password));
temp2=head2;
temp2->pass=a.pass;
temp2=temp2->next;
while(1)
{
cout<<"\n==================================================
================\n";
cout<<"Welcome to my Bank ATM\n";
cout<<"\nYour accounnt balance is : "<<a.bal<<endl;
cout<<"\n==================================================
================\n";
cout<<"\n Enter 1 to widthdraw\n Enter 2 to change the password\n
Enter 3 to exit\n";
cin>>key;
if(key==1)
{
a.withdraw();
temp1=(struct balance*)malloc(sizeof(struct balance));
temp1->bal=a.bal;
temp1=temp1->next;
}
else if(key==2)
{
a.changepasw();
temp2=(struct password*)malloc(sizeof(struct password));
temp2->pass=a.pass;
temp2=temp2->next;
}
else if(key==3)
{
break;
}
}
a.~ATM();
}
