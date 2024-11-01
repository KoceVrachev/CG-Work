#include <iostream>
#include <string>
using namespace std;

int main()
{
    int day;
    int month;
    string A[12] = { "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn","Aquarius", "Pisces" };

    while (true) 
    {
        cout << "Enter your date of birth. Example: 12 7 for 12th July" << endl;
        cout << "Enter 0 0 to exit." << endl;
        cin >> day >> month;

        if (day == 0 && month == 0) 
        {
            cout <<"Goodbye!" << endl << endl;
            break;
        }
        if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) 
        {
            cout << "You are " << A[0] << "! Today fortune is: lottery win!" << endl << endl;
        }
        else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) 
        {
            cout << "You are " << A[1] << "! Today fortune is: great success in projects!" << endl << endl;
        }
        else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) 
        {
            cout << "You are " << A[2] << "! Today fortune is: exciting encounters!" << endl << endl;
        }
        else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) 
        {
            cout << "You are " << A[3] << "! Today fortune is: a pleasant surprise awaits!" << endl << endl;
        }
        else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) 
        {
            cout << "You are " << A[4] << "! Today fortune is: focus on self-care!" << endl << endl;
        }
        else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) 
        {
            cout << "You are " << A[5] << "! Today fortune is: financial gain is near!" << endl << endl;
        }
        else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) 
        {
            cout << "You are " << A[6] << "! Today fortune is: positive energy surrounds you!" << endl << endl;
        }
        else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) 
        {
            cout << "You are " << A[7] << "! Today fortune is: an opportunity for growth!" << endl << endl;
        }
        else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) 
        {
            cout << "You are " << A[8] << "! Today fortune is: adventure is on the horizon!" << endl << endl;
        }
        else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) 
        {
            cout << "You are " << A[9] << "! Today fortune is: peace and clarity abound!" << endl << endl;
        }
        else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) 
        {
            cout << "You are " << A[10] << "! Today fortune is: a creative spark awaits!" << endl << endl;
        }
        else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) 
        {
            cout << "You are " << A[11] << "! Today fortune is: friendship brings joy!" << endl << endl;
        }
        else 
        {
            cout << "Invalid date entered. Please try again." << endl << endl;
        }
    }
    return 0;
}
