#include<iostream>
using namespace std;
class unary{
private:
int n;
public:
unary(int x){
n=x;
}
void preopr(){
++n;
}
void postopr(){
n++;
}
void display(){
cout<<"your number :"<<n<<endl;
}
};
int main(){
unary obj(10);
obj.preopr();
obj.display();
obj.postopr();
obj.display();
return 0;
}
