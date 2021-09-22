#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    string assessment;
public:
    Product(string name, double price, string assessment);
    bool isBetter(Product another);
    void print();
};
Product::Product(string name, double price, string assessment) {
    this->name = name;
    this->price = price;
    this->assessment = assessment;
}
bool Product::isBetter(Product another) {
    return true;
}
void Product::print() {
    cout << "��ǰ �̸� : " << name << endl;
    cout << "��     �� : " << price << endl;
    cout << "�ִ� Ŭ�� : " << assessment << endl;
}

int main() {
    Product p1("i9 10900F (�ڸ䷹��ũ S)", 494600, "5.3GHz");
    Product p2("i7 10700K (�ڸ䷹��ũ S)", 436070, "5.1GHz");
    p1.isBetter(p2);
    p1.print();
    cout << endl;
    p2.print();

    return 0;
}