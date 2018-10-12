#ifndef DATABASEHELPERIMPL_H
#define DATABASEHELPERIMPL_H

#include <QSqlDatabase>

#include "databasehelper.h"

class DatabaseHelperImpl : public DatabaseHelper{
public:
    DatabaseHelperImpl();
    virtual ~DatabaseHelperImpl();
    virtual int getUserId(QString username);
    virtual bool insertOperation(int userId, double v1, QString operacao, double v2, double resultado);
    virtual vector<pair<QString, QString>> getUsers();
    virtual vector<pair<QString, int>> getOperationsByUser(QString username);
    virtual vector<pair<QString, int>> getOperations();

protected:
    QSqlDatabase sqlDatabase;

private:
    DatabaseHelperImpl(const DatabaseHelperImpl& rhs){}
    DatabaseHelperImpl& operator=(const DatabaseHelperImpl& rhs){}
    void setupDatabase();
};

#endif // DATABASEHELPERIMPL_H
