#include <iostream>
#include <string>
#include<cmath>

using namespace std;

int main()
{

string printerTem,phoneTem,tableTem, answer, name;
double printer_A,phone_B,table_C;
double totalCost;
double amount;
double yourVat;
double theChange,yourBalance;


int priceForPrinter = 200;
int priceForPhone = 150;
int priceForTable= 50;
double vat = 0.12;



    cout<<"Please your name"<<endl;
    cin>> name;
    getline(cin, name);

    string I_D;
    cout<< name<<endl;
    cout<<"Please your ID"<<endl;
    cin>> I_D;
    cout<<""<<endl;


    cout <<"You can purchase these items from us" <<endl;
    cout <<"Printer= $200"<<endl;
    cout <<"Printer= $150"<<endl;
    cout <<"Table= $50"<<endl;

    cout<<""<<endl;


   cout << "Please how many printers do you want to buy?" <<endl;
    cin >> printer_A;

    cout<< "" <<endl;

    cout << "Please how many Phones do you want to buy??" <<endl;
    cin >> phone_B;

    cout<< "" <<endl;

    cout << "Please how many Tables do you want to buy??" <<endl;
    cin >> table_C;

    cout<< "" <<endl;


    cout << "Cost" <<endl;
    totalCost=((priceForPrinter*printer_A)+(priceForPhone*phone_B)+(priceForTable*table_C));
    yourVat=(totalCost*vat);
    cout << totalCost<< endl;

    cout<<""<<endl;


    cout<<"Please make your payment"<<endl;
    cin >>amount;

    if(amount == totalCost){
            cout << "Thank you, hope to see you again" <<endl;
    }
    else if (amount >totalCost){
            cout <<"Your receipt is coming" <<endl;

    }




    cout<< "YOUR RECEIPT" <<endl;
    cout<< "" <<endl;

    cout<< "Name :";
    cout<< name <<endl;

    cout<< "Unique ID :";
    cout<< I_D<<endl;
    cout<< "Items bought:" <<endl;

    cout<< "Printer =";
    cout<< printer_A;
    cout<< "= ";
    cout<< priceForPhone*printer_A<<endl;

    cout<< "Phone =";
    cout<< phone_B;
    cout<< "= ";
    cout<< priceForPhone*phone_B<<endl;

    cout<< "Table =";
    cout<< table_C;
    cout<< "= ";
    cout<< priceForTable*table_C<<endl;

    cout<< "Your Vat Amount = ";
    cout<< yourVat<<endl;

    cout<< "Cost = ";
    cout<< totalCost<<endl;

    cout<< "Total amount= ";
    cout<< amount<<endl;

    yourBalance=totalCost-amount;
    theChange=amount-totalCost;


    if(amount==totalCost)
    {
        cout<< "Thanks for coming" <<endl;
    }
    else if(amount>totalCost)
    {


        cout<< "Your change= ";
        theChange = amount-totalCost;
        cout<< theChange<<endl;
        cout<< "Thanks for coming" <<endl;
    }

   return 0;

}
