#include <iostream>
#include <string>
using namespace std;
string OperationValidation(string _x)
{
    string result = "-1";
    if (_x == "OR" || _x == "or")
    {
        result = "OR";
    }
    else if (_x == "AND" || _x == "and")
    {
        result = "AND";
    }
    return result;
} // END OPERATION VALIDATION METHOD
// pqNotValidation Method
string pqNotValidation(string _x)
{
    string result = "-1";
    if (_x == "Y" || _x == "y")
    {
        result = "Y";
    }
    else if (_x == "N" || _x == "n")
    {
        result = "N";
    }
    return result;
} // END PQNOTVALIDATION METHOD
// Negation Method
bool Negation(bool _b, string _s)
{
    bool result = _b;
    if (_s == "Y")
    {
        if (_b == false)
        {
            result = true;
        }
        else if (_b == true)
        {
            result = false;
        }
    }
    else if (_s == "N")
    {
        result = _b;
    }
    return result;
} // END NEGATION METHOD
// AND method
bool AND(bool _p, bool _q)
{
    return (_p && _q);
} // END AND METHOD
// OR method
bool OR(bool _p, bool _q)
{
    return (_p || _q);
} // END OR METHOD
string PSymbol(string _x)
{
    string result = "-1";
    if (_x == "Y")
    {
        result = "~p";
    }
    else if (_x == "N")
    {
        result = "p";
    }
    return result;
}
string QSymbol(string _x)
{
    string result = "-1";
    if (_x == "Y")
    {
        result = "~q";
    }
    else if (_x == "N")
    {
        result = "q";
    }
    return result;
}
// Truth Table method
void TruthTable(string _pNot, string _qNot, string _op)
{
    bool p;
    bool q;
    // AND BRANCH
    if (_op == "AND")
    {
        cout << "\np\tq\t" << PSymbol(_pNot) << "A" << QSymbol(_qNot) << endl;
        cout << "----------------------\n";
        p = true;
        q = true;
        cout << "T\tT\t" << boolalpha << AND(Negation(p, _pNot), Negation(q, _qNot)) << endl;
        p = true;
        q = false;
        AND(Negation(p, _pNot), Negation(q, _qNot));
        cout << "T\tF\t" << AND(Negation(p, _pNot), Negation(q, _qNot)) << endl;
        p = false;
        q = true;
        AND(Negation(p, _pNot), Negation(q, _qNot));
        cout << "F\tT\t" << AND(Negation(p, _pNot), Negation(q, _qNot)) << endl;
        p = false;
        q = false;
        AND(Negation(p, _pNot), Negation(q, _qNot));
        cout << "F\tF\t" << AND(Negation(p, _pNot), Negation(q, _qNot)) << endl
             << endl;
    }
    // OR BRANCH
    else if (_op == "OR")
    {
        cout << "\np\tq\t" << PSymbol(_pNot) << "V" << QSymbol(_qNot) << endl;
        cout << "----------------------\n";
        p = true;
        q = true;
        cout << "T\tT\t" << boolalpha << OR(Negation(p, _pNot), Negation(q, _qNot)) << endl;
        p = true;
        q = false;
        cout << "T\tF\t" << OR(Negation(p, _pNot), Negation(q, _qNot)) << endl;
        p = false;
        q = true;
        cout << "F\tT\t" << OR(Negation(p, _pNot), Negation(q, _qNot)) << endl;
        p = false;
        q = false;
        cout << "F\tF\t" << OR(Negation(p, _pNot), Negation(q, _qNot)) << endl
             << endl;
    }
} // END TRUTHTABLE METHOD
string TerminateProgram(string _x)
{
    string result = "-1";
    if (_x == "N" || _x == "n")
    {
        result = "0";
    }
    else if (_x == "Y" || _x == "y")
    {
        result = "1";
    }
    return result;
}
int main()
{
    string sentinel;
    do
    {
        string input;
        string op;
        string pNot;
        string qNot;
        string repeat;
        do
        {
            cout << "\nDo you want to AND or OR the variables(and / or) : ";
                                          cin >>
                input;
            op = OperationValidation(input);
        } while (op == "-1");
        do
        {
            cout << "Do you want to NOT p(y/n)? ";
            cin >> input;
            pNot = pqNotValidation(input);
        } while (pNot == "-1");
        do
        {
            cout << "Do you want to NOT q(y/n)? ";
            cin >> input;
            qNot = pqNotValidation(input);
        } while (qNot == "-1");
        TruthTable(pNot, qNot, op);
        do
        {
            cout << "Exit Program (y/n)? ";
            cin >> input;
            repeat = TerminateProgram(input);
            sentinel = TerminateProgram(input);
        } while (repeat == "-1");
    } while (sentinel != "1");
    cout << "GOODBYE!\n"
         << endl;
    return 0;
} // END MAIN
