#include<stdio.h>
//declare function
float GetSales ();
float GetBonus ();

//process
float CalComission (float, float); 
float CalTaxes (float);
float calNetpay (float, float);
void payroll(float, float, float);

int main ()
{
	//declare variables
	float sales, bonus, comission, taxes, netpay;
	// get inputs
	sales = GetSales();
	bonus = GetBonus();
	
// process
comission = CalComission (sales, bonus);
taxes = CalTaxes (comission);
netpay = calNetpay (comission ,taxes);

// output
payroll(comission, taxes, netpay);
}

// Input sales
float GetSales ()
{
	float x; 
	printf("Enter sales\n");
	scanf("%f", &x);
	return x;
}


// Input Bonus
float GetBonus()
{ 
float y;
printf("Enter bonus\n");
	scanf("%f", &y);
	return y;
}

// calculations
float CalComission (float x, float y)
{
	return 0.125 * x + y;
}


// calculations
float CalTaxes (float C) 
{
	return C * (0.25 + 0.1 + 0.08);
	
}

// calculations
float calNetpay (float c, float t)
{
	return c - t;
}

// output
void payroll (float comission, float Taxes, float NetPay)
{
	printf("The comission before tax is %f\n", comission);
	printf("The taxes are %f\n", Taxes);
	printf("The NetPay is %f\n", NetPay);
}

 
	

