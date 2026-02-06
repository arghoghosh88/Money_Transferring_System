#include<bits/stdc++.h>
#include<conio.h>

using namespace std;
class user
{
    //--< Private Attributes >--
private:
    string name;
    string pin;
    string phone_num;
    double balance;

public:
    user() {}//Default constructor

    //---- Setter & getter method to set values -----

    void set_name(string n)
    {
        name = n;
    }

    string get_name()
    {
        return name;
    }

    void set_pin(string p)
    {
        pin = p;
    }

    string get_pin()
    {
        return pin;
    }

    void set_PNum(string ph)
    {
        phone_num = ph;
    }
    string get_PNum()
    {
        return phone_num;
    }

    void set_balance(double b)
    {
        balance = b;
    }

    double get_balance()
    {
        return balance;
    }

    // Choose a option for operation

    void Choice(int ch)
    {


        cout<<"======================="<<endl;
        cout<<"|-<1>- Cash Out "<<endl;
        cout<<"|-<2>- Cash In " <<endl;
        cout<<"|-<3>- Send Money "<<endl;
        cout<<"|-<4>- Mobile Recharge "<<endl;
        cout<<"|-<5>- Payment "<<endl;
        cout<<"|-<6>- Bill Pay "<<endl;
        cout<<"|-<7>- My App "<<endl;
        cout<<"|-<8>- Pin Reset "<<endl;
        cout<<"======================="<<endl;

        cout<<"Enter your Choice : ";
        cin>>ch;

        switch(ch)
        {
        case 1:
            cash_out();
            break;
        case 2:
            Cash_In();
            break;
        case 3:
            Send_Money();
            break;
        case 4:
            Recharge();
            break;
        case 5:
            Payment();
            break;
        case 6:
            Pay_bill();
            break;
        case 7:
            My_app();
            break;
        case 8:
            Pin_Reset();
            break;

        }
    }

//--- This function is for Pin resting ----

    void Pin_Reset()
    {
        cout<<"To reset your pin enter your previous pin "<<endl;
        string pn;

        cout<<"Enter your previous pin : ";
        cin>>pn;

        if(pn == get_pin())
        {
            cout<<"Now you can change your pin "<<endl;
            string np;
            cout<<"Enter your new pin : ";

            char c;
            int i=0;

            while(i<7)
            {
                c = getch();
                if(c == 13)
                {
                    break;
                }

                np += c;
                cout<<"*";
                i++;
            }
            set_pin(np);
            updateFile();
        }
    }


//This function is for getting into my app option -------

    void My_app()
    {
        int c;

        cout<<"1. Balance Enquiry "<<endl;
        cout<<"2. Mini statement"<<endl;
        cout<<"3. Helpline "<<endl;
        cout<<"4. Main menu "<<endl;

        cout<<"Enter your choice : ";
        cin>>c;

        if(c == 1)
        {
            cout<<"Enter your pin to see your balance : ";

            string pn;
            char ch;

            string p;
            int i=0;

            while(i<7)
            {
                if(ch == 13)
                {
                    break;
                }
                ch = getch();

                p += ch;
                cout<<"*";
                i++;
            }

            if(p == get_pin())
            {
                cout<<"Your balance : "<<get_balance()<<endl;
            }
            else
            {
                cout<<"Invalid Pin"<<endl;
            }
        }
        else if(c == 2)
        {
            cout<<"Your name : "<<get_name()<<endl;
            cout<<"Your Number : "<<get_PNum()<<endl;
            cout<<"Your current balance : "<<get_balance()<<endl;
        }
        else if(c == 3)
        {
            cout<<"Call at '999'"<<endl;
        }
        else if(c == 4)
        {
            int b;
            Choice(b);
        }
        else
        {
            cout<<"Invalid input "<<endl;
        }

    }

//---- This function is for cash out section ---
void cash_out()
{
    string rnum;
    cout<<"Enter receiver Phone number : ";
    cin>>rnum;

    int amt;
    cout<<"Enter amount : ";
    cin>>amt;

    string pn;
    cout<<"Enter your PIN : ";

    char c;
    int i=0;
    while(i<7)
    {
        c=getch();

        if(c==13)
        {
            break;
        }
        pn+=c;
        cout<<"*";
        i++;
    }

    if(pn==pin)
    {
        balance -= amt;
        updateFile();

        cout<<"\nCash out Successful!"<<endl;
        cout<<"Receiver : "<<rnum<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
    else
    {
        cout<<"\nWrong PIN"<<endl;
    }
}


    //--- This function is for Cash in section ---

    void Cash_In()
    {
        cout<<"Enter your Phone number : ";
        string phone_number;
        cin>>phone_number;

        int amnt;
        cout<<"Give your Cash-in amount : ";
        cin>>amnt;

        cout<<"Enter your pin : ";

        char c;
        string pn;
        int i=0;

        while(i<7)
        {
            if(c == 13)
            {
                break;
            }
            c = getch();
            pn += c;
            cout<<"*";
            i++;
        }

        if(pn == pin)
        {
            balance += amnt;
            updateFile();
        }

        cout<<"Cash out Successful!"<<endl;
        cout<<"Your current balance = "<<get_balance()<<endl;
    }

    //--- This function is for Send money section ---

    void Send_Money()
    {
        cout<<"Enter receiver phone number : ";
        string uph;
        cin>>uph;

        cout<<"Enter the amount to send : ";
        int mn;
        cin>>mn;

        string pn;
        cout<<"Enter your PIN : ";

        char c;
        int i=0;
        while(i<7)
        {
            if(c == 13)
            {
                break;
            }
            c = getch();
            pn += c;
            cout<<"*";
            i++;
        }

        if(pn == pin)
        {
            balance -= mn;
            updateFile();
        }

        cout<<"Send Money successful!"<<endl;
        cout<<"Receiver Phone Number : "<<uph<<endl;
        cout<<"Your current balance : "<<get_balance()<<endl;
    }


    //--- This is the Recharge section ---

    void Recharge()
    {
        cout<<"Enter phone number for recharge : ";
        string pnum;
        cin>>pnum;

        cout<<"Enter recharge amount : ";
        int amnt;
        cin>>amnt;

        cout<<"Enter your PIN : ";
        char c;

        string pn;
        int i=0;
        while(i<7)
        {
            if(c == 13)
            {
                break;
            }
            c = getch();
            pn += c;
            cout<<"*";
            i++;
        }

        if(pn == pin)
        {
            balance -= amnt;
            updateFile();
        }

        cout<<"Mobile recharge successful! "<<endl;
        cout<<"Receiver number : "<<pnum<<endl;
        cout<<"your current balance : "<<get_balance()<<endl;
    }

    void Payment()
    {
        cout<<"Enter receiver phone number : ";
        string uph;
        cin>>uph;

        cout<<"Enter the amount for payment : ";
        int mn;
        cin>>mn;

        string pn;
        cout<<"Enter your PIN : ";

        char c;
        int i=0;

        while(i<7)
        {
            if(c == 13)
            {
                break;
            }
            c = getch();
            pn += c;
            cout<<"*";
            i++;
        }

        if(pn == pin)
        {
            balance -= mn;
            updateFile();
        }

        cout<<"your Payment was successful!"<<endl;
        cout<<"Receiver Phone Number : "<<uph<<endl;
        cout<<"Your current balance : "<<get_balance()<<endl;
    }

    //Paying bill Section ----

    void Pay_bill()
    {
        int t;
        cout<<"Enter your choice to pay your bill : ";
        cin>>t;

        cout<<"-<1>- Current bill "<<endl;
        cout<<"-<2>- Water bill "<<endl;
        cout<<"-<3>- Gas bill "<<endl;

        if(t == 1)
        {
            cout<<"Pay your current bill "<<endl;
        }
        else if(t == 2)
        {
            cout<<"Pay your water bill "<<endl;
        }
        else if(t == 3)
        {
            cout<<"Pay your Gas bill "<<endl;
        }

        cout<<"Enter receiver phone number : ";
        string uph;
        cin>>uph;

        cout<<"Enter the amount to pay : ";
        int mn;
        cin>>mn;

        string pn;

        cout<<"Enter your PIN : ";
        char c;
        int i=0;

        while(i<7)
        {
            if(c == 13)
            {
                break;
            }
            c = getch();
            pn += c;
            cout<<"*";
            i++;
        }

        if(pn == pin)
        {
            balance -= mn;
            updateFile();
        }

        cout<<"Your bill has been paid!"<<endl;
        cout<<"Receiver Phone Number : "<<uph<<endl;
        cout<<"Your current balance : "<<get_balance()<<endl;
    }

    //-- Save Information to file section----


    void SaveInfoToFile()
    {
        ofstream fout("MT.txt",ios::app);

        fout<<phone_num<<" "<<pin<<" "<<balance<<endl;

        fout.close();
    }

    //--- Log In to File section ---


    bool LoginFile(string ph, string p)
    {
        ifstream fin("MT.txt");

        string fph,fpin;

        double fbal;

        while(fin>>fph>>fpin>>fbal)
        {
            if(fph == ph && fpin == p)
            {
                phone_num = fph;
                pin = fpin;
                balance = fbal;
                return true;
                fin.close();
            }
        }
        return false;
        fin.close();

    }

    //--- Update file after decrement or increment from the main balance ---

    void updateFile()
    {
        ifstream fin("MT.txt");
        ofstream fout("temp.txt");

        string fph,fpin;
        double fbal;

        while(fin>>fph>>fpin>>fbal)
        {
            if(pin == fpin)
            {
                fout<<phone_num<<" "<<pin<<" "<<balance<<endl;
            }
            else
            {
                fout<<fph<<" "<<fpin<<" "<<fbal<<endl;
            }
        }

        fin.close();
        fout.close();

        remove("MT.txt");
        rename("temp.txt","MT.txt");
    }

    //--- This function is for set information ----

    void Set_info(string nm, string pn,string ph_n, double bal)
    {
        cout<<"Enter your name : ";
        cin.ignore();
        getline(cin,nm);

        set_name(nm);

        cout<<"Set your 6 digit pin : ";
        char c;
        int i=0;

        while(i<7)
        {
            if(c == 13)
            {
                break;
            }
            c = getch();
            pn += c;
            cout<<"*";
            i++;
        }

        set_pin(pn);

        cout<<"Enter your Phone number : ";
        cin>>ph_n;

        set_PNum(ph_n);

    }

};

int main()
{
    cout<<"---< Welcome to AK Money Transferring system >---"<<endl;
    cout<<"Choose one "<<endl;
    cout<<"If you have any account then press 'Y' Otherwise press 'N'."<<endl;
    char ce;
    cin>>ce;
    if(ce  == 'Y' || ce == 'y')
    {
        user s2;
        string number;
        cout<<endl<<"Enter your phone number : ";
        cin>>number;

        string pn;
        cout<<"Enter your pin : ";
        char c;
        int i=0;

        while(i<7)
        {
            c = getch();
            if(c == 13)
            {
                break;
            }
            pn += c;
            cout<<"*";
            i++;
        }
        cout<<endl;
        int c1;
        s2.LoginFile(number, pn);
        s2.Choice(c1);
    }
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    user s[n];

    for(int j=0; j<n; j++)
    {
        string name;
        cout<<"Enter your name : ";
        cin.ignore();
        getline(cin,name);

        string pn;
        cout<<"Set your pin : ";
        char c;
        int i=0;

        while(i<7)
        {
            c = getch();
            if(c == 13)
            {
                break;
            }
            pn += c;
            cout<<"*";
            i++;
        }

        string number;
        cout<<endl<<"Enter your phone number : ";
        cin>>number;


        double bal;
        cout<<"Enter your balance : ";
        cin>>bal;

        s[j].set_name(name);
        s[j].set_PNum(number);
        s[j].set_pin(pn);
        s[j].set_balance(bal);


        int c1;
        s[j].SaveInfoToFile();

        s[j].Choice(c1);
    }

    return 0;
}
