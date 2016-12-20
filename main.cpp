#include <iostream>
using namespace std; 

int fun()
{
  return 2 ; 
}

// 递归算法实例　。　
int drink(int bottle , int cap )
{
  if(bottle < 2 && cap < 4)
    return 0 ; 
  
  int leftbottle , leftcap ;
  leftbottle = bottle/2 + cap/4 + bottle%2 ; 
  leftcap = bottle/2 + cap/4 + cap%4;
  
  return bottle/2+cap/4 + drink(leftbottle , leftcap) ; 
  
}

class human
{
  public :
    virtual string getname() = 0 ; 
};

class man:human
{
  public: 
    string  getname();
};

string man::getname()
{
return "myname's liujie sss"; 
}


int main(int argc, char **argv) {
  man jack;
  string name ; 
  name = jack.getname();
std::cout<<jack.getname() ;  
  std::cout << "Hello, world sss  let's do it second time  !" << std::endl;
    std::cout<< fun()<<std::endl;
    
    std::cout<< 5 +drink(5, 5)<<std::endl; 
    return 0;
}

