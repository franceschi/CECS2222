#include<iostream>
#include<cmath>
#include<string>

using namespace std;

class ParkedCar
{
private:
    string carMake;
    string carModel;
    string carColor;
    string carLicenseNum;
    int numMinutesParked;           
    
public:
    ParkedCar()
    {
        this->carMake = "";
        this->carModel = "";
        this->carColor = "";
        this->carLicenseNum = "";
        this->numMinutesParked = 0;
    }
    
    ParkedCar(string carMake, string carModel, string carColor, string carLicenseNum, int carNumMinParked)
    {
        this->carMake = carMake;
        this->carModel = carModel;
        this->carColor = carColor;
        this->carLicenseNum = carLicenseNum;
        this->numMinutesParked = carNumMinParked;
    }
    
    ~ParkedCar()
    {
      //Destructor
    }
    
    int getNumParkedMinutes() const
    {
        return numMinutesParked;
    }
    
    void print()
    {
        cout << "\t\t -- Car --\n" << endl;
        cout << "Make: " << carMake << endl;
        cout << "Model: " << carModel << endl;
        cout << "Color: " << carColor << endl;
        cout << "License Number: " << carLicenseNum << endl;
    }
};



class ParkingMeter
{
private:
    int purchasedParkingMins;
    
public:
    ParkingMeter()
    {
        this->purchasedParkingMins = 0;
    }
    
    ParkingMeter(int purchasedMinutes)
    {
        this->purchasedParkingMins = purchasedMinutes;
    }
    
    int getPurchasedParkingMins() const
    {
        return purchasedParkingMins;
    }
    
    void print()
    {
        cout << "\t\t -- Meter --\n" << endl;
        cout << "Number of minutes purchased : " << purchasedParkingMins << endl;
    }
};


class PoliceOfficer
{
private:
    string firstName;
    string lastName;
    string badgeNum;
    
public:
    PoliceOfficer()
    {
        this->lastName = "";
        this->firstName = "";
        this->badgeNum = "";
    }
    
    PoliceOfficer(string lName, string fName, string bNum)
    {
        
        this->firstName = fName;
        this->lastName = lName;
        this->badgeNum = bNum;
    }
    
    bool isTicketNeccessary(ParkedCar& c, ParkingMeter& m)
    {
        if ((m.getPurchasedParkingMins() - c.getNumParkedMinutes()) < 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    void print()
    {
        cout << "\t\t -- Police Officer --\n" << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Badge Number: " << badgeNum << endl;
    }
};


class ParkingTicket
{
private:
    ParkedCar car;
    ParkingMeter meter;
    PoliceOfficer officer;
    int fineAmount;
    
public:
    ParkingTicket(ParkedCar &carT, ParkingMeter &meterT, PoliceOfficer &officerT)
    {
        this->car = carT;
        this->meter = meterT;
        this->officer = officerT;
        this->fineAmount = calcFineAmount();
    }
    
    int calcFineAmount()
    {
        return (25 + 10 * (ceil((car.getNumParkedMinutes() - meter.getPurchasedParkingMins()) / 60.0) - 1));
    }
    
    void print()
    {
        cout << "\n\n\t***** TICKET INFORMATION *****" << endl;
        cout << "-------------------------------------" << endl;
        car.print();
        cout << "-------------------------------------" << endl;
        officer.print();
        cout << "-------------------------------------" << endl;
        cout << "\t\t -- Fine --\n\n" << "Amount: $" << fineAmount << endl;
        cout << "-------------------------------------" << endl;
    }
};

int main()
{
    string carMake;
    string carModel;
    string carColor;
    string carLicenseNum;
    int numMinutesParked;
    int purchasedParkingMins;
    string lastName;
    string firstName;
    string badgeNum;
    
    cout << "***** PARKING TICKET SIMULATOR PROGRAM *****\n" << endl;
    cout << "Enter Car Details:\n" << endl;
    cout << "Make: ";
    cin >> carMake;
    cout << "Model: ";
    cin >> carModel;
    cout << "Color: ";
    cin >> carColor;
    cout << "License Number: ";
    cin >> carLicenseNum;
    
    do
    {
        cout << "Number of minutes car has been parked: ";
        cin >> numMinutesParked;
    } while (numMinutesParked < 0);
    
    ParkedCar car1(carMake, carModel, carColor, carLicenseNum, numMinutesParked);
    
    cout << "\nEnter Meter Information:\n" << endl;
    
    do
    {
        cout << "Enter Number of minutes purchased: ";
        cin >> purchasedParkingMins;
    } while (purchasedParkingMins < 0);
    
    ParkingMeter meter1(purchasedParkingMins);
    
    cout << "\nEnter Police Officer Details:\n" << endl;
    cout << "First Name: ";
    cin >> firstName;
    cout << "Last Name: ";
    cin >> lastName;
    cout << "Badge Number: ";
    cin >> badgeNum;
    
    PoliceOfficer officer1(lastName, firstName, badgeNum);
    
    if (officer1.isTicketNeccessary(car1, meter1) == true)
    {
        ParkingTicket ticket1(car1, meter1, officer1);
        ticket1.print();
    }
    else
    {
        cout << "\n **** The vehicle has no tickets ****" << endl;
    }
    
    return 0;
}
