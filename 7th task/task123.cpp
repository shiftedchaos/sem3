#include<vector>
#include <cmath>
#include <sstream>
#include <iostream>
#include <utility>
using namespace std;

class Figure
{
protected:
  double perimeter();// абстрактный виртуальный метод perimeter
  double square();//абстрактный виртуальный метод area

  virtual ostream& print(ostream &out) {return out;} //- виртуальный метод print

  friend ostream& operator<<(ostream &out, Figure &f) // перегрузку оператора
  {
    f.print(out);     //вывода для класса Figure (периметр фигуры) вызывает
    return out;       //метод print и возвращает потоk вывода).
  }
};

class Ellipse: public Figure  //класс эллипс - наследник figure
{
public:
  double a, b;
  Ellipse(double a, double b)  //инициализация параметров a, b класса эллипс
  {
      this->a = a;
      this->b = b;
  }
                                            //виртуальная функция для выч S_элл
  virtual double area(double a, double b)
  {
    return M_PI * a * b;
  }
                                            //виртуальная функция для выч P_элл
  virtual  double perimeter(double a, double b)
  {
    return 4 * (M_PI * a * b + (a - b) * (a - b)) / (a + b);
  }
             // виртуальная функция print, которая выводит информацию об эллипсе
  virtual ostream& print(ostream& out)
  {
    out << "Ellipse, ";
    out  <<"a  " << a << ", ";
    out << "b  " << b << ", ";
    out << "perimeter " << perimeter(a,b) << ", ";
    out << "area " << area(a,b) << endl;
    return out;
  }
                                //перегрузка оператора вывода для класса Ellipse
  friend ostream& operator<<(ostream &out, Ellipse &e)
  {
    e.print(out);
    return out;
  }
};

class Polygon: public Figure  //класс polygon - наследник figure
{
public:
  int n; //число вершин многоугольника
  string pointStr; //строка, где через пробел перечислены координаты вершин
  pair<double,double> *points; //массив координат вершин на плоскости

  Polygon(int n, string verices)
  {
    this->n=n;
    this->pointStr=verices;
    points = new pair<double,double> [n]; //динамическое выделение памяти
    stringstream ss;
    ss << pointStr;

    for (int i = 0; i < n; i++)  //инициализация массива с помощью stringstream
    {
      ss >> points[i].first;
      ss >> points[i].second;
    }
  }
                     //площадь многоугольника по коорд точек (виртуальный метод)
  virtual double area(int n, pair<double,double> *points)
  {
    double sum = 0;
    for(int i = 0; i < n - 1; i++)
    {
      sum += (points[i].first * points[i + 1].second -
         points[i + 1].first * points[i].second);
    }
      return 0.5 * abs((sum + points[n - 1].first * points[0].second -
         points[0].first * points[n - 1].second));
  }
                     //периметр многоугольника
  virtual  double perimeter(int n ,pair<double,double>*points)
  {
    double sum = 0;
    for(int i = 0 ; i < n-1; i++)
    {
      sum += (sqrt(pow(points[i].first - points[i + 1].first, 2) +
       pow(points[i].second - points[i + 1].second, 2)));
    }
      return sum + sqrt(pow(points[n - 1].first - points[0].first, 2)
      + pow(points[n - 1].second - points[0].second, 2));
  }
       // вывод информации о многоугольнике (аналогично эллипсу)
  virtual  ostream& print(ostream& out)
  {
    out << "Polygon, ";
    out << "area " << area((n),  (points)) << ", ";
    out << "perimeter " << perimeter((n), (points)) << ", ";

  }
      //перегрузка оператора вывода
  friend ostream& operator<<(ostream &out, Polygon &p)
  {
    p.print(out);
    return out;
  }
};

class Circle : public Ellipse //класс круг - наследник эллипса
{
public:
  double R;

  Circle(double R): Ellipse(a,b)
  {
    this->R = R;
    this->R = R;
  }

  virtual double area() //вирт метод площадь
  {
    return  Ellipse::area((R), (R)); //исп метод от родит класса эллипс
  }

  virtual double perimeter() //вирт метод периметр
  {
    return Ellipse::perimeter((R), (R)); //исп метод от родит класса эллипс
  }
  virtual  ostream& print(ostream& out)
  {
    out << "Circle, ";
    out << "radius " << R << ", ";
    out << "area " << area() << ", ";
    out << "perimeter " << perimeter() << endl;
  }

  friend ostream& operator<<(ostream &out, Circle &c) //перегрузка оператора выв
  {
    c.print(out);
    return out;
  }
};

class Triangle: public Polygon
{
public:
  Triangle(int n, string vercies): Polygon(n, vercies) //вызов в конструкторе
  {}                               //конструктора родительского класса

  virtual double area()    //вирт метод площадь
  {
    return  Polygon::area( (n), (points));
  }

  virtual double perimeter() //вирт метод периметр
  {
    return Polygon::perimeter( (n), (points));
  }

  virtual  ostream& print(ostream& out) //вирт метод print
  {
    out << "Triagnle ";
    out << "area " << area() << ", ";
    out << "perimeter " << perimeter() << endl;
  }

  friend ostream& operator<<(ostream &out, Triangle& t) //перегрузка
  {                                                   //оператора вывода
    t.print(out);
    return out;
  }
};


int main()
{
    Ellipse e(2,3);
    Circle c(4);
    Triangle t(3, "0.0 0.0 0.0 1.0 1.0 0.0");
    Figure *figures[] = {&e, &c, &t};
    for(int i = 0 ; i < 3; i++)
    {
      cout << *figures[i];
    }
    return 0;
  }
