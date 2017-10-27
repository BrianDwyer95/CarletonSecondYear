#include "UserLibrary.h"

using namespace std;

UserLibrary::UserLibrary(){
  vector<UserLibrary*> library;
}

~UserLibrary::UserLibrary(){
  for(int i=0; i<library.size(); i++){
    delete library[i];
  }
}

  void UserLibrary::addUser ( User* user){
    library.push_back(user);
  }

  void UserLibrary::removeUser( User* user){
    for(int i=0; i<library.size(); i++){
      User * temp=library[i];
      if(temp==user){
        library.erase(library.begin()+i);
        delete temp;
        return;
      }
    }
  }

  void UserLibrary::displayUsers(void){
    for(int i=0; i<library.size(); i++){
      cout<<library[i]<<endl;
    }
  }
