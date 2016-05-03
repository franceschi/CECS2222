#include<iostream>
#include<cstdlib>
#include<string>
#include<cstring>

using namespace::std;

#ifndef MYSTRING_H
#define MYSTRING_H

const int MAX_LEN = 80;

class MyString
{
private:
	char s[MAX_LEN + 1];

public:
	MyString(const char *s = "");
	MyString(char ch);
	MyString(const MyString &aMyString);
	~MyString(void);

	MyString &operator=(const char* s);
	MyString &operator=(char cha);
	MyString &operator =(const MyString &aMyString);


	void setS(const char *s);
	const char* getS()const;


	MyString operator+(const char* s)const;
	MyString operator+(char ch)const;
	MyString operator+(const MyString &aMyString)const;
	friend MyString operator+(const char* s, const MyString &aMyString);
	friend MyString operator+(const MyString &aMyString);

	bool operator==(const char* s)const;
	bool operator==(const MyString &aMyString)const;
	friend bool operator ==(const char* s, const MyString &aMyString);

	bool operator !=(const char* s)const;
	bool operator !=(const MyString & aMyString)const;
	friend bool operator !=(const char* s, const MyString &aMyString);

	bool operator >(const char* s)const;
	bool operator>(const MyString &aMyString)const;
	friend bool operator>(const char* s, const MyString &aMyString);

	bool operator<(const char* s)const;
	bool operator<(const MyString &aMyString)const;
	friend bool operator<(const char* s, const MyString &aMyString);

	const char &operator[](int index)const;
	char &operator[](int index);

	friend istream &operator >> (istream &in, MyString &aMyString);
	friend ostream &operator<<(ostream &out, const MyString &aMyString);

	MyString trimLeadingSpaces()const;
	MyString trimEndingSpace()const;
	MyString trimAllSpaces()const;
	MyString toUpperCase()const;
	MyString toLowerCase()const;
	MyString createSubstring(int from, int to)const;
	int len()const;
	bool isEpmty()const;

	MyString reverse()const;

	int indexOf(char ch)const;
	int indexOfLast(char ch)const;
	bool include(char ch)const;
	int frequency(char ch)const;

	bool representAnUnsigninterger()const;
	bool representAnInterger()const;
	bool representAReal()const;

	static int MaxLen();

	MyString &operator+=(const MyString &aMyString);
	MyString &operator+=(const char* s);
	MyString &operator+=(char ch);

	MyString &operator++();
	MyString operator++(int);
	MyString &operator--();
	MyString operator--(int);

};

#endif
