#include <iostream>
#include <string>

class Student {
  private:
    std::string name;
    int age;
    double grade;
  public:
    Student(){
      std::cout << "New student created\n";
    }

    void setName(std::string n){
      name = n;
    }
    std::string getName(){
      return name;
    }

    //Setters and getters
    void setAge(int n){
      age = n;
    }
    int getAge(){
      return age;
    }

    // Other public methods
    void sayHi(){
      std::cout << "Hi\n";
    }
    void sayBye();
};

void Student::sayBye(){ // define method outside of the class
  std::cout << "Bye\n";
}

int main(){
  Student s1;
  s1.setName("Joe");
  s1.setAge(20);

  std::cout << s1.getName() << " " << s1.getAge() << std::endl;
  s1.sayHi();
  s1.sayBye();

  return 0;
}