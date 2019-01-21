
// Joseph Rice
#include <iostream>
using namespace std;

const int row = 7;
const int col = 4;

void fill_array(char a[][col],int index);

void display(char a[][col],int index);


int main()
{  
  char array[row][col];
  int index_col = 4;
  int index_row = 7;
  

  fill_array(array,index_row);
  
  int number_seats = row*col;
  char entry;
  int row;
  while(number_seats>0)
  {
   cout << "what row A B C or D followed by number A# # being (1-7) "<<endl;
   cin >>entry;
    
   if (entry == 'N')
   {

     break; 

   }
   if ((entry == 'A')|| (entry =='a'))
   {
     
     cin >> row;
     array[row-1][0] = 'X';
     number_seats--;
     display(array,index_row);
     
   }
   else if((entry == 'B') || (entry == 'b'))
   {
  
    cin >> row;
    array[row-1][1] = 'X';
    display(array,index_row);
    number_seats--;

   }

   else if ((entry == 'C') || (entry == 'c'))
   {
    
    cin >> row;
    array[row-1][2] = 'X';
    display(array,index_row);
    number_seats--;
   }
   else if ((entry == 'D' ) || (entry == 'd'))
   {

    cin >> row;
    array[row-1][3] = 'X';
    display(array,index_row);
    number_seats--;
   }
   else
   {
    cout <<" That seat does not exits " <<endl;

   }
  
  }

}
   
void fill_array(char a[][col],int index)
{
  
  for(int i=0;i<index;i++)
  {
    a[i][0] = 'A';
    a[i][1] = 'B';
    a[i][2] = 'C';
    a[i][3] = 'D';

  }


}

void display(char a[][col],int index)
{
  
  char A_row,B_row,C_row,D_row;
  
  for (int i=0;i<index;i++)
  {
    A_row = a[i][0];
    B_row = a[i][1];
    C_row = a[i][2];
    D_row = a[i][3];
    
 
    cout<<(i+1)<<"\t"<<" "<<A_row<<""<<B_row<<" "<<C_row<<""<<D_row<<endl; 
  }

}












 
