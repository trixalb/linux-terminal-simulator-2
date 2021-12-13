#include<stdio.h>
#include<Windows.h>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;



int main()
{
//system variables
string command = "nil";
string username = "unidentified";
bool with_password = false;
string option = "nil";
string password = "nil";
bool executing = false;
bool configurating = true;
//new account variables
int accounts_principal_manager = 0;
string accounts[99];
string new_account_username = "nil";
//general Script
while(configurating == true and executing == false)
{
cout << "hello to start define a username:";
cin >> username;
cout << "would you like to set a password for this user? (it will be used to access some functions) yes/no:";
cin >> option;
if(option == "yes")
{
cout << "enter the new password:";
cin >> password;
cout << "the password was set to:";
cout << password;
cout << "\nyour linux is ready to use!!!\n";
configurating = false;
executing = true;
}
if(option == "no")
{
cout << "your linux is ready to use!!!\n";
configurating = false;
executing = true;
}
if(option != "no" and option != "yes")
{
cout << "Error 404";
cout << "\nNot found";
return 0;
}
while(configurating == false and executing == true)
{
cout << "$";
cin >> command;
if(command == "shutdown")
{
cout << "turning off linux...";
Sleep(800000);
cout << "\nlinux was successfully shut down";
return 0;
}
if(command == "account")
{
cout << "enter the username of the new account:";
cin >> new_account_username;
accounts[accounts_principal_manager] = new_account_username;
cout << "for now, the password system is under development.";
}
}
}
}
