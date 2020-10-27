#pragma once
#ifndef RECEIPT_H
#define RECEIPT_H

class Receipt
{
private:
	int id;
	double value;
	double dph;

public:
	void SetId(int id);
	int GetId() const;

	void SetValue(double value );
	double GetValue() const;

	void SetDph(double dph);
	double GetDph() const;
	
};

#endif