#include <iostream>
#include <string>

class Book {
  private:
    int pages;
    std::string title;
  public:
    Book(){
      pages = 0;
      title = "Undefined Book";
    }

    void setPages(int n){
      pages = n;
    }
    int getPages(){
      return pages;
    }

    void setTitle(std::string t){
      title = t;
    }
    std::string getTitle(){
      return title;
    }
};

class SeriesBook : public Book { // access specifier to tell compiler how members are inherited
  public:
    std::string sequel;
};


int main(){
  SeriesBook Dune;
  std::cout << Dune.getTitle();


  return 0;
}