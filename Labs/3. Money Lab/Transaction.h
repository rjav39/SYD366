#ifndef TRANSACTION_H
#define TRANSACTION_H
#include "PaymentType.h"
#include "Date.h"
class Transaction {

private:
	Date trasnacDate;
	int transacID;
	std::string transacType;
	std::string transacDesc;
	double transacAmount;
	PaymentType payment;
	double transacHST;

public:
	Transaction getTransactions();

	std::string generateTransacID();

	void createIncomeTransaction(Date transacDate, int transacID, PaymentType payment, std::string transacDesc, double transacAmount);

	void createExpenseTransaction(Date transacDate, int transacID, PaymentType payment,std::string transacDesc, double transacAmount);

	std::string getTransacType();

	double getTransacAmount();

	Transaction getFinancialQuery(int startDate, int endDate);

	void createIncomeTransaction(int transacDate, int transacID, int payment, int transacDesc, int transacAmount);

	void createExpenseTransaction(int transacDate, int transacID, int payment, int transacDesc, int transacAmount);
};

#endif
