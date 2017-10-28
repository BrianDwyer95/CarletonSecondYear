#include "UserLibrary.h"

using namespace std;

UserLibrary::UserLibrary(){
    vector<User*> library;
}

UserLibrary::~UserLibrary(){
    for(unsigned int i = 0; i< library.size(); ++i){
        delete library[i];
    }
}

void UserLibrary::addUser(User* user){
    library.push_back(user);
}

void UserLibrary::displayUsers(void){
    for(unsigned int i = 0; i < library.size(); ++i){
        library[i] -> displayUser();
    }
}

void UserLibrary::removeUser(User* user){
    for(unsigned int i = 0; i < library.size(); ++i){
        User * temp = library[i];
        if(temp == user){
            library.erase(library.begin() + i);
            delete temp;
        }
    }
}

User * UserLibrary::getUser(int user_id){
    for(unsigned int i = 0; i < library.size(); ++i){
          User * temp = library[i];
          if(temp -> getUserID() == user_id) return temp;
    }
    return NULL;
}
