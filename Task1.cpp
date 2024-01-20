#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
   cout<<"                                 NUMBER GUESSING GAME\n";
   cout<<"Welcome buddy, Here you have to guess a number between 1 and 100 within a limited chance\n                           and the number of chance is your choice!!!";
   cout<<"\nLets Begin!!!\n";
   srand((unsigned) time(NULL));
   while(1)
   {
        cout<<"Levels for you :\n1 : EASY\n2 : MEDIUM\n3 : DIFFICULT\n4 : EXIT\n\n";
        int level;
        cout<<"Choose your level: ";
        cin>>level;
        int random = 1 + (rand() % 100);
        if(level==1)
        {
            cout<<"\nYou have chosen the EASY level and you have totally 10 chances to guess the number!!\n";
            int chance = 10;
            while(chance--)
            { 
                int num;
                cout<<"\nEnter your guess: ";
                cin>>num;
                if(num>=1 && num<=100)
                {
                    if(num==random)
                    {
                        cout<<"\nHip Hip Hooray!!! YOU WON \nYes, you guessed it right, the number is "<<random<<" \nPlay more with us....\n\n\n";
                        break;
                    }
                    else if(num < random)
                    {
                        if(chance == 0)
                        {
                            cout<<"Oops!! You lose..\nYes, you are out of chance and the number is "<<random<<"\n\nTry again to win!!\n\n\n";
                        }
                        else
                            cout<<"Hey, You are too less..try something high!\n\n";
                    }
                    else if(num > random)
                    {
                        if(chance == 0)
                        {
                            cout<<"Oops!! You lose..\nYes, you are out of chance and the number is "<<random<<"\n\nTry again to win!!\n\n\n";
                        }
                        else
                            cout<<"Nope!! You are too high dude...try less!!\n\n";
                    }
                }
                else
                    cout<<"Your guess is out of range!! Try something between 1 and 100\n\n";
            }
        }
        else if(level==2)
        {
            cout<<"\nYou have chosen the MEDIUM level and you have totally 7 chances to guess the number!!\n";
            int chance = 7;
            while(chance--)
            { 
                int num;
                cout<<"\nEnter your guess: ";
                cin>>num;
                if(num>=1 && num<=100){
                    if(num==random)
                    {
                        cout<<"\nHip Hip Hooray!!! YOU WON \nYes, you guessed it right, the number is "<<random<<" \nPlay more with us....\n\n\n";
                        break;
                    }
                    else if(num < random)
                    {
                        if(chance == 0)
                        {
                            cout<<"Oops!! You lose..\nYes, you are out of chance and the number is "<<random<<"\n\nTry again to win!!\n\n\n";
                        }
                        else
                            cout<<"Hey, You are too less..try something high!\n\n";
                    }
                    else if(num > random)
                    {
                        if(chance == 0)
                        {
                            cout<<"Oops!! You lose..\nYes, you are out of chance and the number is "<<random<<"\n\nTry again to win!!\n\n\n";
                        }
                        else
                            cout<<"Nope!! You are too high dude...try less!!\n\n";
                    }
                }
                else
                    cout<<"Your guess is out of range!! Try something between 1 and 100\n\n";
            }
        }
        else if(level==3)
        {
            cout<<"\nYou have chosen the DIFFICULT level and you have totally 5 chances to guess the number!!\n";
            int chance = 5;
            while(chance--)
            { 
                int num;
                cout<<"\nEnter your guess: ";
                cin>>num;
                if(num>=1 && num<=100)
                {
                    if(num==random)
                    {
                        cout<<"\nHip Hip Hooray!!! YOU WON \nYes, you guessed it right, the number is "<<random<<" \nPlay more with us....\n\n\n";
                        break;
                    }
                    else if(num < random)
                    {
                        if(chance == 0)
                        {
                            cout<<"Oops!! You lose..\nYes, you are out of chance and the number is "<<random<<"\n\nTry again to win!!\n\n\n";
                        }
                        else
                            cout<<"Hey, You are too less..try something high!\n\n";
                    }
                    else if(num > random)
                    {
                        if(chance == 0)
                        {
                            cout<<"Oops!! You lose..\nYes, you are out of chance and the number is "<<random<<"\n\nTry again to win!!\n\n\n";
                        }
                        else
                            cout<<"Nope!! You are too high dude...try less!!\n\n";
                    }
                }
                else
                    cout<<"Your guess is out of range!! Try something between 1 and 100\n\n";
                    
            }
           
        }
        else if(level == 4)
        exit(0);
        else
        {
            cout<<"\nInvalid Entry!!\nYes, you have entered an invalid level...try something like (1,2,3,4)\n\n\n";
        }
   }
}