//two ways of creating onjects
#include<iostream>
using namespace std;
class Person{
public :
     int RollNo;
     String name; 

}

int main(){
    Person p1 ;//automatic allocation and deletion of memory in stack
    Person *p2 = new Person();//should use new and delete and is stored in heap

    

}