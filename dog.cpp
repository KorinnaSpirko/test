#include "dog.h"

/* Default constructor */
Dog::Dog(){
  cout << "Enter the dog's name: ";
  cin >> name;
  cout << "Enter the dog's breed: ";
  cin >> breed;
  cout << "Enter the dog's age: ";
  cin >> age;
}

/* Argument-based constructor */
Dog::Dog(string name, string breed){
  this->name = name;
  this->breed = breed;
  this->age = 0;
}

/* Destructor */
Dog::~Dog(){
  // Nothing to do here
}

/* Print out the information associated with a single Dog object */
void Dog::output() {
  cout << "Name: " << name << ", ";
  cout << "Breed: " << breed << ", ";
  cout << "Age: " << age << endl;
}

/* Determine if a given dog is the same as "this" dog */
bool Dog::same_dog(Dog other_dog) {
  return name == other_dog.name &&
         breed == other_dog.breed &&
         age == other_dog.age;
}

/* Name getter */
string Dog::getName() {
  return name;
}

/* Breed getter */
string Dog::getBreed() {
  return breed;
}

/* Breed setter */    
void Dog::setBreed(string breed) {
  this->breed = breed;
}

/* Age incrementer */    
void Dog::birthday() {
  age += 1;
}


