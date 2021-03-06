#pragma once
#include <string>
using namespace std;

#include "Variable.h"

/*
This class represents a dummy expression
*/
class Expression {
private:
	string op;
	Expression * leftExp;
	Expression * rightExp;
	Variable * leftVar;
	Variable * rightVar;
public:
	Expression();
	Expression(string ope);
	void addLeftExp(Expression& exp);
	void addRightExp(Expression& exp);
	void addLeftVar(Variable& var);
	void addRightVar(Variable& var);
};