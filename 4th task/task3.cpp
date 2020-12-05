#include <iostream>
#include <string>

class Student
{
private:
  std::string name = {};
  std::string surname;
public:
  float av_mark;
  Stident (std::name0, std::surname0, av_mark0)
  {
    name = name0;
    surname = surname0;
    av_mark = av_mark0;
  }
};

class Group
{
private:
  std::vector<Student> vStudent;
public:
  Group () = default;
  void add (const Student & student)
  {
    vStudent.push_back (student);
  }
  double average ()
  {
    double counter = 0;
    for (auto i : vStudent)
    {
      counter += i.av_mark;
      counter /= vStudent.size();
    }
    return counter;
  }
  ~Group ()
  {
      vStudent.clear();
  }
};

int main()
{
  Group group {};
  Student student ("Name", "Surname", 10);
  group.add (student);
  std::cout << group.average() << std::endl;
  return 0;
}
