#include <iostream>
using namespace std;

int main()
{
    int spc;
    int k = 1;

    cout << "Enter height of upper portion of kite: ";
    cin >> spc;

    if (spc > 1)
    {
        for (int i = 1; i <= spc; i++)
        {
            for (int j = 1; j <= (spc - i) * 2; j++)
            {
                cout << " ";
            }

            for (; k < 2; k++)
            {
                cout << "*";
            }

            for (int k = 1; k <= (i * 4) - 4; k++)
            {
                if (i == spc)
                {
                    if (k == 1 || k == (i * 4) - 4)
                    {
                        cout << "*";
                    }

                    else
                    {
                        cout << "-";
                    }
                    if (k == (i * 2) - 2)
                    {
                        cout << "|";
                    }
                }
                else
                {
                    if (k != 1 && k != (i * 2) - 2)
                    {
                        cout << "  ";
                    }
                    else
                    {
                        cout << "* ";
                    }
                    if (k == i - 1)
                    {
                        cout << "| ";
                    }
                }
            }
            cout << endl;
        }

        /* down  */
        spc = spc * 2 - 1;
        for (int i = 1; i <= spc; i++)
        {
            if (spc % 2 != 0)
            {
                if (i % 2 == 0)
                {
                    for (int j = 1; j <= i; j++)
                    {
                        cout << " ";
                    }
                    for (int k = 1; k <= spc - i; k++)
                    {
                        if (i != spc)
                        {
                            if (k == 1 || k == spc - i)
                            {
                                cout << "* ";
                            }

                            else if (k == ((spc - i) / 2) + 1)
                            {
                                cout << "| ";
                            }

                            else
                            {
                                cout << "  ";
                            }
                        }

                        else
                        {
                            cout << "* ";
                        }
                    }
                }
                else if (i % 2 != 0)
                {
                    for (int j = 1; j <= i; j++)
                    {
                        cout << " ";
                    }
                    for (int k = 1; k <= spc - i + 1; k++)
                    {
                        if (i != spc)
                        {
                            if (i != spc - 2)
                            {
                                if (k == 1 || k == spc - i)
                                {
                                    cout << "* ";
                                }

                                else if (k == ((spc - i) / 2))
                                {
                                    cout << " |";
                                }
                                else
                                {
                                    cout << "  ";
                                }
                            }
                            else
                            {
                                if (k == 1 || k == 3)
                                {
                                    cout << "*";
                                }
                                else
                                {
                                    cout << "|";
                                }
                            }
                        }
                    }
                }
            }
            if (spc % 2 == 0)
            {
                if (i % 2 != 0)
                {
                    for (int j = 1; j <= i; j++)
                    {
                        cout << " ";
                    }
                    for (int k = 1; k <= spc - i; k++)
                    {
                        if (i != spc)
                        {
                            if (k == 1 || k == spc - i)
                            {
                                cout << "* ";
                            }

                            else if (k == ((spc - i) / 2) + 1)
                            {
                                cout << "| ";
                            }

                            else
                            {
                                cout << "  ";
                            }
                        }

                        else
                        {
                            cout << "* ";
                        }
                    }
                }
                if (i % 2 == 0)
                {
                    for (int j = 1; j <= i; j++)
                    {
                        cout << " ";
                    }
                    for (int k = 1; k <= spc - i + 1; k++)
                    {
                        if (i != spc)
                        {
                            if (i != spc - 2)
                            {
                                if (k == 1 || k == spc - i)
                                {
                                    cout << "* ";
                                }

                                else if (k == ((spc - i) / 2))
                                {
                                    cout << " |";
                                }
                                else
                                {
                                    cout << "  ";
                                }
                            }
                            else
                            {
                                if (k == 1 || k == 3)
                                {
                                    cout << "*";
                                }
                                else
                                {
                                    cout << "|";
                                }
                            }
                        }
                    }
                }
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Error! Height of the upper portion must be greater than 1";
    }

    return 0;
}