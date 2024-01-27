//here we will create the three classes
#include<string>
#include<unordered_map>
using namespace std;
//forward declaration 
class Item;
class Cart;
class Product{
    int id;
    string name;
    int price;
    public:
    Product(){

    }
    Product(int u_id,string name,int price){
        //assignment method 
        u_id=id;
        this->name=name;
        this->price=price;
    }
    string getdisplayname(){
        return name+":rs"+to_string(price)+"\n";
    }
    string getshortname(){
        return name.substr(0,1);
    }
    friend class Item;
    friend class Cart;
};
class Item{
    Product product;
    int quantity;
    public:
    Item(){}
    Item(Product p,int q):product(p),quantity(q){}//initialization method
    int getitemprice(){
        return quantity*product.price;
    }
    string getiteminfo(){
        return to_string(quantity)+" x "+product.name+" Rs "+to_string(quantity*product.price)+"\n";
    }
    friend class Cart;
};
class Cart{
    unordered_map<int,Item>items;
    public:
    void addproduct(Product product){
        if(items.count(product.id)==0){
            Item newItem(product,1);
            items[product.id]=newItem;
        }
        else{
            items[product.id].quantity+=1;
        }
    }
}