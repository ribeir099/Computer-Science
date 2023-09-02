#include <iostream>

using namespace std;

class Animal
{
public:
  void falar(){};
};

class Humano : public Animal
{
public:
  void falar()
  {
    cout << "\n Oi \n";
  }
};

class Cao : public Animal
{
public:
  void falar()
  {
    cout << "\n Au au, auuuuuu \n";
  }
};

class Gato : public Animal
{
public:
  void falar()
  {
    cout << "\n Miau \n";
  }
};

int main()
{
  Animal a1;
  Humano h1;
  Cao c1;
  Gato g1;

  a1.falar();
  h1.falar();
  c1.falar();
  g1.falar();

  return 0;
}
