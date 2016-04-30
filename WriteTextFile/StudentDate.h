#pragma once

class Date
{ 
private:                  
	int month,day, year;  
	int checkDay(int) const;
	int checkMonth(int) const;

public:                 
	Date(int,int,int); 
	Date(const Date &); 
	Date();
	~Date();
 
	void setValues(int,int,int);  
	void setMonth(int);  
	void setDay(int);  
	void setYear(int);  

	int getMonth() const;  
	int getDay() const;  
	int getYear() const; 

	void printDate() const;

};