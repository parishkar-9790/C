
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class person
{
protected:
    string name;
    int code;

public:
    void get_per(int c, string s)
    {
        code = c;
        name = s;
    }

    void put_per()
    {
        cout << "\nCode : " << code;
        cout << "\nName : " << name;
    }
};

class account : public virtual person
{
protected:
    float pay;

public:
    void get_pay(float p)
    {
        pay = p;
    }

    void put_pay()
    {
        cout << "\nPay amount : " << pay;
    }
};

class admin : public virtual person
{
protected:
    int exp;

public:
    void get_exp(int e)
    {
        exp = e;
    }

    void put_exp()
    {
        cout << "\nExperiance : " << exp;
    }
};

class master : public account, public admin
{

public:
    void update()
    {
        cout << "Choose to update 1.EID & Name 2.Pay 3.Exp" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int temp;
            string name;
            cout << "Enter new EID and Name ";
            cin >> temp >> name;
            get_per(temp, name);
            break;
        }
        case 2:
        {
            float temp;
            cout << "Enter new pay ";
            cin >> temp;
            get_pay(temp);
            break;
        }
        case 3:
        {
            int temp;
            cout << "Enter new Exp";
            cin >> temp;
            get_exp(temp);
            break;
        }
        }
    }
    void display()
    {
        put_per();
        put_pay();
        put_exp();
        cout << endl;
    }
};

int main()
{
    master p1;

    p1.get_per(111, "Piyush");
    p1.get_pay(501.50);
    p1.get_exp(2);
    p1.display();
    p1.update();
    p1.display();
    return 0;
}