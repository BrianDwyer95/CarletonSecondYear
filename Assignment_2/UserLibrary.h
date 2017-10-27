#include <vector>
#include <iostream>
#include "User.h"

using namespace std;

class UserLibrary{
public:
  UserLibrary();
  ~UserLibrary();
  void addUser(User* user);
  void displayUsers(void);
private:
  vector<UserLibrary*> library;
};
