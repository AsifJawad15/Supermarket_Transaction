#include <iostream>
#include <fstream>
#include <string>
#include<windows.h>
using namespace std;

//The following class is an abstract class
class welcome
{

protected:
    int h,s;

public:
    welcome()
    {
        h=33;
        s=46;
    }
    virtual void location()=0;//pure virtual function
};

template <typename T>
class shopping: public welcome
{
private:
    int pcode;
    float price;
    float dis;
    string pname;

public:

    void location();
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void List();
    void receipt();
    friend void goodbye();
    friend ostream& operator<<(ostream& os, const T& item);
};


void goodbye()
{
    cout<<"\n\n";
         HANDLE g=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(g,10);
    cout<<"\t\t\t\t\t**Thanks for purchasing. Come again. Have a nice day!**";
}


//This function shows address of walmart
template <typename T>
void shopping<T>:: location()
{
     HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(h,15);
    cout<<"\t\t\t\t\t\t    Welcome to WALMART\n";
     HANDLE h4=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(h4,12);

    cout<<"\t\t\t\t\t_________________________________________\n";
    HANDLE h11=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(h11,15);
    cout<<"\t\t\t\t\t    Block No. 32"<<", "<<s<<" Michigan Avenue\n";
    cout<<"\t\t\t\t\t    Santa Monica, California, USA\n";
    HANDLE h2=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(h2,9);
    cout<<"\t\t\t\t\t    Facebook Page:WalMart Shopping Inc\n";
    HANDLE h3=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(h3,13);
    cout<<"\t\t\t\t\tWebsite:www.walmart.com  Phone:0923481193\n";

    cout<<"\n\n\n";
}



//This is main menu function
template <typename T>
void shopping<T>:: menu()
{
m:
    int choice;
    string email;
    string password;


    cout<<"\t\t\t\t\t                                     \n";
         HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(h,15);
    cout<<"\t\t\t\t\t               HOME         \n";

    cout<<"\t\t\t\t\t          -------X-------\n";
    cout<<"\t\t\t\t\t                                     \n";

    cout<<"\t\t\t\t\t                                     \n";
    HANDLE p=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(p,10);
    cout<<"\t\t\t\t\t         (1) Executive    \n";
    cout<<"\t\t\t\t\t                              \n";
       HANDLE c=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(c,11);
    cout<<"\t\t\t\t\t         (2) Customer            \n";
    cout<<"\t\t\t\t\t                              \n";
    HANDLE r1=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(r1,12);
    cout<<"\t\t\t\t\t         (3) Exit             \n";
     HANDLE w5=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(w5,15);
    cout<<"\n\t\t\t\t      Please Select:";
    cin>>choice;

    cout<<"\n\n";
    switch(choice)
    {
    case 1:

      {

       cout<<"\t\t\t\t\t                         \n";
             HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(h,12);
        cout<<"\t\t\t\t\t           [Please SignIn]  \n";

        cout<<"\n";
             HANDLE w=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(w,15);
        cout<<"\t\t\t\t      (1) Enter E-mail:";
        cin>>email;
        cout<<"\n";
        cout<<"\t\t\t\t      (2) Enter Password:";
        cin>>password;

        if(email=="asifjawad15@gmail.com" && password=="2107007")
        {
            administrator();
        }
        else
        {
                 HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(h,12);
      cout<<"\n";
            cout<<"\t\t\t\t\tInvalid E-mail or Password.Please try again.\n";
        }
        break;
    }

    case 2:
    {
        buyer();
    }

    case 3:
    {
        exit(0);
    }

    default :
    {
        cout<<"\t\t\t\t\tPlease select from the given options";
    }


    }
    goto m;
}


template <typename T>//This function is for shop owner to modify products
void shopping<T>:: administrator()
{
m:
    int choice;
    cout<<"\n\n\n";


    cout<<"\t\t\t\t\t                             \n";
      HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,12);
    cout<<"\t\t\t\t\t         Only for Authority  \n";

    cout<<"\t\t\t\t\t     __________________________ \n";
    cout<<"\t\t\t\t\t                                \n";
         HANDLE w2=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(w2,15);
    cout<<"\t\t\t\t\t        (1) Add New Products    \n";
    cout<<"\t\t\t\t\t                                \n";
    cout<<"\t\t\t\t\t        (2) Modify Remaining Products  \n";
    cout<<"\t\t\t\t\t                                \n";
    cout<<"\t\t\t\t\t        (3) Remove  Products  \n";
    cout<<"\t\t\t\t\t                                \n";
    cout<<"\t\t\t\t\t        (4) Back To Home Page   \n";
    cout<<"\n";

    cout<<"\n\n\t\t\t\t\tPlease Enter Your choice:";
    cin>>choice;

    switch(choice)
    {
    case 1:
        add();
        break;

    case 2:
        edit();
        break;

    case 3:
        rem();
        break;

    case 4:
        menu();
        break;

    default :

        cout<<"\t\t\t\t\tInvalid choice.Please try again.";

    }
    goto m;
}


//This function is for customer
template <typename T>
void shopping<T>:: buyer()
{
m:
    int choice;
    cout<<"\n\n";

    cout<<"\t\t\t\t\t                       \n";
         HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(h,11);
    cout<<"\t\t\t\t\t                Buyer  \n";

    cout<<"\t\t\t\t\t          _________________ \n";
     HANDLE w5=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(w5,15);
    cout<<"\t\t\t\t\t                            \n";
    cout<<"\t\t\t\t\t           (1) Buy Product  \n";
    cout<<"\t\t\t\t\t           (2) Go Back      \n";
    cout<<"\n";
    cout<<"\t\t\t\t\t         Enter Your choice :";

    cin>>choice;

    switch(choice)
    {
    case 1:
        receipt();
        break;

    case 2:
        menu();

    default:

        cout<<"\t\t\t\t\tInvalid Choice.Please try again.";

    }

    goto m;


}


//Adding new items to file
template <typename T>
void shopping<T> ::add()
{
m:
    fstream data;
    int c;
    int token=0;
    float p;
    float d;
    string n;

    cout<<"\n\n";
     HANDLE w4=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(w4,15);
    cout<<"\t\t\t\t\t                         \n";
    cout<<"\t\t\t\t\t        Add New Products  \n";

    cout<<"\t\t\t\t\t Product code of the product:";
    cin>>pcode;
    cout<<"\n\t\t\t\t\t Name of the product:";
    cin>>pname;
    cout<<"\n\t\t\t\t\t Price of the product:";
    cin>>price;
    cout<<"\n\t\t\t\t\t Discount on the product:";
    cin>>dis;

    data.open("database.txt",ios::app);

    if(!data)
    {
        data.open("database.txt",ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
        data.close();
    }
    else
    {
        data>>c>>n>>p>>d;

        while(!data.eof())
        {
            if(c==pcode)
            {
                token++;
            }
            data>>c>>n>>p>>d;
        }
        data.close();




        if(token==1)
            goto m;
        else
        {
            data.open("database.txt",ios::app|ios::out);
            data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
            data.close();

        }
    }
      HANDLE r22=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(r22,10);
    cout<<"\n\n\t\t\t\t\t\t**Product Added Successfully**";
}


//Modifying items in file
template <typename T>
void shopping<T> ::edit()
{
    fstream data,data1;
    int pkey;
    int token=0;
    int c;
    float p;
    float d;
    string n;

    cout<<"\n\n";

    cout<<"\t\t\t\t\t                           \n";
      HANDLE r21=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(r21,12);
    cout<<"\t\t\t\t\t        Modify Remaining Products  \n";
    cout<<"\t\t\t\t\t       ___________________________\n";
      HANDLE www=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(www,15);
    cout<<"\t\t\t\t\t     Product Current Code:";
    cin>>pkey;

    data.open("database.txt",ios::in);
    if(!data)
    {
        cout<<"\n\nProduct Doesn't Exist! ";
    }
    else
    {
        data1.open("database1.txt", ios::app|ios::out);

        data>>pcode>>pname>>price>>dis;
        while(!data.eof())
        {
            if(pkey==pcode)
            {
                cout<<"\n\t\t\t\t\t     Product New Code:";
                cin>>c;
                cout<<"\n\t\t\t\t\t     New Name of The Product:";
                cin>>n;
                cout<<"\n\t\t\t\t\t     New Price:";
                cin>>p;
                cout<<"\n\t\t\t\t\t     New Discount:";
                cin>>d;
                data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
                  HANDLE r23=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(r23,10);
                cout<<"\n\n\t\t\t\t\t        Record Updated";
                token++;
            }
            else
            {
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
            }
            data>>pcode>>pname>>price>>dis;
        }
        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt","database.txt");

        if(token==0)
        {
              HANDLE rr=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(rr,12);
            cout<<"\n\n Sorry! Product not found.";
        }



    }

}


//Delete items from File
template <typename T>
void shopping<T>::rem()
{

    fstream data,data1;
    int pkey;
    int token=0;
    cout<<"\n\n";

    cout<<"\t\t\t\t\t                         \n";
      HANDLE ra=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(ra,12);
    cout<<"\t\t\t\t\t         Remove Products \n";
    cout<<"\t\t\t\t\t        ________________ \n";
    cout<<"\n";
      HANDLE rw=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(rw,15);
    cout<<"\t\t\t\t\t        Product Code :";
    cin>>pkey;
    data.open("database.txt", ios::in);
    if(!data)
    {
        cout<<"Product doesn't exist";

    }

    else
    {
        data1.open("database1.txt", ios::app|ios::out);
        data>>pcode>>pname>>price>>dis;
        while(!data.eof())
        {
            if(pcode==pkey)
            {
                  HANDLE rg=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(rg,10);
                cout<<"\n\n\t\t\t\t\t   **Product Removed Successfully**";
                token++;
            }
            else
            {
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";

            }
            data>>pcode>>pname>>price>>dis;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt","database.txt");

        if(token==0)
        {
              HANDLE re=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(re,12);
            cout<<"\n\n\t\t\t\t Product not found";
        }

    }
}


//This function shows item lists from file to customer
template <typename T>
void shopping<T>:: List()
{
    fstream data;
    data.open("database.txt",ios::in);
    cout<<" \n";
    cout<<"\t\t\t\t     Product Code.        Name              Price         Discount \n";
    cout<<"\t\t\t\t    ___________________________________________________________________\n";
    data>>pcode>>pname>>price>>dis;
    while(!data.eof())
    {
        cout<<"\t\t\t\t\t";
        cout<<pcode<<"\t\t"<<pname<<"\t\t    "<<price<<"\t\t  "<<dis<<"%\n";

        data>>pcode>>pname>>price>>dis;

    }
    data.close();
}

//This function calculates bill
template <typename T>
void shopping<T> ::receipt()
{
    fstream data;

    int arrc[100];
    int arrq[100];
    char choice;
    int c=0;
    float amount=0;
    float  dis=0;
    float total=0;

    cout<<"\n\n";

    cout<<"\t\t\t\t\t\t                   \n";
      HANDLE cc=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(cc,11);
    cout<<"\t\t\t\t\t\t\t     [Product List]  \n";
      HANDLE w21=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(w21,15);
    cout<<" \n";
    data.open("database.txt",ios::in);
    if(!data)
    {
        cout<<"\n\n Empty Database";
    }

    else
    {
        data.close();

        List();
        cout<<"\n";

        cout<<"\t\t\t\t                                                 \n";
        cout<<"\t\t\t\t               Please Place Your Order           \n";
        cout<<"\t\t\t\t     ___________________________________________ \n";

        do
        {
m:
            cout<<"\n\n";
            cout<<"\t\t\t\t    Enter Product Code:";
            cin>>arrc[c];
            cout<<"\n";
            cout<<"\t\t\t\t    Enter The Product Quantity:";
            cin>>arrq[c];
            for(int i=0; i<c; i++)
            {
                if(arrc[c]==arrc[i])
                {
                    cout<<"\n\n Duplicate Product Code.Please Try Again.";
                    goto m;
                }
            }
            c++;
            cout<<"\n\n";
            cout<<"\t\t\t\tDo you want to buy another product?\n";
            cout<<"\t\t\t\tPress y for yes and n for no=";
            cin>>choice;
        }
        while(choice=='y');


        cout<<"\n\n";
             HANDLE r=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(r,12);
        cout<<"\t\t\t\t____________________________RECEIPT_________________________________\n";
             HANDLE w5=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(w5,15);
        cout<<"\t\t\t\t";
        cout<<"Product Code   Name       Quantity    Price     Price with Discount\n";

        for(int i=0; i<c; i++)
        {
            data.open("database.txt",ios::in);
            data>>pcode>>pname>>price>>dis;
            while(!data.eof())
            {
                if(pcode==arrc[i])
                {
                    amount=price*arrq[i];
                    dis=amount-(amount*dis/100);
                    total=total+dis;
                    cout<<"\n"<<"\t\t\t\t"<<"  "<<pcode<<"\t       "<<pname<<"\t     "<<arrq[i]<<"\t       "<<amount<<"\t      "<<dis;
                }
                data>>pcode>>pname>>price>>dis;
            }
            data.close();

        }



    }
      HANDLE r1=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(r1,12);
    cout<<"\n\t\t\t\t____________________________________________________________________";
     HANDLE w6=GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(w6,15);
    cout<<"\n\t\t\t\t\t\t\tTotal Cost="<<total;
    goodbye();
}
template <typename T>
ostream& operator<<(ostream& os, const shopping<T>& item)
{
    os << "Product Code: " << item.pcode << "\n";
    os << "Product Name: " << item.pname << "\n";
    os << "Price: " << item.price << "\n";
    os << "Discount: " << item.dis << "%\n";
    return os;
}
int main()
{
    welcome *asif;  // abstract class pointer
    shopping<int> ast;  // Specify the template argument (e.g., int)
    asif = &ast;
    asif->location();
    ast.menu();
    return 0;
}

