#include "Statement.h"

Statement::Statement() {

}

Statement::Statement(int i, string content) {
	index = i;
	contentStatement = content;
}

void Statement::setStmtLst(StatementList &stmtList) {
	stmtLst = &stmtList;
}