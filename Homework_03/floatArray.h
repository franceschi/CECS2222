#pragma
#ifndef floatArray_H        
#define floatArray_H        

class floatArray 
{
private:
	float *aptr;
	float max, min, avg;
	int arraySize; 

public:
	
	floatArray(int);
	~floatArray();
	int size() const
	{
		return arraySize;
	}

	void storeNumber(float num, int ele);
	float getNumber(int ele);
								
	float getHighest() const;
	float getLowest() const;
	float getAverage() const;

};
#endif

