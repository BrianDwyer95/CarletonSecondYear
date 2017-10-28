#include <string>

using namespace std;

class User{
    public:
        User(int user_id, string user_name);
        User(User& user);
        User & operator=(const User & user) {
            if(&user != this) {
               delete &this -> user_id;
               delete &this -> user_name;
               this -> user_name = user.user_name;
               this -> user_id = user.user_id;
            }
            return *this;
        }
        ~User();
        string getName(void);
        int getID(void);
        void displayUser(void);
    private:
        int user_id;
        string user_name;
};
