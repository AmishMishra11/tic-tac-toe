#include<bits/stdc++.h>
using namespace std;
class Game{
  public:
    int sum;
    char b[9];
    char c[1];
   Game()
    {
      sum=0;
      for(int i=0;i<9;i++)
      {
        b[i]=' ';
      }
      
        c[0]=' ';
      
    }
    bool checkWinner()
    {
      int winner=0;
      //Horizontal row one      
      if(b[0]==b[1]&&b[1]==b[2]&&b[0]!=' ')
      {
          if(b[0]=='X')
          {
              c[0]='x';
          }
          else if(b[0]=='O')
          {
              c[0]='o';
          }
                
        winner=1;
      }    
      //Horizontal row two  
      if(b[3]!=' '&&b[3]==b[4]&&b[4]==b[5])
      {
        if(b[3]=='X')
          {
              c[0]='x';
          }
          else if(b[3]=='O')
          {
              c[0]='o';
          }
          
        winner=1;
      }
      //Horizontal row three  
      if(b[6]!=' '&&b[6]==b[7]&&b[7]==b[8])
        {
          if(b[6]=='X')
          {
              c[0]='x';
          }
          else if(b[6]=='O')
          {
              c[0]='o';
          }
          
          winner=1;
        }    
      //Vertical columm one  
      if(b[0]!=' '&&b[0]==b[3]&&b[3]==b[6])
        {
          if(b[0]=='X')
          {
              c[0]='x';
          }
          else if(b[0]=='O')
          {
              c[0]='o';
          }
          
          winner=1;
        }        
      //Vertical columm two  
      if(b[1]!=' '&&b[1]==b[4]&&b[4]==b[7])
        {
          if(b[1]=='X')
          {
              c[0]='x';
          }
          else if(b[1]=='O')
          {
              c[0]='o';
          }
           
          winner=1;
        }        
      //Vertical columm three
      if(b[2]!=' '&&b[2]==b[5]&&b[5]==b[8])
        {
          if(b[2]=='X')
          {
              c[0]='x';
          }
          else if(b[2]=='O')
          {
              c[0]='o';
          }
           
          winner=1;
        }        
      //Diagonal one  
      if(b[0]!=' '&&b[0]==b[4]&&b[4]==b[8])
        {
          if(b[0]=='X')
          {
              c[0]='x';
          }
          else if(b[0]=='O')
          {
              c[0]='o';
          }
           
          winner=1;
        }        
      //Diagonal two  
      if(b[2]!=' '&&b[2]==b[4]&&b[4]==b[6])
        {
          if(b[2]=='X')
          {
              c[0]='x';
          }
          else if(b[2]=='O')
          {
              c[0]='o';
          }
           
          winner=1;
        }
      if(winner==1)
      {
        return true;
      }
      else if(winner==0&&sum>=9)
      {
        c[0]='t';
        return true;
      }
      else
      {
        return false;
      }
    }
   void turnPlayed(int x)
   {
     if(sum%2==0)
     {
       if(b[x-1]==' ')
       {
         b[x-1]='X';
         sum++;
       }
       else
       {
         cout<<"Invalid turn"<<endl<<endl;
       }
       cout<<"player one turn played "<<endl<<endl;
     }
     else
     {
       if(b[x-1]==' ')
       {
         b[x-1]='O';
         sum++;
       }
       else
       {
         cout<<"Invalid turn"<<endl<<endl;
       }
       cout<<"Player two turn played "<<endl<<endl;
     }
   }
   bool continueGame()
   {
     if(checkWinner())
     {
       return false;
     }  
     else{
       return true;
     }
   }
};
int main(){
Game g1;
int option, pos;
cout << "What operation do you want to perform?"<<endl; 
cout<<"Enter 0 to exit. "<<endl;
cout<<"Enter 1 to play the Game. " << endl;
cin>>option;
        cout<<"1  |2  |3  "<<endl;
        cout<<" "<<g1.b[0]<<" | "<<g1.b[1]<<" | "<<g1.b[2]<<" "<<endl;
        cout<<"___|___|___"<<endl;
        cout<<"4  |5  |6  "<<endl;
        cout<<" "<<g1.b[3]<<" | "<<g1.b[4]<<" | "<<g1.b[5]<<" "<<endl;
        cout<<"___|___|___"<<endl;
        cout<<"7  |8  |9  "<<endl;
        cout<<" "<<g1.b[6]<<" | "<<g1.b[7]<<" | "<<g1.b[8]<<" "<<endl;
        cout<<"   |   |   "<<endl<<endl;

do
{
  if(option==0)
  {
    cout<<"You have closed the game"<<endl;
  }
  else if(option==1)
  {
    if(g1.continueGame())
    {
      cout<<"Enter the position"<<endl;
      if(g1.sum%2==0)
      {
        cout<<"player one turn (X turn)"<<endl;
      }
      else
      {
        cout<<"player two turn (O turn)"<<endl;
      }
      cin>>pos;
      if(pos==0)
      {
        cout<<"You have closed the game"<<endl;
        option=0;
        break;
      }
      g1.turnPlayed(pos);
      if(g1.checkWinner())
      {
        cout<<"1  |2  |3  "<<endl;
        cout<<" "<<g1.b[0]<<" | "<<g1.b[1]<<" | "<<g1.b[2]<<" "<<endl;
        cout<<"___|___|___"<<endl;
        cout<<"4  |5  |6  "<<endl;
        cout<<" "<<g1.b[3]<<" | "<<g1.b[4]<<" | "<<g1.b[5]<<" "<<endl;
        cout<<"___|___|___"<<endl;
        cout<<"7  |8  |9  "<<endl;
        cout<<" "<<g1.b[6]<<" | "<<g1.b[7]<<" | "<<g1.b[8]<<" "<<endl;
        cout<<"   |   |   "<<endl<<endl;
        cout<<"Game over. "<<endl;
        if(g1.c[0]=='x')
        {
            cout<<"X Wins"<<endl;
        }
        else if(g1.c[0]=='o')
        {
            cout<<"O Wins"<<endl;
        }
        if(g1.c[0]=='t')
        {
            cout<<"Tie"<<endl;
        }
        option=0;
      }
    }
  }
  
  else
  {
    cout << "Enter Proper Option number " << endl<<endl;
    cin>>option;
  }
  if(option==1)
  {
    
        cout<<"1  |2  |3  "<<endl;
        cout<<" "<<g1.b[0]<<" | "<<g1.b[1]<<" | "<<g1.b[2]<<" "<<endl;
        cout<<"___|___|___"<<endl;
        cout<<"4  |5  |6  "<<endl;
        cout<<" "<<g1.b[3]<<" | "<<g1.b[4]<<" | "<<g1.b[5]<<" "<<endl;
        cout<<"___|___|___"<<endl;
        cout<<"7  |8  |9  "<<endl;
        cout<<" "<<g1.b[6]<<" | "<<g1.b[7]<<" | "<<g1.b[8]<<" "<<endl;
        cout<<"   |   |   "<<endl<<endl;
  }
} while (option!=0);
  return 0;
}
