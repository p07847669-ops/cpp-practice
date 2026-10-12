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
        cout<<"\nProduct Id:"<<productId<<endl;
        cout<<"Product name:"<<productName<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<"Total Quantity Sold:"<<totalQuantity<<endl;
        cout<<"Total Bill:"<<totalBill<<endl;
    }
    float gettotalBill() const{
        return totalBill;
    }
};
int main(){
    int n;
    cout<<"Enter number of products:";
    cin>>n;
    Product products[100];
    float grandTotal=0;
    for(int i=0;i<n;i++){
        cout<<"\n----Product"<<(i+1)<<"Details---"<<endl;
        products[i].acceptDetails();
        grandTotal+=products[i].gettotalBill();
    }
    cout<<"\n----All product Details----"<<endl;
    for(int i=0; i<n;i++){
        products[i].displayDetails();
    }
    cout<<"\n Grand Total Bill:"<<grandTotal<<endl;
    return 0;
}
