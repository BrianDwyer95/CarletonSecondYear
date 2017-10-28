#include "User.h"
#include <string>
#include <vector>

using namespace std;

class SongLibrary{
    public:
        UserLibrary();
        ~UserLibrary();
        void addUser(User *user);
        User * getUser(int user_id);
        void removeUser(Song *song);
        void displayUsers();
    private:
        UserLibrary(UserLibrary& userlibrary);
        vector<User*> library;
};
