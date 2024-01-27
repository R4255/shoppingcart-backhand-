#include<vector>
#include"datamodel.h"
using namespace std;
vector<Product>allproducts={
    Product(1,"apple",26),
    Product(3,"mango",16),
    Product(2,"guave",36),
    Product(5,"banana",56),
    Product(4,"strawberry",29),
    Product(6,"pineapple",20)
};
Product chooseproduct(){
    string productlist;
    cout<<"available choices of product"<<endl;
    for(auto product:allproducts){
        productlist.append(product.getdisplayname());
    }
    cout<<productlist<<endl;
    cout<<"--------------"<<endl;
    
}
int main(){
    char action;
    while(true){
        cout<<"Select an action -  (a)dd item, (v)iew cart, (c)heckout"<<endl;
        cin>>action;
        if(action=='a'){

        }
    }       
}