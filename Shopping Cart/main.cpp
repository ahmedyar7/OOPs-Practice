#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Product
{
private:
    string productID;
    string name;
    string description;
    int price;
    int qty;

public:
    // Constructor
    Product(string productID, string name, string description, int price, int qty)
    {
        this->productID = productID;
        this->name = name;
        this->description = description;
        this->price = price;
        this->qty = qty;
    }
    // Getters
    string getProductID() { return productID; }
    string getname() { return name; }
    string getdescription() { return description; }
    int getprice() { return price; }
    int getqty() { return qty; }

    // Setters
    void setProductID(string id) { productID = id; }
    void setname(string pname) { name = pname; }
    void setdescription(string p_description) { description = p_description; }
    void setprice(int p_price) { price = p_price; }
    void setqty(int p_qty) { qty = p_qty; }
};

// Cart class: Create a Cart class that stores the products added by the user and provides methods to add products, remove products, view the cart, and calculate the total cost.

class Cart
{
    vector<Product> product;

public:
    void add_products(Product products)
    {
        product.push_back(products);
    }

    void view_products(void)
    {
        for (auto products : product)
        {
            cout << "Product ID: " << products.getProductID() << endl;
            cout << "Product Name: " << products.getname() << endl;
            cout << "Product Description: " << products.getProductID() << endl;
            cout << "Product Price: " << products.getprice() << endl;
            cout << "Product QTY: " << products.getqty() << endl;

            cout << endl; // for the new line
        }
    }

    int average_price_products()
    {
    }
};

int main()
{
    Product product1("123", "Diary Milk", "Cholocate", 120, 2);
    Product product2("1234", "Day Dream", "Cholocate", 30, 2);
    Product product3("1235", "Lays Spicey", "Spicy", 100, 2);
    Product product4("1236", "Lays Salty", "Salty", 1920, 20);

    Cart cart;

    cart.add_products(product1);
    cart.add_products(product2);
    cart.add_products(product3);
    cart.add_products(product4);

    cart.view_products();
}