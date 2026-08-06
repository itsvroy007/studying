#include<iostream>
using namespace std;

class Pokemon{
public:
  string name;
  int attack;
  int health;

  Pokemon(){// deafult constructor 
    
  }
  Pokemon(string name, int attack , int health){
    this->name = name;
    this->attack = attack;
    this->health = health;
  }
};

class SuperPokemon {
public:
  Pokemon Pokemon;
  int spcl_attack;

  SuperPokemon(){

  }

};


int sum(int a,int b){
  return a+b;
}

int sum(){
  int a=5;
  int b=7;
  cout<<a+b<<endl;
  return 0;
}


int main(){
  Pokemon p1("Pikachu",78,89);
  SuperPokemon s1;
  s1.spcl_attack= 90;

  int res = sum(7,8);
  cout<<res<<endl;
  sum();
}