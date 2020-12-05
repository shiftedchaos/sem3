#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Student {
private:
    string name_ = {};
    string surname_ = {};
public:
    double avg_ = 0;
    Student (string name, string surname, double avg = 0):
            name_ (name),
            surname_ (surname),
            avg_ (avg)
    {}
};

class Group {
private:
    vector <Student> data_ = {};
public:
    Group () = default;
    void add (const Student & student) {
        data_.push_back (student);
    }
    double average () {
        double ans = 0;
        for (auto st : data_) {
            //std::cout << st.avg_ << std::endl;
            ans += st.avg_;
            ans /= data_.size();
        }
        return ans;
    }
    ~Group () {
        data_.clear();

    }
};

int main () {
    Group group {};
    Student student ("Name", "Surname", 10);
    group.add (student);
    cout << group.average() << endl;
    return 0;
}
