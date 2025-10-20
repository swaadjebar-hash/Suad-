#include <iostream>
#include <string>
using namespace std;

class Plants {
private:
    string name;
    string type;
    string color;

public:
    void setData(string n, string t, string c)  // ← كانت satData → setData
    {
        name = n;
        type = t;
        color = c;
    }

    void display()
    {
        cout << "The name: " << name << endl;
        cout << "The type: " << type << endl;
        cout << "The color: " << color << endl;
    }
};

int main()
{
    Plants rose, palm;

    rose.setData("Rose", "Flower", "Red");
    rose.display();

    palm.setData("Palm", "Tree", "Green");
    palm.display();  // ← كانت Palm.display() بحرف كبير خطأ

    return 0;
}
