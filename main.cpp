#include <iostream>
#include <string>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;
int optionchooser;
string player1n;
string player2n;
int colorchanger;
int colorchanger2;
int yes;
int comment_getback;
int see;
string commentinput;
string nameplayer;
char symbol;
string nameplayer1;
char symbol1;
int why;
int back;
int timeacc;
int whyme;
int whymenow;
string s1("second");
string s2("next");
string s3("forth");
string s4;
int last;
int proceed;
char  time5();
int pregameinfo();
int startgame();
int table();
int entsym();
char playerinput();
char thank();
char save();
char table2();
int sets();
char time2();
char  time3();
int time;
char p1s;
int d;
char comment();
int a;
char p2s;
int p1i;
int nine;
int sth= 0;
char  time4();
char time6();
int p2i;
int whatever;
int ten1;
char tablepro [3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char tablepro1 [3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char tablepro2 [3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char tablepro3 [3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char tablepro4 [3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char tablepro5 [3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int main()
{
    startgame();
    pregameinfo();
    entsym();
    save();
    sets();

}

int pregameinfo()
{
    system("CLS");
    cout<<"Please enter your name player one : "<<endl;
    cin>>player1n;
    cout<<"Please enter your name player two : "<<endl;
    cin>>player2n;
};

int startgame()
{
    system("CLS");
    cout <<"                                           1) start game" <<endl;
    cout<<endl;
    cout <<"                                           2) how to play this game"<<endl;
    cout<<endl;
    cout<< "                                           3) credits"<<endl;
    cout<<endl;
    cout<< "                                           4) input your comment"<<endl;
    cout<<endl;
    cout<< "                                           5) Options "<<endl;
    cout<<endl;
    cout<< "                                           6) History "<<endl;
    cout<<endl;
    cin>>proceed;
    if(proceed==1)
    {

    };
    if(proceed==2)
    {
        system("CLS");
        cout<<"This game is called tic tac toe and it is played beetwen two players and the way to play it is to the two players take thier turn and they use thier symbols to make horizontal,vertical or diagonal patterns on a 3*3(three times three)  table now i think you have got it now practice to be the best player" << endl;
        cout<<endl;
        cout<<endl;
        cout<<"To get back to main menu press 0"<<endl;
        cout<<endl;
        cout<<endl;
        cin>>last;
        if(last==0)
        {
            startgame();
        }
        else
        {
            return 0;
        };
    };
    if(proceed==3)
    {
        system("CLS");
        cout<<"                                  Developed BY:"  <<endl;
        cout<<"                              DAGIMAWI MANTEFARDO" <<endl;
        cout<<endl;
        cout<<endl;
        cout<<"To get back to main menu press 0"<<endl;
        cout<<endl;
        cout<<endl;
        cin>>last;
        if(last==0)
        {
            startgame();
        }
        else
        {
            return 0;
        };
    };
    if(proceed==4)
    {
        ofstream file("comment.txt");
        system("CLS");
        cout<<"Input your comment here:"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<" When you finish hit Enter and then CTRL+Z to quit"<<endl;
        cout<<endl;
        cout<<endl;
        while(  getline(cin, commentinput))
        {
            file<<commentinput<<endl;
        };

    };
    if(proceed==5)
    {
        system("CLS");
        cout << "Choose text color :" << endl;
        cout << endl;
        cout << "                     0 ----------> Normal(White)" <<endl;
        cout << "                     1 ----------> Green" <<endl;
        cout << "                     2 ----------> Blue" <<endl;
        cout << "                     3 ----------> Red" <<endl;
        cout << "                     4 ----------> Aqua" <<endl;
        cout << "                     5 ----------> Gray" <<endl;
        cout << "                     6 ----------> Yellow" <<endl;
        cout << "                     7 ----------> Purple" <<endl;
        cout << endl;
        cin >> colorchanger;
        if(colorchanger == 0)
        {
            system("color 07");
            startgame();
        }
        if(colorchanger == 1)
        {
            system("color 0a");
            startgame();
        }
        if(colorchanger == 2)
        {
            system("color 09");
            startgame();
        }
        if(colorchanger == 3)
        {
            system("color 0c");
            startgame();
        }
        if(colorchanger == 4)
        {
            system("color 0b");
            startgame();
        }
        if(colorchanger == 5)
        {
            system("color 08");
            startgame();
        }
        if(colorchanger == 6)
        {
            system("color 0e");
            startgame();
        }
        if(colorchanger == 7)
        {
            system("color 0d");
            startgame();
        }

    }
    if(proceed==6)
    {
        system("CLS");
        ifstream thefile("Gamedata.txt");

        while(thefile >> nameplayer >> symbol >> nameplayer1 >> symbol1 )
        {
            cout<<"                   The last people who played this game were:"<<endl;
            cout<<endl;
            cout<< "player's name"<< "   "<<"player's symbol"<<endl;
            cout<<endl;
            cout<< nameplayer <<    "                  "<<symbol<<endl;
            cout<<endl;
            cout<< nameplayer1 <<    "                  "<<symbol1<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"To return to main menu press 0"<<endl;
            cout<<endl;
            cin>>see;
            if(see==0)
            {
                startgame();
            }
            else
            {
                cout << "No History" << endl;
                return 0;
            };
        };
    };

};
int entsym()
{
    system("CLS");
    cout<<player1n<<" enter the symbol you want to use:"<<endl;
    cin>>p1s;
    cout<<player2n<<" enter the symbol you want to use:"<<endl;
    cin>>p2s;

};

char save()
{
    ofstream thefile("Gamedata.txt");
    thefile<<player1n<<"               "<<p1s<<endl;
    thefile<<player2n<<"               "<<p2s<<endl;
    thefile.close();
};
int table()
{
    system("CLS");
    cout<<"                         TIC TAC TOE" <<endl;
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout << tablepro[row][col] <<"  ";
        }
        cout<<endl;
    }
};
char  playerinput()
{
    system("CLS");
    cout<<"                         TIC TAC TOE" <<endl;
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout << tablepro[row][col] <<"  ";
        }
        cout<<endl;
    }
    int x = 1.5;
    while(x<5)
    {
        x = x + 1;

        cout<<player1n << " enter the number of the field you want your sign to be in:"<<endl;
        cin>>p1i;

        // 00 01 02
        // 10 11 12
        // 20 21 22

        if(p1i==0)
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;

            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<player1n << " enter the number of the field you want your sign to be in:"<<endl;
            cin>>p1i;
        };
        if(p1i==1)
        {
            tablepro[0][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==2)
        {
            tablepro[0][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==3)
        {
            tablepro[0][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==4)
        {
            tablepro[1][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==5)
        {
            tablepro[1][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==6)
        {
            tablepro[1][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==7)
        {
            tablepro[2][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==8)
        {
            tablepro[2][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(p1i==9)
        {
            tablepro[2][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(tablepro[0][0]== p1s && tablepro[0][1]== p1s && tablepro[0][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      first row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro[1][0]== p1s && tablepro[1][1]== p1s && tablepro[1][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      second row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro[2][0]== p1s && tablepro[2][1]== p1s && tablepro[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      third row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };

        if(tablepro[0][0]== p1s && tablepro[1][0]== p1s && tablepro[2][0]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      first column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };

        if(tablepro[0][1]== p1s && tablepro[1][1]== p1s && tablepro[2][1]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      second column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro[0][2]== p1s && tablepro[1][2]== p1s && tablepro[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      third column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro[0][0]== p1s && tablepro[1][1]== p1s && tablepro[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                     left to right diagonal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro[0][2]== p1s && tablepro[1][1]== p1s && tablepro[2][0]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      right to left diagonal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        cout<<player2n << " enter the number of the field you want your sign to be in:"<<endl;
        cin>>p2i;

        if(p2i==0)
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;

            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<player2n << " enter the number of the field you want your sign to be in:"<<endl;
            cin>>p2i;
        };
        if(p2i==1)
        {
            tablepro[0][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==2)
        {
            tablepro[0][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==3)
        {
            tablepro[0][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==4)
        {
            tablepro[1][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==5)
        {
            tablepro[1][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==6)
        {
            tablepro[1][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==7)
        {
            tablepro[2][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==8)
        {
            tablepro[2][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(p2i==9)
        {
            tablepro[2][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

    };

    if(tablepro[0][0]== p2s && tablepro[0][1]== p2s && tablepro[0][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      first row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;



    };
    if(tablepro[1][0]== p2s && tablepro[1][1]== p2s && tablepro[1][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      second row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        return 0;

    };
    if(tablepro[2][0]== p2s && tablepro[2][1]== p2s && tablepro[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      third row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        return 0;

    };

    if(tablepro[0][0]== p2s && tablepro[1][0]== p2s && tablepro[2][0]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      first column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        return 0;

    };

    if(tablepro[0][1]== p2s && tablepro[1][1]== p2s && tablepro[2][1]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      second column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        return 0;

    };
    if(tablepro[0][2]== p2s && tablepro[1][2]== p2s && tablepro[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      third column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        return 0;

    };
    if(tablepro[0][0]== p2s && tablepro[1][1]== p2s && tablepro[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      left to right diagonal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        return 0;

    };

    if(tablepro[0][2]== p2s && tablepro[1][1]== p2s && tablepro[2][0]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      right to left diagonal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        return 0;

    };
    system("CLS");
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout << tablepro[row][col] <<"  ";
        }
        cout<<endl;
    }
    cout<<"             The Game Ends With A Draw Between "<<player1n<<" & "<<player2n<<endl;
    cout<<"             "<<player1n<<" & "<<player2n<<" Thank you for playing this game!!!"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    return 0;
};

char  time2()
{
    system("CLS");
    cout<<"                         TIC TAC TOE" <<endl;
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout << tablepro2[row][col] <<"  ";
        }
        cout<<endl;
    }
    int x = 1.5;
    while(x<5)
    {
        x = x + 1;

        cout<<player1n << " enter the number of the field you want your sign to be in:"<<endl;
        cin>>p1i;

        // 00 01 02
        // 10 11 12
        // 20 21 22

        if(p1i==0)
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;

            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<player1n << " enter the number of the field you want your sign to be in:"<<endl;
            cin>>p1i;
        };
        if(p1i==1)
        {
            tablepro2[0][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==2)
        {
            tablepro2[0][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==3)
        {
            tablepro2[0][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==4)
        {
            tablepro2[1][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==5)
        {
            tablepro2[1][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==6)
        {
            tablepro2[1][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==7)
        {
            tablepro2[2][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==8)
        {
            tablepro2[2][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(p1i==9)
        {
            tablepro2[2][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(tablepro2[0][0]== p1s && tablepro2[0][1]== p1s && tablepro2[0][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      first row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            cout<<endl;
            cout<<endl;

            cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<< s2 <<" game :"<<endl;
            cout<<endl;
            cin>>nine;
            if(nine==1)
            {
                time3();
            }
            else
            {
                return 0;
            };
            return 0;

        };
        if(tablepro2[1][0]== p1s && tablepro2[1][1]== p1s && tablepro2[1][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      second row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            cout<<endl;
            cout<<endl;

            cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<< s2 <<" game :"<<endl;
            cout<<endl;
            cin>>nine;
            if(nine==1)
            {
                time3();
            }
            else
            {
                return 0;
            };
            return 0;

        };
        if(tablepro2[2][0]== p1s && tablepro2[2][1]== p1s && tablepro2[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      third row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            cout<<endl;
            cout<<endl;

            cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<< s2 <<" game :"<<endl;
            cout<<endl;
            cin>>nine;
            if(nine==1)
            {
                time3();
            }
            else
            {
                return 0;
            };
            return 0;

        };

        if(tablepro2[0][0]== p1s && tablepro2[1][0]== p1s && tablepro2[2][0]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      first column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            cout<<endl;
            cout<<endl;

            cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<< s2 <<" game :"<<endl;
            cout<<endl;
            cin>>nine;
            if(nine==1)
            {
                time3();
            }
            else
            {
                return 0;
            };
            return 0;

        };

        if(tablepro2[0][1]== p1s && tablepro2[1][1]== p1s && tablepro2[2][1]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      second column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            cout<<endl;
            cout<<endl;

            cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<< s2 <<" game :"<<endl;
            cout<<endl;
            cin>>nine;
            if(nine==1)
            {
                time3();
            }
            else
            {
                return 0;
            };
            return 0;

        };
        if(tablepro2[0][2]== p1s && tablepro2[1][2]== p1s && tablepro2[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      third column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            cout<<endl;
            cout<<endl;

            cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<< s2 <<" game :"<<endl;
            cout<<endl;
            cin>>nine;
            if(nine==1)
            {
                time3();
            }
            else
            {
                return 0;
            };
            return 0;

        };
        if(tablepro2[0][0]== p1s && tablepro2[1][1]== p1s && tablepro2[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                     left to right diagonal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            cout<<endl;
            cout<<endl;

            cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<< s2 <<" game :"<<endl;
            cout<<endl;
            cin>>nine;
            if(nine==1)
            {
                time3();
            }
            else
            {
                return 0;
            };
            return 0;

        };
        if(tablepro2[0][2]== p1s && tablepro2[1][1]== p1s && tablepro2[2][0]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      right to left diagonal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            cout<<endl;
            cout<<endl;

            cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<< s2 <<" game :"<<endl;
            cout<<endl;
            cin>>nine;
            if(nine==1)
            {
                time3();
            }
            else
            {
                return 0;
            };
            return 0;

        };
        cout<<player2n << " enter the number of the field you want your sign to be in:"<<endl;
        cin>>p2i;

        if(p2i==0)
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;

            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<player2n << " enter the number of the field you want your sign to be in:"<<endl;
            cin>>p2i;
        };
        if(p2i==1)
        {
            tablepro2[0][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==2)
        {
            tablepro2[0][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==3)
        {
            tablepro2[0][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==4)
        {
            tablepro2[1][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==5)
        {
            tablepro2[1][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==6)
        {
            tablepro2[1][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==7)
        {
            tablepro2[2][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==8)
        {
            tablepro2[2][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(p2i==9)
        {
            tablepro2[2][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

    };

    if(tablepro2[0][0]== p2s && tablepro2[0][1]== p2s && tablepro2[0][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro2[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      first row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        cout<<endl;
        cout<<endl;

        cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<< s2 <<" game :"<<endl;
        cout<<endl;
        cin>>nine;
        if(nine==1)
        {
            time3();
        }
        else
        {
            return 0;
        };
        return 0;

    };
    if(tablepro2[1][0]== p2s && tablepro2[1][1]== p2s && tablepro2[1][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro2[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      second row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        cout<<endl;
        cout<<endl;

        cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<< s2 <<" game :"<<endl;
        cout<<endl;
        cin>>nine;
        if(nine==1)
        {
            time3();
        }
        else
        {
            return 0;
        };
        return 0;

    };
    if(tablepro2[2][0]== p2s && tablepro2[2][1]== p2s && tablepro2[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro2[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      third row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        cout<<endl;
        cout<<endl;

        cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<< s2 <<" game :"<<endl;
        cout<<endl;
        cin>>nine;
        if(nine==1)
        {
            time3();
        }
        else
        {
            return 0;
        };
        return 0;

    };

    if(tablepro2[0][0]== p2s && tablepro2[1][0]== p2s && tablepro2[2][0]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro2[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      first column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        cout<<endl;
        cout<<endl;

        cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<< s2 <<" game :"<<endl;
        cout<<endl;
        cin>>nine;
        if(nine==1)
        {
            time3();
        }
        else
        {
            return 0;
        };
        return 0;

    };

    if(tablepro2[0][1]== p2s && tablepro2[1][1]== p2s && tablepro2[2][1]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro2[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      second column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        cout<<endl;
        cout<<endl;

        cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<< s2 <<" game :"<<endl;
        cout<<endl;
        cin>>nine;
        if(nine==1)
        {
            time3();
        }
        else
        {
            return 0;
        };
        return 0;

    };
    if(tablepro2[0][2]== p2s && tablepro2[1][2]== p2s && tablepro2[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro2[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      third column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        cout<<endl;
        cout<<endl;

        cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<< s2 <<" game :"<<endl;
        cout<<endl;
        cin>>nine;
        if(nine==1)
        {
            time3();
        }
        else
        {
            return 0;
        };
        return 0;

    };
    if(tablepro2[0][0]== p2s && tablepro2[1][1]== p2s && tablepro2[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro2[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      left to right diagonal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        cout<<endl;
        cout<<endl;

        cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<< s2 <<" game :"<<endl;
        cout<<endl;
        cin>>nine;
        if(nine==1)
        {
            time3();
        }
        else
        {
            return 0;
        };
        return 0;

    };

    if(tablepro2[0][2]== p2s && tablepro2[1][1]== p2s && tablepro2[2][0]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro2[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      right to left diagonal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        cout<<endl;
        cout<<endl;

        cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<< s2 <<" game :"<<endl;
        cout<<endl;
        cin>>nine;
        if(nine==1)
        {
            time3();
        }
        else
        {
            return 0;
        };
        return 0;

    };
    system("CLS");
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout << tablepro2[row][col] <<"  ";
        }
        cout<<endl;
    }
    cout<<"             The Game Ends With A Draw Between "<<player1n<<" & "<<player2n<<endl;
    cout<<"             "<<player1n<<" & "<<player2n<<" Thank you for playing this game!!!"<<endl;
    cout<<endl;
    cout<<endl;

    cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<< s2 <<" game :"<<endl;
    cout<<endl;
    cin>>nine;
    if(nine==1)
    {
        time3();
    }
    else
    {
        return 0;
    };

};


char  time5()
{
    system("CLS");
    cout<<"                         TIC TAC TOE" <<endl;
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout << tablepro5[row][col] <<"  ";
        }
        cout<<endl;
    }
    int x = 1.5;
    while(x<5)
    {
        x = x + 1;

        cout<<player1n << " enter the number of the field you want your sign to be in:"<<endl;
        cin>>p1i;

        // 00 01 02
        // 10 11 12
        // 20 21 22

        if(p1i==0)
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;

            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<player1n << " enter the number of the field you want your sign to be in:"<<endl;
            cin>>p1i;
        };
        if(p1i==1)
        {
            tablepro5[0][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==2)
        {
            tablepro5[0][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==3)
        {
            tablepro5[0][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==4)
        {
            tablepro5[1][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==5)
        {
            tablepro5[1][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==6)
        {
            tablepro5[1][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==7)
        {
            tablepro5[2][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==8)
        {
            tablepro2[2][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(p1i==9)
        {
            tablepro5[2][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(tablepro5[0][0]== p1s && tablepro5[0][1]== p1s && tablepro5[0][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      first row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            time3();
            return 0;

        };
        if(tablepro5[1][0]== p1s && tablepro5[1][1]== p1s && tablepro5[1][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      second row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            time3();
            return 0;

        };
        if(tablepro5[2][0]== p1s && tablepro5[2][1]== p1s && tablepro5[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      third row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            time3();
            return 0;

        };

        if(tablepro5[0][0]== p1s && tablepro5[1][0]== p1s && tablepro5[2][0]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      first column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            time3();
            return 0;

        };

        if(tablepro5[0][1]== p1s && tablepro5[1][1]== p1s && tablepro5[2][1]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      second column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            time3();
            return 0;

        };
        if(tablepro5[0][2]== p1s && tablepro5[1][2]== p1s && tablepro5[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      third column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            time3();
            return 0;

        };
        if(tablepro5[0][0]== p1s && tablepro5[1][1]== p1s && tablepro5[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                     left to right diagonal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            time3();
            return 0;

        };
        if(tablepro5[0][2]== p1s && tablepro5[1][1]== p1s && tablepro5[2][0]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      right to left diagonal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            time3();
            return 0;

        };
        cout<<player2n << " enter the number of the field you want your sign to be in:"<<endl;
        cin>>p2i;

        if(p2i==0)
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;

            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<player2n << " enter the number of the field you want your sign to be in:"<<endl;
            cin>>p2i;
        };
        if(p2i==1)
        {
            tablepro5[0][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==2)
        {
            tablepro5[0][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==3)
        {
            tablepro5[0][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==4)
        {
            tablepro5[1][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==5)
        {
            tablepro5[1][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==6)
        {
            tablepro5[1][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==7)
        {
            tablepro5[2][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==8)
        {
            tablepro5[2][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(p2i==9)
        {
            tablepro5[2][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

    };

    if(tablepro5[0][0]== p2s && tablepro5[0][1]== p2s && tablepro5[0][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro5[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      first row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        time3();
        return 0;

    };
    if(tablepro5[1][0]== p2s && tablepro5[1][1]== p2s && tablepro5[1][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro5[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      second row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        time3();
        return 0;

    };
    if(tablepro5[2][0]== p2s && tablepro5[2][1]== p2s && tablepro5[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro5[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      third row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        time3();
        return 0;

    };

    if(tablepro5[0][0]== p2s && tablepro5[1][0]== p2s && tablepro5[2][0]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro5[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      first column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        time3();
        return 0;

    };

    if(tablepro5[0][1]== p2s && tablepro5[1][1]== p2s && tablepro5[2][1]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro5[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      second column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        time3();
        return 0;

    };
    if(tablepro5[0][2]== p2s && tablepro5[1][2]== p2s && tablepro5[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro5[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      third column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        time3();
        return 0;

    };
    if(tablepro5[0][0]== p2s && tablepro5[1][1]== p2s && tablepro5[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro5[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      left to right diagonal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        time3();
        return 0;

    };

    if(tablepro5[0][2]== p2s && tablepro5[1][1]== p2s && tablepro5[2][0]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro5[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      right to left diagonal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        time3();
        return 0;

    };
    system("CLS");
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout << tablepro5[row][col] <<"  ";
        }
        cout<<endl;
    }
    cout<<"             The Game Ends With A Draw Between "<<player1n<<" & "<<player2n<<endl;
    cout<<"             "<<player1n<<" & "<<player2n<<" Thank you for playing this game!!!"<<endl;
    cout<<endl;
    return 0;
};
char  time6()
{
    system("CLS");
    cout<<"                         TIC TAC TOE" <<endl;
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout << tablepro5[row][col] <<"  ";
        }
        cout<<endl;
    }
    int x = 1.5;
    while(x<5)
    {
        x = x + 1;

        cout<<player1n << " enter the number of the field you want your sign to be in:"<<endl;
        cin>>p1i;

        // 00 01 02
        // 10 11 12
        // 20 21 22

        if(p1i==0)
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;

            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<player1n << " enter the number of the field you want your sign to be in:"<<endl;
            cin>>p1i;
        };
        if(p1i==1)
        {
            tablepro5[0][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==2)
        {
            tablepro5[0][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==3)
        {
            tablepro5[0][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==4)
        {
            tablepro5[1][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==5)
        {
            tablepro5[1][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==6)
        {
            tablepro5[1][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==7)
        {
            tablepro5[2][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==8)
        {
            tablepro2[2][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro2[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(p1i==9)
        {
            tablepro5[2][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(tablepro5[0][0]== p1s && tablepro5[0][1]== p1s && tablepro5[0][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      first row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro5[1][0]== p1s && tablepro5[1][1]== p1s && tablepro5[1][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      second row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;

            return 0;

        };
        if(tablepro5[2][0]== p1s && tablepro5[2][1]== p1s && tablepro5[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      third row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;

            return 0;

        };

        if(tablepro5[0][0]== p1s && tablepro5[1][0]== p1s && tablepro5[2][0]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      first column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;

            return 0;

        };

        if(tablepro5[0][1]== p1s && tablepro5[1][1]== p1s && tablepro5[2][1]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      second column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;

            return 0;

        };
        if(tablepro5[0][2]== p1s && tablepro5[1][2]== p1s && tablepro5[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      third column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;

            return 0;

        };
        if(tablepro5[0][0]== p1s && tablepro5[1][1]== p1s && tablepro5[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                     left to right diagonal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;

            return 0;

        };
        if(tablepro5[0][2]== p1s && tablepro5[1][1]== p1s && tablepro5[2][0]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      right to left diagonal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;

            return 0;

        };
        cout<<player2n << " enter the number of the field you want your sign to be in:"<<endl;
        cin>>p2i;

        if(p2i==0)
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;

            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<player2n << " enter the number of the field you want your sign to be in:"<<endl;
            cin>>p2i;
        };
        if(p2i==1)
        {
            tablepro5[0][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==2)
        {
            tablepro5[0][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==3)
        {
            tablepro5[0][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==4)
        {
            tablepro5[1][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==5)
        {
            tablepro5[1][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==6)
        {
            tablepro5[1][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==7)
        {
            tablepro5[2][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==8)
        {
            tablepro5[2][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(p2i==9)
        {
            tablepro5[2][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro5[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

    };

    if(tablepro5[0][0]== p2s && tablepro5[0][1]== p2s && tablepro5[0][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro5[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      first row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;

        return 0;

    };
    if(tablepro5[1][0]== p2s && tablepro5[1][1]== p2s && tablepro5[1][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro5[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      second row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;

        return 0;

    };
    if(tablepro5[2][0]== p2s && tablepro5[2][1]== p2s && tablepro5[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro5[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      third row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;

        return 0;

    };

    if(tablepro5[0][0]== p2s && tablepro5[1][0]== p2s && tablepro5[2][0]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro5[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      first column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;

        return 0;

    };

    if(tablepro5[0][1]== p2s && tablepro5[1][1]== p2s && tablepro5[2][1]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro5[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      second column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;

        return 0;

    };
    if(tablepro5[0][2]== p2s && tablepro5[1][2]== p2s && tablepro5[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro5[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      third column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;

        return 0;

    };
    if(tablepro5[0][0]== p2s && tablepro5[1][1]== p2s && tablepro5[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro5[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      left to right diagonal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;

        return 0;

    };

    if(tablepro5[0][2]== p2s && tablepro5[1][1]== p2s && tablepro5[2][0]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro5[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      right to left diagonal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;

        return 0;

    };
    system("CLS");
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout << tablepro5[row][col] <<"  ";
        }
        cout<<endl;
    }
    cout<<"             The Game Ends With A Draw Between "<<player1n<<" & "<<player2n<<endl;
    cout<<"             "<<player1n<<" & "<<player2n<<" Thank you for playing this game!!!"<<endl;
    cout<<endl;
    return 0;
};
char  time3()
{
    system("CLS");
    cout<<"                         TIC TAC TOE" <<endl;
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout << tablepro3[row][col] <<"  ";
        }
        cout<<endl;
    }
    int x = 1.5;
    while(x<5)
    {
        x = x + 1;

        cout<<player1n << " enter the number of the field you want your sign to be in:"<<endl;
        cin>>p1i;

        // 00 01 02
        // 10 11 12
        // 20 21 22

        if(p1i==0)
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;

            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<player1n << " enter the number of the field you want your sign to be in:"<<endl;
            cin>>p1i;
        };
        if(p1i==1)
        {
            tablepro3[0][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==2)
        {
            tablepro3[0][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==3)
        {
            tablepro3[0][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==4)
        {
            tablepro3[1][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==5)
        {
            tablepro3[1][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==6)
        {
            tablepro3[1][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==7)
        {
            tablepro3[2][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==8)
        {
            tablepro3[2][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(p1i==9)
        {
            tablepro3[2][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(tablepro3[0][0]== p1s && tablepro3[0][1]== p1s && tablepro3[0][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      first row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro3[1][0]== p1s && tablepro3[1][1]== p1s && tablepro3[1][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      second row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro3[2][0]== p1s && tablepro3[2][1]== p1s && tablepro3[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      third row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };

        if(tablepro3[0][0]== p1s && tablepro3[1][0]== p1s && tablepro3[2][0]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      first column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };

        if(tablepro3[0][1]== p1s && tablepro3[1][1]== p1s && tablepro3[2][1]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      second column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro3[0][2]== p1s && tablepro3[1][2]== p1s && tablepro3[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      third column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro3[0][0]== p1s && tablepro3[1][1]== p1s && tablepro3[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                     left to right diagonal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro3[0][2]== p1s && tablepro3[1][1]== p1s && tablepro3[2][0]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      right to left diagonal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        cout<<player2n << " enter the number of the field you want your sign to be in:"<<endl;
        cin>>p2i;

        if(p2i==0)
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;

            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<player2n << " enter the number of the field you want your sign to be in:"<<endl;
            cin>>p2i;
        };
        if(p2i==1)
        {
            tablepro3[0][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==2)
        {
            tablepro3[0][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==3)
        {
            tablepro3[0][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==4)
        {
            tablepro3[1][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==5)
        {
            tablepro3[1][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==6)
        {
            tablepro3[1][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==7)
        {
            tablepro3[2][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==8)
        {
            tablepro3[2][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(p2i==9)
        {
            tablepro3[2][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro3[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

    };

    if(tablepro3[0][0]== p2s && tablepro3[0][1]== p2s && tablepro3[0][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro3[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      first row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;



    };
    if(tablepro3[1][0]== p2s && tablepro3[1][1]== p2s && tablepro3[1][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro3[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      second row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        return 0;

    };
    if(tablepro3[2][0]== p2s && tablepro3[2][1]== p2s && tablepro3[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro3[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      third row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        return 0;

    };

    if(tablepro3[0][0]== p2s && tablepro3[1][0]== p2s && tablepro3[2][0]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro3[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      first column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        return 0;

    };

    if(tablepro3[0][1]== p2s && tablepro3[1][1]== p2s && tablepro3[2][1]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro3[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      second column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        return 0;

    };
    if(tablepro3[0][2]== p2s && tablepro3[1][2]== p2s && tablepro3[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro3[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      third column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        return 0;

    };
    if(tablepro3[0][0]== p2s && tablepro3[1][1]== p2s && tablepro3[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro3[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      left to right diagonal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        return 0;

    };

    if(tablepro3[0][2]== p2s && tablepro3[1][1]== p2s && tablepro3[2][0]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro3[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      right to left diagonal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        return 0;

    };
    system("CLS");
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout << tablepro3[row][col] <<"  ";
        }
        cout<<endl;
    }
    cout<<"             The Game Ends With A Draw Between "<<player1n<<" & "<<player2n<<endl;
    cout<<"             "<<player1n<<" & "<<player2n<<" Thank you for playing this game!!!"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    return 0;
};
char  time4()
{
    system("CLS");
    cout<<"                         TIC TAC TOE" <<endl;
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout << tablepro4[row][col] <<"  ";
        }
        cout<<endl;
    }
    int x = 1.5;
    while(x<5)
    {
        x = x + 1;

        cout<<player1n << " enter the number of the field you want your sign to be in:"<<endl;
        cin>>p1i;

        // 00 01 02
        // 10 11 12
        // 20 21 22

        if(p1i==0)
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;

            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<player1n << " enter the number of the field you want your sign to be in:"<<endl;
            cin>>p1i;
        };
        if(p1i==1)
        {
            tablepro4[0][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==2)
        {
            tablepro4[0][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==3)
        {
            tablepro4[0][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==4)
        {
            tablepro4[1][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==5)
        {
            tablepro4[1][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==6)
        {
            tablepro4[1][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==7)
        {
            tablepro4[2][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==8)
        {
            tablepro4[2][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(p1i==9)
        {
            tablepro4[2][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(tablepro4[0][0]== p1s && tablepro4[0][1]== p1s && tablepro4[0][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      first row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<player1n<<" and "<<player2n<<" to play your "<<s1<<" game press 1"<<endl;
            cin>>timeacc;
            if(timeacc==1)
            {
                time2();
            }
            else
            {
                return 0;
            };
            return 0;

        };
        if(tablepro4[1][0]== p1s && tablepro4[1][1]== p1s && tablepro4[1][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      second row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<player1n<<" and "<<player2n<<" to play your "<<s1<<" game press 1"<<endl;
            cin>>timeacc;
            if(timeacc==1)
            {
                time2();
            }
            else
            {
                return 0;
            };
            return 0;

        };
        if(tablepro4[2][0]== p1s && tablepro4[2][1]== p1s && tablepro4[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      third row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<player1n<<" and "<<player2n<<" to play your "<<s1<<" game press 1"<<endl;
            cin>>timeacc;
            if(timeacc==1)
            {
                time2();
            }
            else
            {
                return 0;
            };
            return 0;

        };

        if(tablepro4[0][0]== p1s && tablepro4[1][0]== p1s && tablepro4[2][0]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      first column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<player1n<<" and "<<player2n<<" to play your "<<s1<<" game press 1"<<endl;
            cin>>timeacc;
            if(timeacc==1)
            {
                time2();
            }
            else
            {
                return 0;
            };
            return 0;

        };

        if(tablepro4[0][1]== p1s && tablepro4[1][1]== p1s && tablepro4[2][1]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      second column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<player1n<<" and "<<player2n<<" to play your "<<s1<<" game press 1"<<endl;
            cin>>timeacc;
            if(timeacc==1)
            {
                time2();
            }
            else
            {
                return 0;
            };
            return 0;

        };
        if(tablepro4[0][2]== p1s && tablepro4[1][2]== p1s && tablepro4[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      third column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<player1n<<" and "<<player2n<<" to play your "<<s1<<" game press 1"<<endl;
            cin>>timeacc;
            if(timeacc==1)
            {
                time2();
            }
            else
            {
                return 0;
            };
            return 0;

        };
        if(tablepro4[0][0]== p1s && tablepro4[1][1]== p1s && tablepro4[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                     left to right diagonal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<player1n<<" and "<<player2n<<" to play your "<<s1<<" game press 1"<<endl;
            cin>>timeacc;
            if(timeacc==1)
            {
                time2();
            }
            else
            {
                return 0;
            };
            return 0;

        };
        if(tablepro4[0][2]== p1s && tablepro4[1][1]== p1s && tablepro4[2][0]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      right to left diagonal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<player1n<<" and "<<player2n<<" to play your "<<s1<<" game press 1"<<endl;
            cin>>timeacc;
            if(timeacc==1)
            {
                time2();
            }
            else
            {
                return 0;
            };
            return 0;

        };
        cout<<player2n << " enter the number of the field you want your sign to be in:"<<endl;
        cin>>p2i;

        if(p2i==0)
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;

            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<player2n << " enter the number of the field you want your sign to be in:"<<endl;
            cin>>p2i;
        };
        if(p2i==1)
        {
            tablepro4[0][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==2)
        {
            tablepro4[0][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==3)
        {
            tablepro4[0][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==4)
        {
            tablepro4[1][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==5)
        {
            tablepro4[1][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==6)
        {
            tablepro4[1][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==7)
        {
            tablepro4[2][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==8)
        {
            tablepro4[2][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(p2i==9)
        {
            tablepro4[2][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro4[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

    };

    if(tablepro4[0][0]== p2s && tablepro4[0][1]== p2s && tablepro4[0][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro4[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      first row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<player1n<<" and "<<player2n<<" to play your "<<s1<<" game press 1"<<endl;
        cin>>timeacc;
        if(timeacc==1)
        {
            time2();
        }
        else
        {
            return 0;
        };
        return 0;

    };
    if(tablepro4[1][0]== p2s && tablepro4[1][1]== p2s && tablepro4[1][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro4[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      second row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<player1n<<" and "<<player2n<<" to play your "<<s1<<" game press 1"<<endl;
        cin>>timeacc;
        if(timeacc==1)
        {
            time2();
        }
        else
        {
            return 0;
        };
        return 0;

    };
    if(tablepro4[2][0]== p2s && tablepro4[2][1]== p2s && tablepro4[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro4[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      third row horizontal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<player1n<<" and "<<player2n<<" to play your "<<s1<<" game press 1"<<endl;
        cin>>timeacc;
        if(timeacc==1)
        {
            time2();
        }
        else
        {
            return 0;
        };

        return 0;

    };

    if(tablepro4[0][0]== p2s && tablepro4[1][0]== p2s && tablepro4[2][0]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro4[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      first column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<player1n<<" and "<<player2n<<" to play your "<<s1<<" game press 1"<<endl;
        cin>>timeacc;
        if(timeacc==1)
        {
            time2();
        }
        else
        {
            return 0;
        };

        return 0;

    };

    if(tablepro4[0][1]== p2s && tablepro4[1][1]== p2s && tablepro4[2][1]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro4[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      second column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<player1n<<" and "<<player2n<<" to play your "<<s1<<" game press 1"<<endl;
        cin>>timeacc;
        if(timeacc==1)
        {
            time2();
        }
        else
        {
            return 0;
        };

        return 0;

    };
    if(tablepro4[0][2]== p2s && tablepro4[1][2]== p2s && tablepro4[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro4[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      third column vertical"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<player1n<<" and "<<player2n<<" to play your "<<s1<<" game press 1"<<endl;
        cin>>timeacc;
        if(timeacc==1)
        {
            time2();
        }
        else
        {
            return 0;
        };

        return 0;

    };
    if(tablepro4[0][0]== p2s && tablepro4[1][1]== p2s && tablepro4[2][2]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro4[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      left to right diagonal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<player1n<<" and "<<player2n<<" to play your "<<s1<<" game press 1"<<endl;
        cin>>timeacc;
        if(timeacc==1)
        {
            time2();
        }
        else
        {
            return 0;
        };

        return 0;

    };

    if(tablepro4[0][2]== p2s && tablepro4[1][1]== p2s && tablepro4[2][0]== p2s )
    {
        system("CLS");
        cout<<"                         TIC TAC TOE" <<endl;
        for(int row=0; row<3; row++)
        {
            for(int col=0; col<3; col++)
            {
                cout <<  tablepro4[row][col] <<"  ";
            }
            cout<<endl;
        }

        cout<<"                      right to left diagonal"<<endl;
        cout<<"                       "<<player2n<<" WINS!!!"<<endl;
        cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<player1n<<" and "<<player2n<<" to play your "<<s1<<" game press 1"<<endl;
        cin>>timeacc;
        if(timeacc==1)
        {
            time2();
        }
        else
        {
            return 0;
        };

        return 0;

    };
    system("CLS");
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout << tablepro4[row][col] <<"  ";
        }
        cout<<endl;
    }
    cout<<"             The Game Ends With A Draw Between "<<player1n<<" & "<<player2n<<endl;
    cout<<"             "<<player1n<<" & "<<player2n<<" Thank you for playing this game!!!"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<player1n<<" and "<<player2n<<" to play your "<<s1<<" game press 1"<<endl;
    cin>>timeacc;
    if(timeacc==1)
    {
        time2();
    }
    else
    {
        return 0;
    };
};
char table2()
{
    system("CLS");

    cout<<"                         TIC TAC TOE" <<endl;
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout << tablepro1[row][col] <<"  ";
        }
        cout<<endl;
    }
    int x = 1;
    while(x<5)
    {
        x = x + 1;

        cout<<player1n << " enter the number of the field you want your sign to be in:"<<endl;
        cin>>p1i;

        // 00 01 02
        // 10 11 12
        // 20 21 22

        if(p1i==0)
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;

            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<player1n << " enter the number of the field you want your sign to be in:"<<endl;
            cin>>p1i;
        };
        if(p1i==1)
        {
            tablepro1[0][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==2)
        {
            tablepro1[0][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==3)
        {
            tablepro1[0][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==4)
        {
            tablepro1[1][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==5)
        {
            tablepro1[1][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==6)
        {
            tablepro1[1][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==7)
        {
            tablepro1[2][0] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p1i==8)
        {
            tablepro1[2][1] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(p1i==9)
        {
            tablepro1[2][2] = p1s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };


        if(tablepro1[0][0]== p1s && tablepro1[0][1]== p1s && tablepro1[0][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      first row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro1[1][0]== p1s && tablepro1[1][1]== p1s && tablepro1[1][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      second row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro1[2][0]== p1s && tablepro1[2][1]== p1s && tablepro1[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      third row horizontal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };

        if(tablepro1[0][0]== p1s && tablepro1[1][0]== p1s && tablepro1[2][0]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      first column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };

        if(tablepro1[0][1]== p1s && tablepro1[1][1]== p1s && tablepro1[2][1]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      second column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro1[0][2]== p1s && tablepro1[1][2]== p1s && tablepro1[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      third column vertical"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro1[0][0]== p1s && tablepro1[1][1]== p1s && tablepro1[2][2]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                     left to right diagonal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro1[0][2]== p1s && tablepro1[1][1]== p1s && tablepro1[2][0]== p1s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      right to left diagonal"<<endl;
            cout<<"                       "<<player1n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        cout<<player2n << " enter the number of the field you want your sign to be in:"<<endl;
        cin>>p2i;

        if(p2i==0)
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;

            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
            cout<<player2n << " enter the number of the field you want your sign to be in:"<<endl;
            cin>>p2i;

        };
        if(p2i==1)
        {
            tablepro1[0][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==2)
        {
            tablepro1[0][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==3)
        {
            tablepro1[0][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==4)
        {
            tablepro1[1][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==5)
        {
            tablepro1[1][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==6)
        {
            tablepro1[1][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==7)
        {
            tablepro1[2][0] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(p2i==8)
        {
            tablepro1[2][1] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };

        if(p2i==9)
        {
            tablepro1[2][2] = p2s;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }
        };
        if(tablepro1[0][0]== p2s && tablepro1[0][1]== p2s && tablepro1[0][2]== p2s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      first row horizontal"<<endl;
            cout<<"                       "<<player2n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro1[1][0]== p2s && tablepro1[1][1]== p2s && tablepro1[1][2]== p2s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      second row horizontal"<<endl;
            cout<<"                       "<<player2n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro1[2][0]== p2s && tablepro1[2][1]== p2s && tablepro1[2][2]== p2s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      third row horizontal"<<endl;
            cout<<"                       "<<player2n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };

        if(tablepro1[0][0]== p2s && tablepro1[1][0]== p2s && tablepro1[2][0]== p2s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      first column vertical"<<endl;
            cout<<"                       "<<player2n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };

        if(tablepro1[0][1]== p2s && tablepro1[1][1]== p2s && tablepro1[2][1]== p2s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      second column vertical"<<endl;
            cout<<"                       "<<player2n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro1[0][2]== p2s && tablepro1[1][2]== p2s && tablepro1[2][2]== p2s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      third column vertical"<<endl;
            cout<<"                       "<<player2n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
        if(tablepro1[0][0]== p2s && tablepro1[1][1]== p2s && tablepro1[2][2]== p2s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      left to right diagonal"<<endl;
            cout<<"                       "<<player2n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };

        if(tablepro1[0][2]== p2s && tablepro1[1][1]== p2s && tablepro1[2][0]== p2s )
        {
            system("CLS");
            cout<<"                         TIC TAC TOE" <<endl;
            for(int row=0; row<3; row++)
            {
                for(int col=0; col<3; col++)
                {
                    cout <<  tablepro1[row][col] <<"  ";
                }
                cout<<endl;
            }

            cout<<"                      right to left diagonal"<<endl;
            cout<<"                       "<<player2n<<" WINS!!!"<<endl;
            cout<<"                       "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
            return 0;

        };
    }
    system("CLS");
    cout<<"                         TIC TAC TOE" <<endl;
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout <<  tablepro1[row][col] <<"  ";
        }
        cout<<endl;
    }
    cout<<"             The Game Ends With A DRAW between "<<player1n<<" and "<<player2n<<"!!!!!"<<endl;
    cout<<"             "<<player1n<<" and "<<player2n<<" Thank you for playing this game!!!"<<endl;
    cout<<endl;

};

int sets()
{
    system("CLS");
    cout<<player1n<<" and "<<player2n<<" how many times do you want to play ?"<<endl;
    cout<<endl;
    cout<<"                        you can play up to 5"<<endl;
    cout<<endl;
    cout<<endl;
    cin>>time;
    if(time==0)
    {
        cout<<"                                BYE BYE!!!"<<endl;
        return 0;
    };
    if(time==1)
    {
        playerinput();
        return 0;
    };
    if(time==2)
    {
        time2();
        cout<<endl;
        cout<<endl;

    };
    if(time==3)
    {
        time4();
        s2.replace(23, 6, "third");
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;

    };
    if(time==4)
    {
        time4();
        cout<<endl;
        cout<<endl;
        cout<<"Enter 1 to play your Forth game : "<<endl;
        cout<<endl;
        cout<<endl;
        cin>>why;
        if(why==1)
        {
            playerinput();
        }
        else
        {
            return 0;
        };
    };
    if(time==5)
    {
        time4();
        cout<<endl;
        cout<<endl;
        cout<<player1n<<" and "<<player2n<<" enter 1 to play your "<<s3<<" game"<<endl;
        cout<<endl;
        cin>>whatever;
        if(whatever==1)
        {
            playerinput();

        }
        else
        {
            return 0;
        };
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Enter 1 to play your Fifth game : "<<endl;
        cout<<endl;
        cout<<endl;
        cin>>whymenow;
        if(whymenow==1)
        {
            time6();
        }
        else
        {
            return 0;
        };
        return 0;
    };
    if(time>5)
    {
        cout<<"you can't play more than 5 times"<<endl;
        sets();
    };
    if(time<0)
    {
        sets();
    };
};



