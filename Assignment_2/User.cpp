#include "User.h"

using namespace std;

User::User(int user_id, string user_name){
  this -> user_id=user_id;
  this -> user_name=user_name;
}

User::~User(){
  cout<<"Destruct User"<<endl;
}

User::User(User& user){
  user_id=user.user_id;
  user_name=user.user_name;
}

string User::getUser_name(void){
  return user_name;
}

int User::getUser_id(void){
  return user_id;
}

void User::displayUser(void){
  cout<<"User ID: "<<getUser_name()<<" User name: "<<getUser_id()<<endl;
}
