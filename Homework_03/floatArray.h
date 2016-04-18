#pragma
#ifndef floatArray_H        
#define floatArray_H        

class floatArray 
{
private:
	float *list; //Pointer to Array
	int numElements; 

public:
	bool isValid(int); 
	floatArray(int); 
	~floatArray();
	void setElement(int, float);
	int getElement(int); //Returns an element


	//Setter			
	void setHighest(double);        
	void setLowest(double);        
	void setAverage(double);       

	//Acessor								
	double getHighest() const;
	double getLowest() const;
	double getAverage() const;

};
#endif        // closes guard

