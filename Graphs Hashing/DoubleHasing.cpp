#include<iostream>
using namespace std;
int main()
{
    int k = 5;
    int size = 10;
    
    int hastable[size];
    for(int i=0; i<size; i++)
    hastable[i] = -1;
    
    for(int i = 0; i<k; i++)
    {
        int key = 5;
        
        int index = key % size;
        if(hastable[index] == -1)
         hashtable[index] = key;
         
         else
         {
             while(hashtable[index] != -1)
             {
                 index ++;
                 if(index == 10) 
                 index  = 0;
                 
             }
             hashtable[index] = key;
             
         }
    }
    
    for(int i = 0; i<10; i++)
    {
        if(hashtable[i] != 1)
        {
            cout << "\n Index " << i<< ":key =  "<<hashtable[i];
            

        }
        return 0;
        
    }
}
