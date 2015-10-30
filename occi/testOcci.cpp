#include <sys/time.h>

#include <iostream>
#include <cstring>
#include <vector>
#include <string>

#include "occi.h"

using namespace std;
using namespace oracle::occi;

void Usage()
{
    cout << "please input like this:" << endl;
    cout << "./testOcci -p/n user pass constr sql" << endl;
}

int main(int argc, char **argv)
{
    if (argc != 6)
    {
        Usage();
        return 0;
    }

    bool bPrint = false;
    if (strcmp(argv[1], "-p") == 0)
    {
        bPrint = true;
    }

    struct timeval tv_start, tv_end;
    gettimeofday(&tv_start, NULL);
    // create Environment
    Environment *env = Environment::createEnvironment();
    if (env == NULL)
    {
        cout << "createEnvironment failed!" << endl;
        return -1;
    }
    
    // use the Environment instance to create connections;
    Connection *conn = env->createConnection(argv[2], argv[3], argv[4]);
    if (conn == NULL)
    {
        cout << "createConnection failed!" << endl;
        return -1;
    }
    
    // use Statement to execute sql and get result
    Statement *stmt = conn->createStatement(argv[5]);
    if (stmt == NULL)
    {
        cout << "createStatement failed!" << endl;
        return -1;
    }
    
    // execute sql and get result set
    ResultSet *rs = stmt->executeQuery();
    if (rs == NULL)
    {
        cout << "executeQuery failed!" << endl;
        return -1;
    }

    // ResultSet::next() fetch rows and return FALSE
    // when no more rows
    int nColumns;
    long long llCount = 0;
    string strTemp;
    vector<MetaData> vecColumns = rs->getColumnListMetaData();
    nColumns = vecColumns.size();
    while (rs->next() == true)
    {
        // get values using the getXXX() methods of Resultset
        for (int i = 0; i < nColumns; ++i)
        {
            strTemp = rs->getString(i + 1);
            if (bPrint)
            {
                cout << strTemp << "\t";
            }
        }
        if (bPrint)
        {
            cout << endl;
        }
        ++llCount;
    }
    // close result
    stmt->closeResultSet(rs);
    // close statement
    conn->terminateStatement(stmt);
    // close connection
    env->terminateConnection(conn);
    // close Environment
    Environment::terminateEnvironment(env);

    gettimeofday(&tv_end, NULL);
    long long llUsed = (tv_end.tv_sec - tv_start.tv_sec) * 1000000 + tv_end.tv_usec - tv_start.tv_usec;
    cout << "read data " << llCount << " used " << llUsed / 1000000.0 << " sec." << endl;
    return 0;
}
