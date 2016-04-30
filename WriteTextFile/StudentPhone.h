#pragma once 

class Phone
{ 
private:       
	char *areaCode;     //3-digit area code
	char *exchange;     //3 digit exchange
	char *line;         //4 digit of line

public:    
	Phone(const char *, const char *, const char *);
	Phone(const Phone &);    
	Phone();    
	~Phone();

	void setValues(  const char *,  const char *, const char *);
	void setAreaCode( const char *);
	void setExchange( const char *);
	void setLine(  const char *);

	const char *getAreaCode() const;
	const char *getExchange() const;
	const char *getLine() const;
	void printPhone() const; 

};//end class Phone