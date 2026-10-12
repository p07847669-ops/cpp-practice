#include <iostream>
#include <string>
using namespace std;

class StaticExample {
private:
    static int count;
    int id;

public:
    StaticExample() {
        count++;
        id = count;
    }

    static void showCount() {
        cout << "Total objects created: " << count << endl;
    }

    void display() const {
        cout << "Object Id: " << id << endl;
    }
};

int StaticExample::count = 0;

class ClassA;
class ClassB;

class ClassA {
private:
    int valueA;

public:
    ClassA(int v) : valueA(v) {}

    friend void compareValues(ClassA &a, ClassB &b);
};

class ClassB {
private:
    int valueB;

public:
    ClassB(int v) : valueB(v) {}

    friend void compareValues(ClassA &a, ClassB &b);
};

void compareValues(ClassA &a, ClassB &b) {
    cout << "Value in ClassA: " << a.valueA << endl;
    cout << "Value in ClassB: " << b.valueB << endl;

    if (a.valueA > b.valueB)
        cout << "ClassA value is greater" << endl;
    else if (a.valueA < b.valueB)
        cout << "ClassB value is greater" << endl;
    else
        cout << "Both values are equal" << endl;
}

class SecretData {
private:
    string password;
    int secretNumber;

public:
    SecretData(string p, int n)
        : password(p), secretNumber(n) {}

    friend class FriendClassExample;
};

class FriendClassExample {
public:
    void displaySecret(SecretData &s) {
        cout << "Password: " << s.password << endl;
        cout << "Secret Number: " << s.secretNumber << endl;
    }
};

int main() {
    cout << "=== Static Members ===" << endl;

    StaticExample s1, s2, s3;
    StaticExample::showCount();

    s1.display();
    s2.display();
    s3.display();

    cout << "\n=== Friend Function ===" << endl;

    ClassA a(50);
    ClassB b(30);
    compareValues(a, b);

    cout << "\n=== Friend Class ===" << endl;

    SecretData secret("myPassword123", 999);
    FriendClassExample friendObj;
    friendObj.displaySecret(secret);

    return 0;
}
Friend wale ka hai
#include <iostream>
#include <string>
using namespace std;
class Product{
    private:
    int productId;
    string productName;
    float price;
    int monthlySales[12];
    int totalQuantity;
    float totalBill;
    public:
    void acceptDetails(){
        cout<<"Enter Product id:";
        cin>>productId;
        cin.ignore();
        cout<<"Enter product name:";
        getline(cin,productName);
        cout<<"Enter price per unit:";
        cin>>price;
        cout<<"Entermonthly sales for 12 months:";
        totalQuantity=0;
        for(int i=0;i<12;i++){
            cin>>monthlySales[i];
            totalQuantity+=monthlySales[i];
        }    
        totalBill=totalQuantity*price;
    }
    void displayDetails(){
        cout<<"\nProduct Id:"<<…
Product
#include <iostream>
using namespace std;
class Rectangle{
private:
float length;
float breadth;
public:
void setDimensions(float l,float b){
  length=l;
  breadth=b;
}
float calculateArea();
float calculatePerimeter();
void display();
};
float Rectangle::calculateArea(){
  return length*breadth;}
float Rectangle::calculatePerimeter(){
  return 2*(length+breadth);
}
void Rectangle::display(){
  cout<<"Length:"<<length<<endl;
  cout<<"Breadth:"<<breadth<<endl;
  cout<<"Area:"<<calculateArea()<<endl;
  cout<<"Perimeter:"<<calculatePerimeter()<<endl;
}
int main(){
  Rectangle rect;
float l,b;
cout<<"Enter length and breadth:";
cin>>l>>b;
rect.setDimensions(l,b);
rect.display();
return 0;
}