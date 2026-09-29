#include<iostream>
#include <string>
using namespace std;

class book {
private:
int bookid;
string title;
string author;
float price;
static int bookcount;

public:
book(int id=0, string t="unknown", string a = "unknown", float p= 0.0){
bookid = id;
title = t;
author = a;
price = p;
bookcount++;
cout<<"book created. total books:"<<bookcount<<endl;
}

book (const book &b) {
bookid = b.bookid;
title =b.title;
author =b.author;
price =b.price;
bookcount++;
cout<<"book copied.total books:"<<bookcount<<endl;
}
book() {
bookcount--;
cout<<"book destroyed. total books:"<<bookcount<<endl;
}
 void display() const {
cout<<"book id:"<<bookid<<endl;
cout<<"title:"<<title<<endl;
cout<<"author:"<<author<<endl;
cout<<"price:"<<price<<endl;
}
static int getbookcount() {
return bookcount;
}
};

int book::bookcount=0;

int main() {
book b1(101, "C++ programming", "bjarne stroustrup", 4500);
cout<<"title:"<<title<<endl;
b1.display();

book b2(b1);
b2.display();

cout<<"total books:"<<book::getbookcount()<<endl;
return 0;
}
