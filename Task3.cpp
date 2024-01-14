#include<iostream>
using namespace std;
char b[3][3];
int r,c;
char player;
int box;
int flag;
void get_ready()
{
     b[0][0] = '1';
     b[0][1] = '2';
     b[0][2] = '3';
     b[1][0] = '4';
     b[1][1] = '5';
     b[1][2] = '6';
     b[2][0] = '7';
     b[2][1] = '8';
     b[2][2] = '9';
     flag=0;
     player='X';

}
void switch_player()
{
     cout<<"Want to switch Player ?\nEnter '1' to switch or '0' to continue as same...\n";
     int switch_play;
     cin>>switch_play;
     if(switch_play==1)
     {
        if(player=='X')
        player = 'O';
        else 
        player = 'X' ;
     }
}

bool win()
{
    for(int i=0;i<3;i++)
    {
        if(b[i][0]==b[i][1] && b[i][1]==b[i][2])
        return true;
        if(b[0][i]==b[1][i] && b[1][i]==b[2][i])
        return true;
    }
    if(b[0][0]==b[1][1] && b[1][1]==b[2][2])
    return true;
    if(b[0][2]==b[1][1] && b[1][1] == b[2][0])
    return true;
    return false;
}
int input()
{
    cout<<"\nInput box\n";
    if(player=='X')
    {
        cout<<"Player - X : ";
        cin>>box;
        
    }
    else
    {
        cout<<"Player - O : ";
        cin>>box;
        
    }
    return box;
}

bool move(int box)
{
     switch(box)
    {
        case 1:
            r=0;
            c=0;
            break;
        case 2:
            r=0;
            c=1;
            break;
        case 3:
            r=0;
            c=2;
            break;
        case 4:
            r=1;
            c=0;
            break;
        case 5:
            r=1;
            c=1;
            break;
        case 6:
            r=1;
            c=2;
            break;
        case 7:
            r=2;
            c=0;
            break;
        case 8:
            r=2;
            c=1;
            break;
        case 9:
            r=2;
            c=2;
            break;
        default: 
            cout<<"Invalid move\n"; 
            return false;   
    }
    if(player=='X')
    {
        if(b[r][c]!='X' && b[r][c]!='O')
        {
            b[r][c] = 'X';
            if(win())
            {
                cout<<"\n\nHurry!! X Won\n";
                flag=1;
            }
            else{
                player='O';
            }
        }
        else
        {
            cout<<"Invalid move\n";
            return false;
        }  
    }
    else if(player=='O')
    {
        if(b[r][c]!='X' && b[r][c]!='O')
        {
            b[r][c] = 'O';
            if(win())
            {
                cout<<"\n\nHurry!! O Won\n";
                flag=1;
            }
            else
            {
                player='X';
            }

        }
        else
        {
            cout<<"Invalid move\n";
            return false;
        }
    }
    return true;
}
void display()
{
    cout<<endl;
    cout<<"  "<<b[0][0]<<"  |  "<<b[0][1]<<"  |  "<<b[0][2]<<"  \n";
    cout<<"_____|_____|_____\n";
    cout<<"  "<<b[1][0]<<"  |  "<<b[1][1]<<"  |  "<<b[1][2]<<"  \n";
    cout<<"_____|_____|_____\n";
    cout<<"  "<<b[2][0]<<"  |  "<<b[2][1]<<"  |  "<<b[2][2]<<"  \n";
    cout<<"     |     |     \n";

}
int main()
{
        int play_again = 1;
        while(play_again==1)
        {
            cout<<"\n\n--------TIC---TAC---TOE-------\n\n";
            int t=9;
            get_ready();
            display();
            switch_player();
            while(t--)
            {
                int in;
                in = input();
                while(!move(in))
                {
                    in = input();
                }
                display();
                if(flag==1)
                {
                    break;
                }
            }
            if(t==-1)
            {
                cout<<"\n\nGAME DRAW....\n";
            }
            cout<<"\nWant to play again ??...\n";
            cout<<"Enter 1 to continue or 0 to exit\n";
            cin>>play_again;
        }
}