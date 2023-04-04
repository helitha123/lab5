#include<iostream>
#include<fstream>

using namespace std;

class shopping
{
    private:
        int pcode;
        float price;
        float dis;
        string pname;

        public:
            void menu();
            void administrator();
            void buyer();
            void add();
            void edit();
            void rem();
            void list();
            void receipt();

};

void shopping :: menu()
{

    m:
    int choice;
    string email;
    string password;

    cout<<"\t\t\t__________________________________\n";
    cout<<"\t\t\t                                  \n";
    cout<<"\t\t\t        Supermarket Main Menu     \n";
    cout<<"\t\t\t                                  \n";
    cout<<"\t\t\t__________________________________\n";
    cout<<"\t\t\t                                  \n";
    cout<<"\t\t\t| 1) Administrator   |\n";
    cout<<"\t\t\t|                    |\n";
    cout<<"\t\t\t| 2)Buyer            |\n";
    cout<<"\t\t\t|                    |\n";
    cout<<"\t\t\t| 3)Exit             |\n";
    cout<<"\n\t\t Please select!";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"\t\t\t Please Login \n";
            cout<<"\t\t\t Enter Email  \n";
            cin>> email;
            cout<<"\t\t\t Password     \n";
            cin>>password;

            if (email = "robby@email.com" && password = "robby@123")
            {
                administrator();

            }
            else
            {
                cout<< "Invalid Email/password";

            }
            break;


        case 2:
            {
                buyer();
            };

        case 3:
            {
                exit(0);

            }

            default :
                {
                    cout<< "Please select from the given options";

                }








    }
    goto m;


}


