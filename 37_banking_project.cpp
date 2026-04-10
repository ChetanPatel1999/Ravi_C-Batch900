#include <iostream>
using namespace std;
class account
{
    string ac_holder_name;
    string ac_no;
    int balance;
    static string bank_name;
    static int total_acc;
    static int total_bank_balance;

public:
    static void createAccount(account ac[], int index)
    {
        if (index < 10)
        {
            cout << "\n\n-----welcome to create account page------" << endl;
            cout << "enter your account holder name :";
            cin >> ac[index].ac_holder_name;
            cout << "enter your account no. :";
            cin >> ac[index].ac_no;
            cout << "enter your initial bank balance :";
            cin >> ac[index].balance;
            total_acc++;
            total_bank_balance = total_bank_balance + ac[index].balance;
            cout << "\n\n....create account successfully....\n";
        }
        else
        {
            cout << "\n\naccount create limit full ...\n\n";
        }
    }
    static void displayAccount(account ac[], int index)
    {
        if (index > 0)
        {
            int i;
            for (i = 0; i < index; i++)
            {
                cout << "\n\naccount " << i + 1 << " info :" << endl;
                cout << "bank name :" << bank_name << endl;
                cout << "account holder  name :" << ac[i].ac_holder_name << endl;
                cout << "account no. :" << ac[i].ac_no << endl;
                cout << "account belence :" << ac[i].balance << endl;
                cout << "-----------------------------\n";
            }
        }
        else
        {
            cout << "\n\n no one account create in bank\n\n";
        }
    }

    static void displayIndividualAccount(account ac[], int index)
    {
        if (index > 0)
        {
            string number;
        lable:
            cout << "\n\nenter your account no :  ";
            cin >> number;
            int i, f = 0;
            for (i = 0; i < index; i++)
            {
                if (number == ac[i].ac_no)
                {
                    cout << "\n\naccount " << i + 1 << " info :" << endl;
                    cout << "bank name :" << bank_name << endl;
                    cout << "account holder  name :" << ac[i].ac_holder_name << endl;
                    cout << "account no. :" << ac[i].ac_no << endl;
                    cout << "account belence :" << ac[i].balance << endl;
                    cout << "-----------------------------\n";
                    f = 1;
                }
            }
            if (f == 0)
            {
                printf("\n\n---wrong account number---\n\n");
                goto lable;
            }
        }
        else
        {
            cout << "\n\n no one account create in bank\n\n";
        }
    }

    static void withdrawAmmount(account ac[], int index)
    {
        if (index > 0)
        {
            string number;
        lable:
            cout << "\n\nenter your account no :  ";
            cin >> number;
            int i, f = 0;
            for (i = 0; i < index; i++)
            {
                if (number == ac[i].ac_no)
                {
                    int amount;
                lab2:
                    cout << "enter amount : ";
                    cin >> amount;
                    if (amount <= ac[i].balance)
                    {
                        ac[i].balance = ac[i].balance - amount;
                        total_bank_balance = total_bank_balance - amount;
                        cout << "\n\n---amount " << amount << " is withdraw succefully---\n";
                        cout << "---reamaing belence in your account " << ac[i].balance << "---\n\n";
                    }
                    else
                    {
                        cout << "\n\n---insufficiant belence---\n";
                        cout << "---you have only " << ac[i].balance << " amount---\n\n";
                        goto lab2;
                    }
                    f = 1;
                }
            }
            if (f == 0)
            {
                printf("\n\n---wrong account number---\n\n");
                goto lable;
            }
        }
        else
        {
            cout << "\n\n no one account create in bank\n\n";
        }
    }
    static void depositeAmmount(account ac[], int index)
    {
        if (index > 0)
        {
            string number;
        lable:
            cout << "\n\nenter your account no :  ";
            cin >> number;
            int i, f = 0;
            for (i = 0; i < index; i++)
            {
                if (number == ac[i].ac_no)
                {
                    int amount;
                    cout << "enter amount : ";
                    cin >> amount;
                    ac[i].balance = ac[i].balance + amount;
                    total_bank_balance = total_bank_balance + amount;
                    cout << "\n\n---amount deposite succefully---\n";
                    cout << "---noy your account belence is " << ac[i].balance << "---\n\n";
                    f = 1;
                }
            }
            if (f == 0)
            {
                printf("\n\n---wrong account number---\n\n");
                goto lable;
            }
        }
        else
        {
            cout << "\n\n no one account create in bank\n\n";
        }
    }
    static void TotalAccount(int index)
    {
        if (index > 0)
        {
            cout << "\n\n---total account in bank : " << total_acc << "---\n\n";
        }
        else
        {
            cout << "\n\n no one account create in bank\n\n";
        }
    }
    static void TotalAmount(int index)
    {
        if (index > 0)
        {
            cout << "\n\n---total Bank balance : " << total_bank_balance << "---\n\n";
        }
        else
        {
            cout << "\n\n no one account create in bank\n\n";
        }
    }
};
string account::bank_name = "HDFC";
int account::total_acc = 0;
int account::total_bank_balance = 0;

int main()
{
    int num;
    int index = 0;

    account ac[10];
    while (true)
    {
        cout << "\n\n<------welcome to my bank------>" << endl;
        cout << "-------------------------------------" << endl;
        cout << "1. create new account " << endl;
        cout << "2. display all bank account " << endl;
        cout << "3. display individual  bank account " << endl;
        cout << "4. withdraw amount" << endl;
        cout << "5. deposite amount" << endl;
        cout << "6. get total bank balance" << endl;
        cout << "7. get total account count" << endl;
        cout << "8. exit for app" << endl;
        cout << "choose any option : ";
        cin >> num;
        switch (num)
        {
        case 1:
            account::createAccount(ac, index);
            index++;
            break;

        case 2:
            account::displayAccount(ac, index);
            break;
        case 3:
            account::displayIndividualAccount(ac, index);
            break;
        case 4:
            account::withdrawAmmount(ac, index);
            break;
        case 5:
            account::depositeAmmount(ac, index);
            break;
        case 6:
            account::TotalAmount(index);
            break;
        case 7:
            account::TotalAccount(index);
            break;
        case 8:
            exit(0);
        default:
            cout << "\n.......invalid choice......\n";
        }
    }
}