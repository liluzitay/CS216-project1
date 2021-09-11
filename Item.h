#include <iostream>

class Item{
    private:
        std::string _description;
        int _id;
    public:
        std::string toString() const;
        std::string set_description();
        std::string get_description();
        std::string get_id();
        

}