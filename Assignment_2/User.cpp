#include "User.h"
#include <iostream>

using namespace std;

User::User(int user_id, string user_name){
    this -> user_id = user_id;
    this -> user_name = user_name;
}

User::User(User& user){
    user_id = user.user_id;
    user_name= user.user_name;
}

User::~User(){
 cout << "Destruct User" << endl;
}

int User::getID(void){
    return user_id;
}

string User::getName(void){
    return user_name;
}

void User::displayUser(void){
    cout << "User Name: " << user_name << " User ID: " << user_id << endl;
}
