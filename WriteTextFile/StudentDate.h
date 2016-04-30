#pragma once 
class Date
{ 
private:                  

int month,day, year;  
int checkDay(int) const;		 //utility function  
int checkMonth(int) const;		//utility function 
public:                 

Date(int =11,int=17,int=2010); 
Date(const Date &);  
~Date();  
void printDate() const;  
void setValues(int,int,int);  
void setMonth(int);  
void setDay(int);  
void setYear(int);  
int getMonth() const;  
int getDay() const;  
int getYear() const; 

}; //end class Date 