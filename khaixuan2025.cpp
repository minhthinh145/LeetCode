#include <iostream>
using namespace std;
class Person{
    private :
    string name;
    int age;
    int curYear;
    public:
    Person(string _name , int _age , int _cur){
        name = _name;
        age = _age;
        curYear = _cur;
    }
    void Chaoxuan(){
        cout<< this->name << " Chao mung nam 2025" << endl;
    }
};
int main(){
    Person Thinh("MinhThinh",20,2025);
    Thinh.Chaoxuan();
    return 0;
}