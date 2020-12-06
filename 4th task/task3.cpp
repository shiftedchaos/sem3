#include <iostream>
#include <string>
#include <vector>

class Student
{
public:
  std::string name;
  std::string surname;
  float av_mark;
  Stident (std::string name0, std::string surname0, float av_mark0)
  {
    name = name0;
    surname = surname0;
    av_mark = av_mark0;
  }
  std::string get_name()
  {
    return  name;
  }
	std::string get_surname()
  {
    return surname;
  }
	double get_score()
  {
    return av_mark;
  }
};

class Group
{
public:
  std::vector<std::string> vStudent = {};

  Group () {}
  void add (Student& student)
  {
    vStudent.push_back(student.get_name());
  }
  void get_add()
	{
		for (int i = 0; i < 2; i++)
    {
			std::cout << vStudent[i] << std::endl;
		}
	}
  ~Group ()
  {
      vStudent.clear();
  }
};

int main()
{
  Student first{ "canz", "bazgir", 27 };
  Student second{ "ben", "chatwin", 25 };
  Group students{};
  std::cout << "Name:" << first.get_name() << std::endl;
	std::cout << "Surname: " << first.get_surname() << std::endl;
	std::cout << "Average mark: " << first.get_score() << std::endl;
  std::cout << "Name:" << second.get_name() << std::endl;
	std::cout << "Surname: " << second.get_surname() << std::endl;
	std::cout << "Average mark: " << second.get_score() << std::endl;
  students.add(first);
  students.add(second);
  std::cout << "Group list:";
	students.get_add();
  return 0;
}
