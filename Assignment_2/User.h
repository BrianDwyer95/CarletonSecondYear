#include <iostream>
#include <vector>


using namespace std;

class User{
public:
  User(int user_id, string user_name);
  ~User();
  User(User& user);
  void getUser_id(void);
  void getUser_name(void);
private:
  string user_name;
  int user_id;
};
